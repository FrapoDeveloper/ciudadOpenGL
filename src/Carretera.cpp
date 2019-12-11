#include "Carretera.h"

Carretera::Carretera()
{
    glColor3f( 0.784 , 0.450 , 0.082 );

    glPushMatrix();
    glScaled(8,2,12);
    glutSolidCube(5);




    glPopMatrix();
}
