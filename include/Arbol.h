#ifndef ARBOL_H
#define ARBOL_H
#include <gl/glut.h>

class Arbol
{
    public:
        Arbol();

    public: void dibujarArbol1();
            void dibujarArbol2();


};


void Arbol::dibujarArbol1(){


    glTranslated(0,0,10);
    glPushMatrix();
    glColor3f( 0.003 , 0.2 ,  0.0  );
    glTranslated(0,5,0);
    glRotatef(-90,1, 0, 0);
    glutSolidCone(2, 4, 20, 0);
    glPopMatrix();
    glColor3f( 0.121 , 0.047 ,  0.0  );
    glRotatef(-90,1, 0, 0);
    gluCylinder(p,1,1,6,2000,2000);//para el tronco xd
    glPopMatrix();
}

void Arbol::dibujarArbol2(){

    glPushMatrix();
    glColor3f( 0.003 , 0.2 ,  0.0  );
    glRotatef(-90,1, 0, 0);
    glTranslated(0,0,7);// para que nosea en un mismo punto
    glutSolidSphere(2,10,8);
    glPopMatrix();//otra hoja centro
    glPushMatrix();
    glRotatef(-90,1, 0, 0);
    glTranslated(0,0,8);
    glutSolidSphere(2,10,8);
    glPopMatrix();//hoja1
    glPushMatrix();
    glRotatef(-90,1, 0, 0);
    glTranslated(0,1.2,7.5);
    glutSolidSphere(2,10,8);//hoja3 costados
    glPopMatrix();
    glPushMatrix();
    glRotatef(-90,1, 0, 0);
    glTranslated(0,-1.2,7.5); //hojacostado
    glutSolidSphere(2,10,8);
    glPopMatrix();
    glColor3f(0.121,0.047 ,0.0);
    glRotatef(-90,1, 0, 0);        //tronco
    glutSolidCone(1, 8.5, 15, 0);

}



#endif // ARBOL_H
