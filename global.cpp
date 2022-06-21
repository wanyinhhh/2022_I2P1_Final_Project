#include "global.h"

// variables for global usage
const float FPS = 60.0;
const int WIDTH = 1920;
const int HEIGHT = 1080;
const int MAX_WALL=30;
bool SUPER_MODE=false;
int move_cnt=1,movable[2];
w wall[MAX_WALL];
int wall_count,next_window=0;
int level1_trap[9]={-1,-1,-1,1,-1,-1,-1,0,-1};
int level1_tool[9]={-1,0,3,-1,-1,-1,-1,-1,-1};
int level2_trap[13]={-1,-1,-1,1,-1,2,-1,-1,-1,-1,0,0,-1};
int level2_tool[13]={-1,0,-1,-1,-1,-1,1,-1,2,3,-1,-1,-1};
int level3_trap[14]={-1,1,-1,-1,0,0,1,1,2,0,-1,1,2,-1};
int level3_tool[14]={-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
ALLEGRO_BITMAP *img_tool[7];
ALLEGRO_BITMAP *img_trap[5];
ALLEGRO_BITMAP *img_t[4];
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *fps = NULL;
bool key_state[ALLEGRO_KEY_MAX] = {false};
bool judge_next_window = false;
