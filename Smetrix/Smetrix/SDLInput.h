#ifndef SDLINPUT_H
#define SDLINPUT_H

#include<SDL.h>

class SDLInput{
	Uint8 *m_Keyevent;

public:
	int getKeyState();

};


#endif 