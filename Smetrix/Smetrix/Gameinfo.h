#ifndef GAMEINFO_H
#define GAMEINFO_H

#include"SDLInput.h"
#include<SDL.h>
#include<windows.h>

class gameinfo : public SDLInput{
	//Is in input now
	//	bool m_nGameover;
	int m_nPoints;
	//What level.
	int m_nLevel;
	//Nro removed rows.
	int m_nRows;
	// Nro 4x combos.
	int m_nSmetrix;
	//Return value from input i stored in this.
	
public:
	gameinfo() : m_nPoints(0), m_nLevel(0), m_nRows(0), m_nSmetrix(0)
	{
	}
	int gameLoop();


};




#endif