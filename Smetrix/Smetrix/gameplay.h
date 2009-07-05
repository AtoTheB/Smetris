#ifndef GAMEPLAYH
#define GAMEPLAYH

#include"main.h"

class input{
	Uint8 *keyevent;
	int gameover;
public:
	int getKeyState();
	int userQuit();

};

int gamePlay( game &gameinfo );
	


#endif