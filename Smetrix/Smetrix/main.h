#ifndef MAIN_H
#define MAIN_H

#include<windows.h>
#include<iostream>
#include"Gameinfo.h"
#include"GlSDLVideo.h"
#include"SDLInput.h"
#include"Texture.h"
#include"Drawgame.h"


//Flytta dess 2 till egna filer..
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