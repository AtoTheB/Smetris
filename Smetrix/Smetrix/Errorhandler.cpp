#include"Errorhandler.h"
#include<time.h>

using namespace std;

errorhandler::errorhandler( char* filename, bool On ){
	
	m_bOn = On;
	
	va_list ap;
	va_start( ap, filename );
	vsprintf(m_sLogfile, filename, ap);
	va_end(ap);
	
	if(!m_bOn)
		return;

	ofstream outf(m_sLogfile, ios_base::app);
	char tmptime[12];
	char tmpdate[12];
	_strdate(tmpdate);
	_strtime(tmptime);
	//make test here if file pointer is open.. Maybe a try-throw-catch?
	outf<<"(DD/MM/Y)" << tmpdate << "(HH:MM:SS)" << tmptime << endl << endl; 
	setErrorcode( EC_NoError, "No Error" );
}

void errorhandler::setErrorcode( e_Errorcode EC, char *Errormsg, ... ){
	va_list ap;
	va_start( ap, Errormsg );
	vsprintf(m_sErrormsg, Errormsg, ap);
	va_end(ap);
	
	m_EC_ID = EC;
	
	if(!m_bOn)
		return;

	ofstream outf(m_sLogfile, ios_base::app);
	//make test here if file pointer is open.. Maybe a try-throw-catch?
	outf << m_sErrormsg << endl;
	

}