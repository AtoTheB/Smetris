#include"Gameinfo.h"
#include<SDL.h>
#include<windows.h>

int gameinfo::gameLoop(){


	MessageBox(NULL,"Gamestarted","Smetrix",MB_OK);	
	
	while( !gameOver() ){
		pollEvent();
		Sleep(100);	
	}

	return 0;
}

