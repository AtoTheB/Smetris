#ifndef GAMEINFO_H
#define GAMEINFO_H

#include"SDLInput.h"
#include<SDL.h>
#include<windows.h>
#include"main.h"

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
	//FIXA PROTECED p� vissa saker = derived classes har access till dom som �r protected.
	enum e_gameStatus : int{
		UserExit = -1,
		Running,
		Paused,
		Starting,
		Exiting, 
		Error
	};

	
public:
	gameinfo() : m_nPoints(0), m_nLevel(0), m_nRows(0), m_nSmetrix(0)
	{
	}
	int gameLoop();
	
	//Dont know if i will use this, but added for remembering the way to do it.
	e_gameStatus getGameStatus(){
		if(1)
		return Running;
	}

};

#endif