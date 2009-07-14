#ifndef BLOCK_H
#define BLOCK_H

class block{
	int m_nType;
	int m_nColor;
	//size of each cube side in pixels.;
	//Gameplan height is 20*size pixels, gameplan width is 10*size pixels. 
	int m_nSize;
public:
	block() : m_nType(0), m_nColor(0), m_nSize(20)	{
	}

};


#endif