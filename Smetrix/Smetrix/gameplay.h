#ifndef GAMEPLAYH
#define GAMEPLAYH

#include"main.h"

class input{
	Uint8 *m_Keyevent;
	int m_Gameover;
public:
	int getKeyState();
	int userQuit();
	int gameStart();

};

int gamePlay( game &gameinfo );
	


#endif