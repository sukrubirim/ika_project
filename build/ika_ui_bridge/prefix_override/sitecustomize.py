import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sukru/ika_teknofest_aventra_ws/install/ika_ui_bridge'
