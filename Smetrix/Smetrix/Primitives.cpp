#include"Primitives.h"



int primitives::draw(){

	glLoadIdentity();
	glTranslated( m_nX - (m_nSize / 2), m_nY - (m_nSize / 2), 0.0);
	glRotated( m_dRotation, 0, 0, 1 );
	glBegin(GL_POLYGON);
	for(int n = 0; n < m_nCorners; n++){
		//FIXA DETTA så det funkar nu när texture är en member m_tTexture.function namn typ set Size med mera. 
		//	glTexCoord2d( m_dXtextcord[n], m_dYtextcord[n] );
		//Fixa detta genom att ge alla corners egna xy pos. står även i primitives classen.
		glVertex3d( 0.0, 0.0, m_dDepth);
		glVertex3d( 0.0, m_nSize, m_dDepth);
		glVertex3d( m_nSize, m_nSize, m_dDepth);
		glVertex3d( m_nSize, 0.0, m_dDepth);
	}	
	glEnd();


	return 0;
}
