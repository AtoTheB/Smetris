#ifndef PRIMITIVES_H
#define PRIMITIVES_H

#include"main.h"
#include"texture.h"
#include"Vertex.h"
//Class to store info about primitives tringels and rextangels..

class primitives{
//VARIABLES
private:
	//SKIT I ATT ÄRVA ta som en member istället:
	texture m_tTexture;
	//What kind of smetrix cube, fix own class for this one to not screw up my fine primitive class.
	int m_nType;
	
	//size of each cube side in pixels.;
	//Gameplan height is 20*size pixels, gameplan width is 10*size pixels. 
	double m_nSize;
	
	//Position, maybe fix so all corners get own x y pos, like this: 
	/*
	in constructor like &vertex = new int [corners];
	This will make draw more flexible.. Maybe just overload the constructor, so i can choose wich way to create a primitive.
	LIMIT SO ONLY CAN DRAW primitives with 3 or 4 corners. 
	*/
	&m_vVortex1 = new Vortex[corners];
	//Number of corners.
	int m_nCorners;
	//Rotation 
	double m_dRotation;
	//What depth to be drawn to.
	double m_dDepth;
	//Surface to draw to.
	SDL_Surface *m_SDLSurface;

public:

protected:

//FUNCTIONS
private:

public:
	primitives( int Corners) : m_nType(0), m_nSize(20), m_dRotation(0), m_dDepth(0): m_nCorners()
	{	
		//fixa denna if sats 
		if( Corners =! 3 || Corners =! 4 )
			//errorhandler: error för ,många få hörn.. 
	}
	//Draw the primitive to m_SDLSurface
	int draw(); 
protected:

};


#endif //PRIMITIVES_H