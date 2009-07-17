#include"Errorhandler.h"



errorhandler::errorhandler( char* filename, bool On ){
	
	m_bOn = On;
	m_sLogfile = filename;
	setErrorcode( EC_NoError, "No Error" );

	if(!m_bOn)
		return 1;

//OBS FIXA till:
	/*
	ofstream outf("Sample.dat");
02.
outf << "This is line 1" << endl;
03.
outf << "This is line 2" << endl;
*/

	FILE *fp;
	fp = fopen(m_sLogfile,"wt");
	fp<<"(DD/MM/Y)" << _strdate << "(HH:MM:SS)" << _strtime << endl << endl; 
	flose(fp);
}

void errorhandler::setErrorcode( e_Errorcode EC, char *Errormsg, ... ){
	va_list ap;
	va_start( ap, Errormsg );
	vsnprintf(m_sErrormsg, Errormsg, ap);
	va_end(ap);
	
	m_EC_ID = EC;
	
	if(!m_bOn)
		return 1;
	//OBS FIXA till:
	/*
	ofstream outf("Sample.dat");
02.
outf << "This is line 1" << endl;
03.
outf << "This is line 2" << endl;
*/
	FILE *fp;
	fp = fopen(m_sLogfile,"at");
	fp << m_sErrormsg << endl;
	fclose(fp);

}