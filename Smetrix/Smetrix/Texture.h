#ifndef TEXTURE_H
#define TEXTURE_H

#include<SDL_Image.h>
#include<gl\gl.h>
#include<windows.h>
#include"Vertex.h"
#include<string>

using namespace std;

class texture{
	//VARIABLES
private:
	GLuint *m_tTexture;
	string m_sTextureFileName;
	

public:
protected:
	//Cords for texture, from corner 0 to corner 3;
	Vertex m_vVortex[4];
	SDL_Surface *m_SDLSurface;

	//FUNCTIONS
private:
protected: 
public:
	//Texture coords from the texture file opened;
	texture() : m_SDLSurface(NULL)
	{
	}
	virtual ~texture();
};

#endif //TEXTURE_H


