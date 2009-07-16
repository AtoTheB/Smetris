#ifndef ERRORHANDLER_H
#define ERRORHANLDER_H

#include<string>
#include<fstream>

enum e_Errorcode{
	NoError = 0,
	Unknown,
	Opengl
};

class errorhandler{
	char* m_sLogfile;
	bool m_bOn;
	char* m_sErrormsg;
	e_Errorcode m_EC_ID;
public:
	errorhandler( char* filename = "log.txt", bool On = 1 );
	
	char* getError(){ return m_sErrormsg };
	void setErrorcode( e_Errorcode EC, char *Errormsg );
	e_Errorcode getErrorcode();

};


#endif