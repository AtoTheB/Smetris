#ifndef MAINH
#define MAINH

#include<windows.h>
#include<SDL.h>
#include<iostream>
#include<gl\gl.h>
#include<SDL_image.h>

#define SCREEN_WIDTH 120 ;
#define SCREEN_HEIGHT 220;

class game{
	SDL_Surface *screen;
	int gameover;
	
public:
	int initSdl();
	int initGlVideo();
};

class block{
	//color
	//type
	//
};

class gameplan{
	//Vilka platser är fyllda
	int plan[20][10];
	
public:
	int checkRows(); 
};


#endif