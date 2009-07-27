#include"Errorhandler.h"
#include"Gameinfo.h"
#include"GlSDLVideo.h"
#include"windows.h"

using namespace std;

int main(int argc, char *argv[]){
	gameinfo c_Gameinfo;
	glsdlvideo c_Video;
	errorhandler c_ErrorLogging;
	
	//FIXA s� errorhandler finns med i alla funktions anropp, �ven c_Video ska med f�r d�r ligger surfacen att rita p�
	try{
		c_Video.initSdlGl();
		c_Gameinfo.gameLoop();
	}
	catch( e_Errorcode ){
		//Fixa s� allt minne av-allokeras h�r
		c_ErrorLogging.showErrormsg();
		c_ErrorLogging.~errorhandler();
		return -1;
	}
	
	SDL_Quit();
	return 0;

}

