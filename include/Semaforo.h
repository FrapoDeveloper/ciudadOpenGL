#ifndef SEMAFORO_H
#define SEMAFORO_H
#include <gl/glut.h>

class Semaforo
{
    public:
        Semaforo();

    public: void graficarSemaforo();
            void graficarBsurero();
            void graficarmuneco();

};

void Semaforo::graficarSemaforo(){

glPushMatrix();
        glPushMatrix();
            glPushMatrix();
                glScalef(1,11,1);
                glColor3f(0.439,0.439,0.439);
                glutSolidCube(2);
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,8,2);
                glScalef(1,2.2,1);
                glColor3f(0.439,0.439,0.439);
                glutSolidCube(3);
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,5.3,3);
                glColor3f(0.439,0.439,0.439);
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,10,3.5);
                glScalef(1,1,0.5);
                glColor3f(1,0,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(1.5,10,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(1,0,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(-1.5,10,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(1,0,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,8,3.5);
                glScalef(1,1,0.5);
                glColor3f(248,192,3);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(1.5,8,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(248,192,3);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(-1.5,8,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(248,192,3);
                glutSolidSphere(1,50,50);
            glPopMatrix();

            glPushMatrix();
                glTranslatef(0,6,3.5);
                glScalef(1,1,0.5);
                glColor3f(0,1,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(1.5,6,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(0,1,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(-1.5,6,1.8);
                glRotatef(90,0,1,0);
                glScalef(1,1,0.5);
                glColor3f(0,1,0);
                glutSolidSphere(1,50,50);
            glPopMatrix();
        glPopMatrix();

    glPopMatrix();


}

void Semaforo::graficarmuneco(){
      glTranslated(6,0,0);
    glPushMatrix();
    glColor3f( 0.690 , 0.623 , 0.592 );
    glutSolidSphere(3,20,20);  //cuerpo
    glPopMatrix();
   glPushMatrix();
    glColor3f( 0.690 , 0.623 , 0.592 );
    glTranslated(0,0,2.8);
    glScaled(1.2,1.2,1.2);
    glutSolidSphere(2,10,10);
      glPopMatrix();
      glPushMatrix();
    glColor3f( 0.690 , 0.623 , 0.592 );
    glTranslated(0,0,5.8);
    glScaled(0.6,0.6,0.6);
    glutSolidSphere(2,10,10);
    ///cuerpo 3
      glPopMatrix();
       glPushMatrix();
    glColor3f( 0.352 , 0.788 , 0.725 );
    glTranslated(-0.1,-0.90,6.4);   // ojo1
    glutSolidSphere(0.1,10,10);
    glPopMatrix();
    glPushMatrix();
    glColor3f( 0.352 , 0.788 , 0.725 );
    glTranslated(0.6,-0.70,6.4);   //ojo2
    glutSolidSphere(0.1,10,10);
    glPopMatrix();
    glPushMatrix();
    glColor3f( 0.682 , 0.886 , 0.450 );
    glRotated(90,1,0,0);
    glTranslated(0.3,6,-0.60);   //nariz
    glutSolidCone(0.50,2,2,0);
    glPopMatrix();
    glPushMatrix();
    glColor3f(  0.0  ,  0.0  , 0.996 );
    glRotated(180,0,1,0);
    glTranslated(0,0,-7.9);
    gluCylinder(p,0,1,1.8,2000,2000);
    glPopMatrix();
    glPushMatrix();
    glColor3f(  0.0  ,  0.0  , 0.996 );
    glRotated(180,0,1,0);
    glTranslated(0,0,-7.2);
    glScaled(0.8,0.8,0.8);
    gluCylinder(p,0.5,1.19,1,2000,2000);  // base del gorro
    glPopMatrix();
    glPushMatrix();
    glColor3f(  1,0,0 );
    glTranslated(0.3,-1.8,4.2);   //boton2
    glutSolidSphere(0.1,10,10);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0 );
    glTranslated(0.3,-1.6,4.5);   //boton2
    glutSolidSphere(0.1,10,10);
    glPopMatrix();
     glPushMatrix();
    glColor3f(1,0,0 );
    glTranslated(0.3,-1.5,4.8);   //botom2
    glutSolidSphere(0.1,10,10);
    glPopMatrix();

}
void Semaforo::graficarBsurero(){

       glColor3f( 0.188 , 0.152 , 0.278 );
     glRotated(180,0,1,1);
     glPushMatrix();
     gluCylinder(p,1,1,2,40,40);
     glPopMatrix();
     glPushMatrix();
     glColor3f( 0.196 , 0.196 , 0.235 );
     glTranslated(0,0,2);
     gluCylinder(p,1.2,0.97,0.1,3000,3000);//   tapa del basurero
     glPopMatrix();
     glPushMatrix();
     glTranslated(0,-0.5,0);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.3,6,5);
     glPopMatrix();
     glPushMatrix();//basura grande
     glTranslated(0,0.4,0.2);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.4,8,4);
     glPopMatrix();
     glPushMatrix();//basura grande
     glTranslated(0,0.1,0.3);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.3,8,4);
     glPopMatrix();
     glPushMatrix();//basura grande
     glTranslated(-0.60,0.25,0.3);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.3,8,4);
     glPopMatrix();
     glPopMatrix();
     glPushMatrix();//basura grande
     glTranslated(-0.40,0.80,0);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.5,8,4);
     glPopMatrix();
     glPushMatrix();//basura grande
     glTranslated(0.40,0.60,0);
     glRotated(180,0,1,1);
     glColor3f(1,1,1 );
     glutSolidSphere(0.5,9,4);
     glPopMatrix();


}



#endif // SEMAFORO_H
