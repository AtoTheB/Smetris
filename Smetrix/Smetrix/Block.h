#ifndef BLOCK_H
#define BLOCK_H

class block{
	int m_nType;
	int m_nColor;
	//size of each cube in pixels;
	int m_nSize;
public:
	block() : m_nType(0), m_nColor(0), m_nSize(10)	{
	}

};


#endif