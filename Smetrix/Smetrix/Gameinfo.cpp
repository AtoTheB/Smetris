#include"Gameinfo.h"




int gameinfo::gameOver(){
	if( m_nGameover == 1)
	return 1;

	return 0;
}

int gameinfo::gameLoop(){

	while( !gameOver() ){

	Sleep(100);	
	m_nUserWant = getKeyState();
	userWantDo( m_nUserWant );
	}
	
	
	return 0;
}

int gameinfo::userWantDo( int m_nUserWant ){
	
	if ( m_nUserWant == -1 )
		m_nGameover = 1;

	return 0;
}