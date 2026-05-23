std_msgs/Header header

uint8 mission_mode
uint8 current_stage
uint8 mission_status

string stage_name
string status_text

bool autonomous_enabled
bool emergency_stop_active

float32 elapsed_time_sec

uint8 MODE_MANUAL=0
uint8 MODE_AUTONOMOUS=1
uint8 MODE_TEST=2

uint8 STATUS_IDLE=0
uint8 STATUS_RUNNING=1
uint8 STATUS_PAUSED=2
uint8 STATUS_COMPLETED=3
uint8 STATUS_ERROR=4