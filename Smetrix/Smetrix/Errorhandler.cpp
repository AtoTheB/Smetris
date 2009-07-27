#include"Errorhandler.h"
#include<time.h>
#include<fstream>
#include<stdarg.h>
#include<windows.h>

errorhandler::errorhandler( char* filename, bool On ){
	
	m_bOn = On;
	/* OLD CODE FROM WHEN ERRORFILE WAS A C-Char string
	va_list ap;
	va_start( ap, filename );
	vsprintf(m_sLogfile, filename, ap);
	va_end(ap);
	*/
	m_sLogFileName = filename;
	if(!m_bOn)
		return;

	ofstream outf(m_sLogFileName.c_str(), ios_base::app);
	char tmptime[12];
	char tmpdate[12];
	_strdate_s(tmpdate);
	_strtime_s(tmptime);
	//make test here if file pointer is open.. Maybe a try-throw-catch?
	outf<<"(DD/MM/Y)" << tmpdate << "(HH:MM:SS)" << tmptime << endl << endl; 
	setErrorcode( EC_NoError, "Log file started." );
}

void errorhandler::setErrorcode( e_Errorcode EC, char *Errormsg ){
	/* OLD CODE FROM WHEN ERROR MSG WAS A C-Char string
	va_list ap;
	va_start( ap, Errormsg );
	vsprintf(m_sErrormsg, Errormsg, ap);
	va_end(ap);
	*/
	m_EC_ID = EC;
	m_sErrorMsg = Errormsg;
	
	if(!m_bOn)
		return;

	ofstream outf(m_sLogFileName.c_str(), ios_base::app);
	outf << m_sErrorMsg << endl << endl;
	

}

void errorhandler::showErrormsg(){
	
	switch (m_EC_ID){
		case EC_NoError: {
			MessageBox(GetDesktopWindow(),
			m_sErrorMsg.c_str(),
			"All Okey",
			MB_ICONINFORMATION | MB_OK );	
			break;		
		}
		case EC_Error:
		case EC_Unknown: {
			MessageBox(GetDesktopWindow(),
			m_sErrorMsg.c_str(),
			"Unkown Error",
			MB_ICONERROR | MB_OK );	
			break;
		}
		case EC_Opengl: {
			MessageBox(GetDesktopWindow(),
			m_sErrorMsg.c_str(),
			"Opengl Error",
			MB_ICONERROR | MB_OK );	
			break;	
		}
	}
}

e_Errorcode errorhandler::getErrorcode(){
	return m_EC_ID;
}
