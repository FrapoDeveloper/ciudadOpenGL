#ifndef CARRETERA_H
#define CARRETERA_H
#include <gl/glut.h>

class Carretera
{
    public: Carretera();
            float x=0;
            float y=0;
            float z=0;


    public: void graficarPiso();
            void pista();


};

void Carretera::graficarPiso(){


    glPushMatrix();

            glColor3f( 0 , 0 , 0 );
            glTranslated(1,0,0);
            glRotated(90,0,0,1);
            glScaled(1,2,180);
            glutSolidCube(4);

    glPopMatrix();


    glColor3f( 0.239 , 0.227 , 0.207 );
        glPushMatrix();
            glTranslated(1,1,0);
             glRotated(90,0,0,1);
             glScaled(1,2,180);
             glutSolidCube(4);

        glPopMatrix();

        glPushMatrix();

            glTranslated(40,1,0);
             glRotated(90,0,0,1);
             glScaled(1,2,180);
             glutSolidCube(3);
        glPopMatrix();

        glPushMatrix();

            glTranslated(-40,1,0);
             glRotated(90,0,0,1);
             glScaled(1,2,180);
             glutSolidCube(3);
        glPopMatrix();

         glPushMatrix();

            glTranslated(-80,1,0);
             glRotated(90,0,0,1);
             glScaled(1,2,180);
             glutSolidCube(3);
        glPopMatrix();



}

void Carretera::pista(){
glColor3f( 0.176 , 0.168 , 0.172 );
    glPushMatrix();
    glRotatef(90,1,0,0);
    glScalef(9.02,9,0);//primero ancho del z
    glutSolidCube(4);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1 );
    glTranslatef(0,0.1,0);
    glRotatef(90,1,0,0);
    glScalef(0.1,9,0);
    glutSolidCube(4);
    glPopMatrix();
 glPushMatrix();
    glColor3f(1,1,1 );
    glTranslatef(8,0.1,9);
    glRotatef(90,1,0,0);
    glScalef(0.4,3,0);
    glutSolidCube(4);
    glPopMatrix();
    glPushMatrix();///lineas de transito
    glColor3f(1,1,1 );
    glTranslatef(-8,0.1,9);
    glRotatef(90,1,0,0);
    glScalef(0.4,3,0);
    glutSolidCube(4);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1 );
    glTranslatef(-8,0.1,-9);
    glRotatef(90,1,0,0);
    glScalef(0.4,3,0);
    glutSolidCube(4);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1 );
    glTranslatef(8,0.1,-9);
    glRotatef(90,1,0,0);
    glScalef(0.4,3,0);
    glutSolidCube(4);
    glPopMatrix();









}



#endif // CARRETERA_H
