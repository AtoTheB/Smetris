#include"gameplay.h"


int gamePlay(){
	
	input keyboard;
		//Fixa funk för detta..
	while( gameinfo.gameover == 0 ){
		keyboard.getKeyState();	

	
	}

	return 0;
}

int input::getKeyState(){
	keyevent = SDL_GetKeyState(NULL);
	if( keyevent[SDLK_ESCAPE] )
		//game
		return 0;
	return 0;
}