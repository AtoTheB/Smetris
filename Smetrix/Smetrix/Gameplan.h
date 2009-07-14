#ifndef GAMEPLAN_H
#define GAMEPLAN_H

#include"block.h"

class gameplan : public block{
	//Whats currently on the gameplan.
	int m_nPlan[20][10];

public:
	int checkRows(); 
};

#endif