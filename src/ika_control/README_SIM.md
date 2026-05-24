# IKA Gazebo 4-wheel diff-drive control

Bu paket Gazebo Classic içinde `gazebo_ros2_control` + `diff_drive_controller` kullanır.

## Çalıştırma

Terminal 1:

```bash
cd ~/ika_teknofest_aventra_ws
source install/setup.bash
ros2 launch ika_gazebo teknofest_sim.launch.py
```

Terminal 2:

```bash
source ~/ika_teknofest_aventra_ws/install/setup.bash
ros2 launch ika_control spawn_controllers.launch.py
```

Kontrol:

```bash
ros2 control list_controllers
ros2 control list_hardware_interfaces
```

Robot hareket testi:

```bash
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.4}, angular: {z: 0.1}}"
```

Kayar engel ayrı namespace kullanır:

```bash
ros2 topic pub /slider/cmd_vel geometry_msgs/msg/Twist "{linear: {y: 0.2}, angular: {z: 0.0}}"
```
