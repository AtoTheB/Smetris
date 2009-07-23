#include"main.h"
#include"Errorhandler.h"

using namespace std;

int main(int argc, char *argv[]){
	gameinfo c_Gameinfo;
	glsdlvideo c_Video;
	errorhandler c_ErrorLogging;
	
	//L�gg in felhantering i alla klassers funktioner s� rad10 har n�n mening.
	c_Video.initSdlGl();
	if( c_ErrorLogging.getErrorcode() != EC_NoError ){
		c_ErrorLogging.showErrormsg();
		return -1;
	}

	c_ErrorLogging.showErrormsg();
	if( c_ErrorLogging.getErrorcode() != EC_NoError ){
		c_ErrorLogging.showErrormsg();
		return -1;
	}

	c_Gameinfo.gameLoop();
	if( c_ErrorLogging.getErrorcode() != EC_NoError ){
		c_ErrorLogging.showErrormsg();
		return -1;
	}
	
	SDL_Quit();
	return 0;

}

