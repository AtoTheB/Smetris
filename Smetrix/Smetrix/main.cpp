#include"Errorhandler.h"
#include"Gameinfo.h"
#include"GlSDLVideo.h"
#include"windows.h"

using namespace std;

int main(int argc, char *argv[]){
	gameinfo c_Gameinfo;
	glsdlvideo c_Video;
	errorhandler c_ErrorLogging;
	
	//FIXA så errorhandler finns med i alla funktions anropp, även c_Video ska med för där ligger surfacen att rita på
	try{
		c_Video.initSdlGl();
		c_Gameinfo.gameLoop();
	}
	catch( e_Errorcode ){
		//Fixa så allt minne av-allokeras här
		c_ErrorLogging.showErrormsg();
		c_ErrorLogging.~errorhandler();
		return -1;
	}
	
	SDL_Quit();
	return 0;

}

