#ifndef ERRORHANDLER_H
#define ERRORHANLDER_H
/*
#include<string>
#include<fstream>
#include<stdarg.h>

*/
#include"main.h"

using namespace std;

enum e_Errorcode{
	EC_NoError = 0,
	EC_Unknown,
	EC_Opengl,
	EC_Error
};

class errorhandler{
//VARIABLES 

//FIXA ALLA TILL STRING ISTÄLLET FÖR CHAR.
private:
	//Name of the logfile.
	string m_sLogFileName;
	string m_sErrorMsg;
	//File logging on if m_bOn is true;
	bool m_bOn;
	e_Errorcode m_EC_ID;
public:

//FUNCTIONS
private:
public:
	
	errorhandler( char* filename = "log.txt", bool On = 1 );
	string getError(){ return m_sErrorMsg; }
	void setErrorcode( e_Errorcode EC, char *Errormsg, ... );
	e_Errorcode getErrorcode();
	void showErrormsg();
	//fixa så denna skriver typ app closed i log filen. 
	~errorhandler(){
	}

};


#endif //ERRORHANDLER_H