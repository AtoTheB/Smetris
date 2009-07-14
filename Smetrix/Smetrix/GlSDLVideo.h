#ifndef GLSDLVIDEO_H
#define GLSDLVIDEO_H

#include<windows.h>
#include<SDL.h>
#include<gl\gl.h>

class glsdlvideo{
	SDL_Surface *screen;
	const int m_nScreenwidth;
	const int m_nScreenheight;


public:
	glsdlvideo() : m_nScreenheight(600), m_nScreenwidth(800)
	{
	}
	int initSdlGl();

};


#endif