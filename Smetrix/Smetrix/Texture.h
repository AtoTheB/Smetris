#ifndef TEXTURE_H
#define TEXTURE_H

#include"SDL_image.h"
#include"Vertex.h"

class texture{
	//VARIABLES
private:
	//gltexture m_tTexture;
	

public:
protected:
	//Cords for texture, from corner 0 to corner 3;
	Vertex m_vV0;
	Vertex m_vV1;
	Vertex m_vV2;
	Vertex m_vV3;
	SDL_Surface *m_SDLSurface;

	//FUNCTIONS
private:
protected: 
public:
	//Texture coords from the texture file opened;
	texture(): Vertex m_vV1, Vertex m_vV2, Vertex m_vV3 
	{ 
	}
};

#endif //TEXTURE_H


