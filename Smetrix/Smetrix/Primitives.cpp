#include"Primitives.h"
#include"Vertex.h"



int primitives::draw(){

	glLoadIdentity();
	glTranslated( m_vVertex[0].getX() - (m_nSize / 2), m_vVertex[0].getY() - (m_nSize / 2), 0.0);
	glRotated( m_dRotation, 0, 0, 1 );
	glBegin(GL_POLYGON);
	for(int n = 0; n < m_nCorners; n++){
		glVertex3d( 0.0, 0.0, m_dDepth);
		glVertex3d( 0.0, m_nSize, m_dDepth);
		glVertex3d( m_nSize, m_nSize, m_dDepth);
		glVertex3d( m_nSize, 0.0, m_dDepth);
	}	
	glEnd();


	return 0;
}
