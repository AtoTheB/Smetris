#include"Errorhandler.h"



errorhandler::errorhandler( char* filename = "log.txt", bool On = 1 ){
	
	m_bOn = On;
	m_sLogfile = filename;

	
}