#ifndef PRIMITIVES_H
#define PRIMITIVES_H

#include"main.h"
#include"texture.h"
//Class to store info about primitives like triangles and rectangles for using with the draw function.

class primitives : texture{
//VARIABLES
private:
	
	//What kind of smetrix cube, fix own class for this one to not screw up my fine primitive class.
	int m_nType;
	
	//size of each cube side in pixels.;
	//Gameplan height is 20*size pixels, gameplan width is 10*size pixels. 
	double m_nSize;
	
	//Position, maybe fix so all corners get own x y pos, like this: 
	/*
	in constructor like &corners = new int [corners];
	This will make draw more flexible.. Maybe just overload the constructor, so i can choose wich way to create a primitive.
	LIMIT SO ONLY CAN DRAW primitives with 3 or 4 corners. 
	*/
	double m_nX;
	double m_nY;
	
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
	primitives() : m_nType(0), m_nSize(20), m_dRotation(0), m_dDepth(0)
	{
	}
	//Draw the primitive to m_SDLSurface
	int draw(); 
protected:

};


#endif //PRIMITIVES_H