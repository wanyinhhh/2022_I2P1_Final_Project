## function
void al_rest(double time)

## display
	ALLEGRO_DISPLAY* display = NULL; //declare display variable.
	al_flip_display(); //show the content of what you draw
	al_destroy_display(display);

## display window 
	display = al_create_display(width, height); //create display
	al_set_window_position(display, x, y); //set display position(x: right,y: down)
	al_clear_to_color(al_map_rgb(r, g, b));// fill the window with red

## display font
	#include <allegro5/allegro_font.h> //include the head file of font
	#include <allegro5/allegro_ttf.h> //include the head file of ttf
	ALLEGRO_FONT *font; //declare font variable
	al_init_font_addon(); //initialize font
    al_init_ttf_addon(); //initialize ttf
    font = al_load_ttf_font("tff_path", int size_of_font, flag/*usually 0*/); //load font
    al_draw_text(font, al_map_rgb(r,g,b), pos_x,pos_y,choice,text); //draw some text
    //choice=ALLEGRO_ALIGN_CENTRE,ALLEGRO_ALIGN_RIGHT,ALLEGRO_ALIGN_LEFT
    al_destroy_font(font); //destroy font

## display img
	#include <allegro5/allegro_image.h>//include the head file of image
	ALLEGRO_BITMAP *img; //declare image variable
	al_init_image_addon();//initialize image
	img = al_load_bitmap(image_path); //load image
    al_draw_bitmap(img, up_letf_x, up_left_y, flag); //draw image
    // flag=0,ALLEGRO_FLIP_HORIZONTAL,ALLEGRO_FLIP_VERTICAL
    al_destroy_bitmap(img); //destroy image
    
    ### related function
    	width=al_get_bitmap_width(bitmap);
    	height=al_get_bitmap_height(bitmap);


## display hollow rectangle
    #include <allegro5/allegro_primitives.h>
    al_init_primitives_addon();
    al_draw_rectangle(up_letf_x,up_left_y,down_right_x,down_right_y,al_map_rgb(r,g,b), edge_width);//draw rectangle
    //no destroy

## event queue
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;//declare event queue
	ALLEGRO_EVENT event//declare event
	event_queue = al_create_event_queue();//create event queue
	al_register_event_source(event_queue, al_get_display_event_source(display));//register event
	al_wait_for_event(event_queue, &event);//get event from event queue
	/* event.type (get the type of event)*/
	al_destroy_event_queue(event_queue);//destroy event queue

	### related function
		al_is_event_queue_empty(event_queue);
		/* keyborad event*/
			al_install_keyboard();//install keyboard
			al_register_event_source(event_queue, al_get_keyboard_event_source());
			event.type==ALLEGRO_EVENT_KEY_DOWN;//press keyboard
			event.type==ALLEGRO_EVENT_KEY_UP;//release keyboard
			/*even.keyboard.keycode (get which key cause the event) */
		/*mouse event*/
			al_install_mouse();//install mouse
    		al_register_event_source(event_queue, al_get_mouse_event_source());
    		event.type==ALLEGRO_EVENT_MOUSE_BUTTON_DOWN//click
    		event.mouse.button==1//left button
    		event.mouse.button==2//right button
    		event.type==ALLEGRO_EVENT_MOUSE_AXES//One or more mouse axis values changed. 
    		pos_x = event.mouse.x;
        	pos_y = event.mouse.y;

## display sound
    //TBA
## display video 
    //TBA
## display gif
    //TBA

int jump_speed,jump_time,init_y;
chara.jump_speed=20;
chara.jump_time = 0;