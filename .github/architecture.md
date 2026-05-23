% İKA Robot UI Mimari Dokümantasyonu

Bu doküman TEKNOFEST İnsansız Kara Aracı yarışması için önerilen UI-bridge mimarisini özetler.

## Genel yapı
- ROS2 tarafı: Gerçek robot yazılımı, sensör/aktüatör node'ları, `ika_msgs`.
- `ika_ui_bridge` (ROS2 Python paketi): ROS2 topic/subscription -> durumsal model (status cache) -> UI ile haberleşme (WebSocket + REST + MJPEG). Komutları ROS2 service/action/topic'lara çevirir.
- Java Swing UI: Ayrı bağımsız Java uygulaması. WebSocket ile gerçek-zamanlı durum alır, kamera için MJPEG/WS stream client kullanır. REST veya WebSocket ile komut gönderir.

## Neden WebSocket + REST?
- Gerçek zamanlı durumlar (telemetri, alarm, mission_state): WebSocket ile push (düşük gecikme, çift yönlü).
- Komutlar (set_mode, emergency_stop, data_logger): Hem WebSocket mesajı hem REST endpoint üzerinden desteklenebilir — REST ack gerektiğinde faydalıdır.
- Kamera: MJPEG veya WebSocket üzerinden JPEG frame; MJPEG HTTP stream kolay gösterim, WebSocket frame düşük gecikme sağlar.

## Veri akışı (örnek)
- ROS2 -> `ika_ui_bridge` subscriber -> `status_cache` güncellenir.
- `status_cache` belirli aralıklarla (ör. 200ms) tümleşik `robot_status` JSON mesajı WebSocket ile UI'lara broadcast eder.
- Kamera streamler ayrı HTTP/MJPEG endpoint veya ayrı WS yoluyla taşınır.
- UI komutu: WebSocket veya REST -> `command_handler` -> ilgili ROS2 srv/topic/action çağrısı.

## Güvenlik akışı
- Emergency stop öncelikli: bridge `safety_manager` ile servis çağrısı veya latch topic publish.
- Lazer ateşleme iki aşamalı: `laser_arm` (authorize) -> `laser_fire` (only if armed && target_locked && safety_ok).
- Bridge bağlantısı koparsa robot default güvenli moda geçirilmeli (configurable). UI kopukluğu durumunda bridge lokal güvenlik politikalarını uygulamalı.
