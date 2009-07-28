#ifndef ERRORHANDLER_H
#define ERRORHANLDER_H

#include<string>

using namespace std;

enum e_Errorcode{
	EC_NoError = 0,
	EC_Unknown,
	EC_Opengl,
	EC_SDL,
	EC_Error,
	EC_BadValue
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
	inline string getError(){ return m_sErrorMsg; }
	void setErrorcode( e_Errorcode EC, char *Errormsg, bool Throw );
	//Varför dom 3 punkterna ???
	//void setErrorcode( e_Errorcode EC, char *Errormsg, ... );
	e_Errorcode getErrorcode();
	void showErrormsg();
	//fixa så denna stänger fil. 
	~errorhandler(){
	}

};


#endif //ERRORHANDLER_H