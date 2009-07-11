#ifndef SDLINPUT_H
#define SDLINPUT_H

#include<SDL.h>
#include"Gameinfo.h"

class SDLInput{
	Uint8 *m_Keyevent;

public:
	int getKeyState();
	int userQuit();

	friend class gameinfo;

};


#endif 