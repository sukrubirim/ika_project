import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yildiz/IKA_AVENTRA_WORKSPACE/ika_aventra/install/ika_perception'
