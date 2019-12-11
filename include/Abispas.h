#ifndef ABISPAS_H
#define ABISPAS_H
#include <gl/glut.h>

class Abispas
{
    public: float mover = 0;
        Abispas();

    public: void graficarAbispa();
};


void Abispas::graficarAbispa(){
     glPushMatrix();

        glPushMatrix();//Cuerpo
            glColor3f(0.812,0.8,0.232);
            glutWireSphere(5,16, 16);
            glTranslatef(3.5,0,0);
            glRotatef(90,0,1,0);
            gluCylinder(p, 3.5, 1.5, 3, 16, 16);
            glPushMatrix();//Pata 1.1
                glColor3f(0,0,0);
                glRotatef(0,1,0,0);
                glTranslatef(mover,-2.5,0);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 1.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2, 16, 16);
                    glPushMatrix();//Pata 1.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 1.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                        gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                    glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Pata 2.1
                glColor3f(0,0,0);
                glRotatef(0,1,0,0);
                glTranslatef(4.5,-2.5,-2.5);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 2.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2,16, 16);
                    glPushMatrix();//Pata 2.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 2.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                        gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                    glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Pata 3.1
                glColor3f(0,0,0);
                glRotatef(0,1,0,0);
                glTranslatef(4.5,-2.5,-5);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 3.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2, 16, 16);
                    glPushMatrix();//Pata 3.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 3.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                            gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Pata 4.1
                glRotatef(0,1,0,0);
                glColor3f(0,0,0);
                glRotatef(-180,1,0,0);
                glRotatef(180,0,0,1);
                glTranslatef(3,-2.5,0);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 4.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2,16, 16);
                    glPushMatrix();//Pata 4.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 4.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                        gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                    glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Pata 5.1
                glRotatef(0,1,0,0);
                glColor3f(0,0,0);
                glRotatef(180,1,0,0);
                glRotatef(180,0,0,1);
                glTranslatef(4.5,-2.5,2.5);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 5.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2, 16, 16);
                    glPushMatrix();//Pata 5.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 5.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                        gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                    glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Pata 6.1
                glColor3f(0,0,0);
                glRotatef(0,1,0,0);
                glRotatef(-180,1,0,0);
                glRotatef(180,0,0,1);
                glTranslatef(4.5,-2.5,5);
                glRotatef(-60,0,0,1);
                glRotatef(-90,0,-1,0);
                gluCylinder(p, 0.25, 0.25, 1, 16, 16);
                glPushMatrix();//Pata 6.2
                    glTranslatef(0,0,1);
                    glRotatef(-120,1,0,0);
                    gluCylinder(p, 0.25, 0.25, 2, 16, 16);
                    glPushMatrix();//Pata 6.3
                        glTranslatef(0,0,2);
                        glRotatef(120,1,0,0);
                        gluCylinder(p, 0.25, 0.4, 3, 16, 16);
                        glPushMatrix();//Pata 6.4
                            glTranslatef(0,0,3);
                            glRotatef(-15,1,0,0);
                            gluCylinder(p, 0.3, 0.1, 2, 16, 16);
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Alas
                glPushMatrix();//Ala 1
                    glColor3f(0,1,0);
                    glRotatef(0,1,0,0);
                    glScalef(0.5,0.2,2);
                    glTranslatef(3.5,2,-2);
                    glRotatef(60,1,0,0);
                    glRotatef(120,0,1,0);
                    gluCylinder(p, 2, 2, 20, 16, 16);
                glPopMatrix();
                glPushMatrix();//Ala 2
                    glColor3f(0,1,0);
                    glRotatef(0,1,0,0);
                    glRotatef(30,0,0,-1);
                    glTranslated(-3.5,-2,1);
                    glScalef(0.5,0.2,2);
                    glTranslatef(3.5,2,-2);
                    glRotatef(-60,1,0,0);
                    glRotatef(-120,0,1,0);
                    gluCylinder(p, 2, 2, 20, 16, 16);
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
        glPushMatrix();//Cabeza
            glColor3f(0.812,0.8,0.232);
            glTranslatef(9.5,0,-2.5);
            gluCylinder(p, 2.75, 2.75, 5, 16, 16);
            glTranslatef(0,0,5);
            glScalef(0.5,0.7,0.5);
            glRotatef(90,1,0,0);
            glutWireTorus(5,0,16, 16);
            glTranslatef(0,-10,0);
            glutWireTorus(5,0,16, 16);
            glPushMatrix();//Ojos
                glColor3f(0.25,0.32,0.156);
                glTranslatef(0,-2.5,-0.5);
                glutWireTorus(3,0,16, 16);
                glTranslatef(0,15,0);
                glutWireTorus(3,0,16, 16);
            glPopMatrix();
            glPushMatrix();//Antena 1.1
                glColor3f(0.25,0.32,0.156);
                glTranslatef(0,2.5,-4.5);
                glRotatef(30,0,1,0);
                glRotatef(90,0,1,0);
                gluCylinder(p, 0.25, 0.25, 5, 16, 16);
                glPushMatrix();//Antena 1.2
                    glRotatef(0,0,0,-4.5);
                    glTranslatef(0,0,5);
                    glRotatef(-90,0,1,0);
                    gluCylinder(p, 0.25, 0.40, 4, 16, 16);
                    glPushMatrix();//Antena 1.3
                        glTranslatef(0,0,4);
                        glRotatef(-20,0,1,0);
                        gluCylinder(p, 0.40, 0.05, 4, 16, 16);
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();//Antena 2.1
                glColor3f(0.25,0.32,0.156);
                glTranslatef(0,7.5,-4.5);
                glRotatef(30,0,1,0);
                glRotatef(90,0,1,0);
                gluCylinder(p, 0.25, 0.25, 5,16, 16);
                glPushMatrix();//Antena 2.2
                    glRotatef(0,0,0,-4.5);
                    glTranslatef(0,0,5);
                    glRotatef(-90,0,1,0);
                    gluCylinder(p, 0.25, 0.40, 4, 16, 16);
                    glPushMatrix();//Antena 2.3
                        glTranslatef(0,0,4);
                        glRotatef(-20,0,1,0);
                        gluCylinder(p, 0.40, 0.05, 4, 16, 16);
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();//Cola

            glRotatef(0,0,0,1);
            glRotatef(-90,0,1,0);
            glPushMatrix();//inicio de la cola
                glColor3f(0,0,0);
                glTranslatef(0,0,5);
                gluCylinder(p, 1, 5, 3, 16, 16);
            glPopMatrix();
            glPushMatrix();//cola 1.2
                glColor3f(0.812,0.8,0.232);
                glTranslatef(0,0,11.125);
                glutWireSphere(5,16, 16);
            glPopMatrix();
             glPushMatrix();//cola 1.3
                glColor3f(0,0,0);
                glTranslatef(0,0,13.625);
                gluCylinder(p, 5, 1, 1, 16, 16);
            glPopMatrix();
        glPopMatrix();

    glPopMatrix();








}


#endif // ABISPAS_H
