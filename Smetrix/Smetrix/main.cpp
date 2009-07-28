#include"Errorhandler.h"
#include"Gameinfo.h"
#include"GlSDLVideo.h"
#include"windows.h"

using namespace std;

int main(int argc, char *argv[]){
	gameinfo c_Gameinfo;
	glsdlvideo c_Video;
	errorhandler c_ErrorLogging;
	
	try{
		c_Video.initSdlGl( c_ErrorLogging );
		//skicka m ed C_Video som referens.
		c_Gameinfo.gameLoop();
	}
	catch( e_Errorcode EC ){
		
		switch( EC ){
			case EC_SDL : {
				c_ErrorLogging.setErrorcode( EC_SDL, SDL_GetError(), false );
				break;
			}
			case EC_BadValue :{
				c_ErrorLogging.setErrorcode( EC_Unknown, "Bad Value.", false );
				break;
    		}
			default : {
				c_ErrorLogging.setErrorcode( EC_Unknown, "Unknown error.", false );
				break;
			}
		}
		//Fixa så allt minne av-allokeras här
		c_ErrorLogging.showErrormsg();
		
		SDL_Quit();
		return -1;
	}
	// SDL_Quit tar bort ev surfaces.. http://lists.libsdl.org/pipermail/sdl-libsdl.org/2006-August/057424.html
	SDL_Quit();
	return 0;

}

