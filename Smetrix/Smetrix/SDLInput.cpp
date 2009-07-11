#include"SDLInput.h"


int SDLInput::getKeyState(){
	
	m_Keyevent = SDL_GetKeyState(NULL);
	if( m_Keyevent[SDLK_ESCAPE] )
		//userQuit();
	
	return 0;
}

int SDLInput::userQuit(){
	
//	gameinfo.m_nGameover = 1
		return 1;
		return 0;
}





