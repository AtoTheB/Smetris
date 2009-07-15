#include"Gameinfo.h"
#include<iostream>


int gameinfo::gameLoop(){
	using namespace std;
	// c++ note, endl flushes. 
	cerr << "Entering gameloop." << endl;
	
	MessageBox(NULL,"Gamestarted","Smetrix",MB_OK);	
	
	while( !gameOver() ){
		pollEvent();
		Sleep(100);	
	}

	cerr << "Exiting gameloop." << endl;
	return 0;
}

