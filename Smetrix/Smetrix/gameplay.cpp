#include"gameplay.h"


int gamePlay(game &gameinfo){
	
	input ckeyboard;

	ckeyboard.gameStart();

	while( ckeyboard.userQuit() ){
		ckeyboard.getKeyState();	

	
	}

	return 0;
}

int input::getKeyState(){
	
	m_Keyevent = SDL_GetKeyState(NULL);
	if( m_Keyevent[SDLK_ESCAPE] )
		m_Gameover = 1;
	
	return 0;
}

int input::userQuit(){
	
	if (m_Gameover == 1)
		return 1;
	else 
		return 0;
}

int input::gameStart(){
	m_Gameover = 1;
	return 0;
}