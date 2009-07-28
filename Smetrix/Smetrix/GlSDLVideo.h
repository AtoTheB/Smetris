#ifndef GLSDLVIDEO_H
#define GLSDLVIDEO_H

#include<windows.h>
#include<SDL.h>
#include<gl\gl.h>

class errorhandler;

class glsdlvideo{
	SDL_Surface *screen;
	int m_nScreenWidth;
	int m_nScreenHeight;

public:
	glsdlvideo(): m_nScreenHeight(600), m_nScreenWidth(800)	{
	}
	glsdlvideo(int Width, int Height){
		m_nScreenWidth = Width;
		m_nScreenHeight = Height;
	}
	~glsdlvideo(){
	}
	int initSdlGl( errorhandler &c_Errorlogging );

};


#endif //GLSDLVIDEO_H