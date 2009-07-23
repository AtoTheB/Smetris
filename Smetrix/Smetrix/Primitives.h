#ifndef PRIMITIVES_H
#define PRIMITIVES_H

#include"main.h"
#include"Texture.h"
#include"Vertex.h"
//Class to store info about primitives tringels and rextangels..

class primitives{
//VARIABLES
private:

	texture m_tTexture;
	//What kind of smetrix cube, fix own class for this one to not screw up my fine primitive class.
	int m_nType;
	
	//size of each cube side in pixels.;
	//Gameplan height is 20*size pixels, gameplan width is 10*size pixels. 
	double m_nSize;
	
	Vertex *m_vVertex;
	//Number of corners.
	int m_nCorners;
	//Rotation 
	double m_dRotation;
	//What depth to be drawn to.
	double m_dDepth;
	//Surface to draw to. Hmm cant draw to its own surface.. FIX.
	SDL_Surface *m_SDLSurface;

public:

protected:

//FUNCTIONS
private:

public:
	primitives( int Corners = 3) : m_nType(0), m_nSize(20), m_dRotation(0), m_dDepth(0)
	{	
		//fixa denna if sats 
		if( Corners == 3 || Corners == 4 ){
			m_vVertex = new Vertex[Corners];
			m_nCorners = Corners;
		}
		else {
			//kan inte returnera värde från constructor, kolla om felkod satt istället..
			//return -1
			//errorhandler: error för ,många få hörn.. 
		}
	}
	~primitives(){
		delete []m_vVertex;
		m_vVertex = NULL;
	}
	//Draw the primitive to m_SDLSurface
	int draw(); 
protected:

};


#endif //PRIMITIVES_H