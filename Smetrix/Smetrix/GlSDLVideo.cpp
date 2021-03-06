#include"GlSDLVideo.h"
#include"Errorhandler.h"

using namespace std;

int glsdlvideo::initSdlGl( errorhandler &c_ErrorLogging ){
	
	if( m_nScreenWidth <= 0 || m_nScreenHeight <= 0)
		throw EC_BadValue;

	if( SDL_Init(SDL_INIT_EVERYTHING) < 0 )
		throw EC_SDL;
	
	SDL_WM_SetCaption("Smetrix", NULL ); 
	if( SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 ) < 0)
		throw EC_SDL;
	if( SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 ) < 0 )
		throw EC_SDL;
	SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE,8 );
	SDL_GL_SetAttribute( SDL_GL_BUFFER_SIZE, 32 );
	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE,16 );
	SDL_GL_SetAttribute( SDL_GL_ACCUM_RED_SIZE,5 );
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER,1 );
    if( SDL_SetVideoMode( m_nScreenWidth, m_nScreenHeight, 0, SDL_OPENGL ) == NULL)
		throw EC_SDL;
    glViewport(0, 0, m_nScreenWidth, m_nScreenHeight);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f );
    glClearDepth( 1.0 );
    glDepthFunc(GL_LESS);
    glEnable( GL_DEPTH_TEST );
    glShadeModel( GL_SMOOTH );
    glMatrixMode( GL_PROJECTION );
    glMatrixMode( GL_MODELVIEW );

	return 0;
}