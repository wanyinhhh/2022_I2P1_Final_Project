#include "global.h"
#include "charater.h"
#include "scene.h"

int Game_establish();
void game_init();
void game_begin();
void game_update();
int process_event();
void game_draw();
int game_run();
void game_destroy();
void gui_process(ALLEGRO_EVENT event);
void tool_process(ALLEGRO_EVENT event);
