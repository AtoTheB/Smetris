#ifndef ERRORHANDLER_H
#define ERRORHANLDER_H
/*
#include<string>
#include<fstream>
#include<stdarg.h>

*/
#include"main.h"

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
	char m_sLogfile[256];
	//File logging on if m_bOn is true;
	bool m_bOn;
	char m_sErrormsg[1024];
	e_Errorcode m_EC_ID;
public:

//FUNCTIONS
private:
public:
	
	errorhandler( char* filename = "log.txt", bool On = 1 );
	char getError(){ return *m_sErrormsg; }
	void setErrorcode( e_Errorcode EC, char *Errormsg, ... );
	e_Errorcode getErrorcode();
	void showErrormsg();

};


#endif //ERRORHANDLER_H