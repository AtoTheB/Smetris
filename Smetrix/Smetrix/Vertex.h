#ifndef VERTEX_H
#define VERTEX_H

#include"main.h"

class Vertex(){
	//Variables 
private: 
	double m_dX;
	double m_dY;
	double m_dZ;
protected:

public:

	//Functions
private: 
	
protected:

public:
	Vertex() : m_dX(0), m_dY(0), m_dZ(0)
	{
	}
	void move(double X = m_dX, double Y = m_dY, double Z = mdZ );

};

#endif //VERTEX_H