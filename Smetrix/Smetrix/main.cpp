#include"main.h"


int main(int argc, char *argv[]){
	game gameinfo;

	SDL_Quit();
	return 0;

}

int initSdl(){
	
	SDL_Init(SDL_INIT_VIDEO);
	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE,8 );
	SDL_GL_SetAttribute( SDL_GL_BUFFER_SIZE, 32 );
	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE,16 );
	SDL_GL_SetAttribute( SDL_GL_ACCUM_RED_SIZE,5 );
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER,1 );
    SDL_SetVideoMode( 120, 220, 0, SDL_OPENGL | SDL_HWSURFACE | SDL_NOFRAME );
    glViewport(0, 0, 120, 220);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f );
    glClearDepth( 1.0 );
    glDepthFunc(GL_LESS);
    glEnable( GL_DEPTH_TEST );
    glShadeModel( GL_SMOOTH );
    glMatrixMode( GL_PROJECTION );
    glMatrixMode( GL_MODELVIEW );
	
	return 0;
}