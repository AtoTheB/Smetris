#ifndef GAMEPLAN_H
#define GAMEPLAN_H

#include"block.h"

class gameplan : public block{
	//Vilka platser �r fyllda
	int plan[20][10];
	
public:
	int checkRows(); 
};

#endif