#ifndef SDLINPUT_H
#define SDLINPUT_H

#include<SDL.h>

class SDLInput{
	Uint8 *m_nKeystate;
	SDL_Event m_tKeyboardevent;
	bool m_nGameover;
public:
	SDLInput() : m_nGameover(0)	{
	}
	int getKeyState();
	int pollEvent();
	bool gameOver();
	int userQuit();

};


#endif 