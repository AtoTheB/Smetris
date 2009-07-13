#include"main.h"


int main(int argc, char *argv[]){
	gameinfo c_Gameinfo;
	glsdlvideo c_Video;

	c_Video.initSdlGl();

	c_Gameinfo.gameLoop();
	
	SDL_Quit();
	return 0;

}

