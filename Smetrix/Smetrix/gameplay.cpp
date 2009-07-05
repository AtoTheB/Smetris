#include"gameplay.h"


int gamePlay(game &gameinfo){
	
	input keyboard;
	
	while( keyboard.userQuit ){
		keyboard.getKeyState();	

	
	}

	return 0;
}

int input::getKeyState(){
	
	keyevent = SDL_GetKeyState(NULL);
	if( keyevent[SDLK_ESCAPE] )
		gameover = 1;
	
	return 0;
}

int input::userQuit(){
	
	if (gameover == 1)
		return 1;
	else 
		return 0;
}