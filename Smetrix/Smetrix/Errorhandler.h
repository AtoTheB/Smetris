#ifndef ERRORHANDLER_H
#define ERRORHANLDER_H

#include<string>
#include<fstream>

enum e_Errorcode{
	EC_NoError = 0,
	EC_Unknown,
	EC_Opengl
};

class errorhandler{
//VARIABLES 
private:
	char m_sLogfile[256];
	bool m_bOn;
	char m_sErrormsg[1024];
	e_Errorcode m_EC_ID;
public:

//FUNCTIONS
private:
public:
	
	errorhandler( char* filename = "log.txt", bool On = 1 );
	char getError(){ return *m_sErrormsg; }
	void setErrorcode( e_Errorcode EC, char *Errormsg );
	e_Errorcode getErrorcode();

};


#endif