#include"SDLInput.h"


int SDLInput::getKeyState(){
	
	m_Keyevent = SDL_GetKeyState(NULL);
	if( m_Keyevent[SDLK_ESCAPE] )
		return -1;
	
	return 0;
}







