#include"Errorhandler.h"



errorhandler::errorhandler( char* filename, bool On ){
	
	m_bOn = On;
	m_sLogfile = filename;
	setErrorcode( EC_NoError, "No Error");
	
}

void errorhandler::setErrorcode( e_Errorcode EC, char *Errormsg ){
	m_sErrormsg = Errormsg;
	m_EC_ID = EC;
	
}