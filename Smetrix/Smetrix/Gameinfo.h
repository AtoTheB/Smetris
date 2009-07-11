#ifndef GAMEINFO_H
#define GAMEINFO_H

class gameinfo{
	int m_nGameover;
	int m_nPoints;
	//What level.
	int m_nLevel;
	//Nro removed rows.
	int m_nRows;
	// Nro 4x combos.
	int m_nSmetrix;
	
public:
	gameinfo() : m_nGameover(0), m_nPoints(0), m_nLevel(0), m_nRows(0), m_nSmetrix(0)
	{
	}
	int gameOver();
};




#endif