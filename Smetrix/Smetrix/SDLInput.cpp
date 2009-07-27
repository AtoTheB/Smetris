#include"SDLInput.h"

int SDLInput::getKeyState(){
	
	m_nKeystate = SDL_GetKeyState(NULL);
	if( m_nKeystate[SDLK_ESCAPE] )
		return -1;
	
	return 0;
}

int SDLInput::pollEvent(){
	while (SDL_PollEvent(&m_tKeyboardevent)) {
			if (m_tKeyboardevent.type == SDL_QUIT
					|| (m_tKeyboardevent.type == SDL_KEYDOWN
					&& m_tKeyboardevent.key.keysym.sym == SDLK_ESCAPE)) {
						m_nGameover = 1;
				userQuit();
				return 0;
			}
		}
	return 0;
}

int SDLInput::userQuit(){
	m_nGameover = 1;
	return 0;
}

bool SDLInput::gameOver(){
	if( m_nGameover == 1)
	return 1;

	return 0;
}




