#ifndef VERTEX_H
#define VERTEX_H

class Vertex{
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
	void move(double X, double Y, double Z);
	inline double getX(){ return m_dX; }
	inline double getY(){ return m_dY; }
	inline double getZ(){ return m_dZ; }
};

#endif //VERTEX_H