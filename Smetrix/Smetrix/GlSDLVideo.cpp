#include"GlSDLVideo.h"
#include"Gameinfo.h"
#include<iostream>

int glsdlvideo::initSdlGl(){
	using namespace std;
	
	cerr << "Video Initializing." << endl;
	
	if( SDL_Init(SDL_INIT_VIDEO)< 0 )
		cout << "Error Initializing SDL" << SDL_GetError()<<endl;

	SDL_WM_SetCaption("Smetrix", NULL ); 
	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE,8 );
	SDL_GL_SetAttribute( SDL_GL_BUFFER_SIZE, 32 );
	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE,16 );
	SDL_GL_SetAttribute( SDL_GL_ACCUM_RED_SIZE,5 );
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER,1 );
    SDL_SetVideoMode( m_nScreenwidth, m_nScreenheight, 0, SDL_OPENGL );
    glViewport(0, 0, m_nScreenwidth, m_nScreenheight);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f );
    glClearDepth( 1.0 );
    glDepthFunc(GL_LESS);
    glEnable( GL_DEPTH_TEST );
    glShadeModel( GL_SMOOTH );
    glMatrixMode( GL_PROJECTION );
    glMatrixMode( GL_MODELVIEW );

	cerr << "Video Initialized." << endl;
	
	return 0;
}