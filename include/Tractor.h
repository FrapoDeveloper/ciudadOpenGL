#ifndef TRACTOR_H
#define TRACTOR_H
#include <gl/glut.h>
#include <iostream>

GLUquadricObj *p = gluNewQuadric();
float rota=0;
class Tractor
{
    public: Tractor();
            float angX = 0;
            float angY = 0;
            float angZ = 0;
            float anguloRotaBase = 0;
            float anguloRotaCabina= 0;
            GLUquadricObj *p = gluNewQuadric();

    public:
             void graficarTodo();
             void graficarCarro();
             void graficarPolicia();
             void graficarCarro2();
             void graficarTodo2();


};
void Tractor::graficarPolicia(){



            glPushMatrix();//BASE DE RUEDAS
                glColor3f(0.098,0.098,0.098);
                glTranslatef(0,0,8);
                glScalef(0.5,0.5,4);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0.098,0.098,0.098);
                glTranslatef(16,0,8);
                glScalef(0.5,0.5,4);
                glutSolidCube(4);
            glPopMatrix();

            //-----------------

            glPushMatrix();
                glColor3f(0.098,0.098,0.098);
                glTranslatef(8,0,4);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,5);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0.098,0.098,0.098);
                glTranslatef(8,0,12);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,5);
                glutSolidCube(4);
            glPopMatrix();

        //RUEDAS ARRIBA

            glPushMatrix();
                glColor3f(0,0,0);
                //glTranslatef(0,0,0);

                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(16,0,0);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

                //RUEDAS ABAJO

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(0,0,15);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(16,0,15);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();


            glPushMatrix();
                    glColor3f(0.125,0.686,0.874);
                    glTranslated(4,4.2,8);
                    glScalef(4,1.6,3);
                    glutSolidCube(4);
            glPopMatrix();



            glPushMatrix();//BASE
                    glColor3f(0.356,0.372,0.784);
                    glTranslatef(14,4.2,8);
                    glScalef(1,1.6,3);
                    glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();//PARABRISA
                    glColor3f(0.693,0.925,0.894);
                    //glColor3f(1,0,1);
                    glTranslatef(16.02,6.2,8);
                    glScalef(0.0001,0.6,3);
                    glutSolidCube(3);
            glPopMatrix();

            glPushMatrix();
                        glColor3f(0.529,0.827,0.929);
                        glTranslatef(14,5,14);
                        glRotatef(90,1,0,0);
                        glScalef(1,0.05,1.3);
                        glutSolidCube(2);
            glPopMatrix();

            glPushMatrix();
                        glColor3f(0.529,0.827,0.929);
                        glTranslatef(14,5,2);
                        glRotatef(90,1,0,0);
                        glScalef(1,0.05,1.3);
                        glutSolidCube(2);
            glPopMatrix();

            glPushMatrix();//MOTOR
                    glColor3f(0.125,0.686,0.874);
                    glTranslatef(17.6,3,8);
                    glScalef(0.8,1,3);
                    glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();//Sirena R
                glColor3f(1,0,0);
                glTranslatef(14,7.8,10.5);
                glScalef(0.3,0.2,0.6);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();//Sirena R
                glColor3f(1,1,1);
                glTranslatef(14,7.8,8.1);
                glScalef(0.3,0.2,0.6);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();//Sirena R
                glColor3f(0,0,1);
                glTranslatef(14,7.8,5.7);
                glScalef(0.3,0.2,0.6);
                glutSolidCube(4);
            glPopMatrix();


}

void Tractor::graficarCarro2(){
glPushMatrix();
        glPushMatrix();
            glPushMatrix();//BASE DE RUEDAS
                glColor3f(0.0,0.333,0.490);
                glTranslatef(0,0,8);
                glScalef(0.5,0.5,4);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0.0,0.333,0.490);
                glTranslatef(8,0,8);
                glScalef(0.5,0.5,4);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0.0,0.333,0.490);
                glTranslatef(16,0,8);
                glScalef(0.5,0.5,4);
                glutSolidCube(4);
            glPopMatrix();

            //-----------------

            glPushMatrix();
                glColor3f(0.545,0.545,0.545);
                glTranslatef(8,0,4);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,5);
                glutSolidCube(4);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0.545,0.545,0.545);
                glTranslatef(8,0,12);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,5);
                glutSolidCube(4);
            glPopMatrix();

        //RUEDAS ARRIBA

            glPushMatrix();
                glColor3f(0,0,0);
                //glTranslatef(0,0,0);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(8,0,0);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(16,0,0);

                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

                //RUEDAS ABAJO

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(0,0,15);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(8,0,15);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();
                glColor3f(0,0,0);
                glTranslatef(16,0,15);
                gluCylinder(p,1.5,1.5,1,20,20);
            glPopMatrix();

            glPushMatrix();//ALMACEN
                glPushMatrix();
                    glColor3f(0,0.690,0.690);
                    glTranslated(4,5,8);
                    glScalef(4,2,3);
                    glutSolidCube(4);
                glPopMatrix();
            glPopMatrix();

            glPushMatrix();//CABINA

                glPushMatrix();//BASE
                    glColor3f(0.356,0.372,0.784);
                    glTranslatef(14,4.2,8);
                    glScalef(1,1.6,3);
                    glutSolidCube(4);
                glPopMatrix();

                glPushMatrix();//PARABRISA
                    glColor3f(0.693,0.925,0.894);
                    //glColor3f(1,0,1);
                    glTranslatef(16.02,6.2,8);
                    glScalef(0.0001,0.6,3);
                    glutSolidCube(3);
                glPopMatrix();

                glPushMatrix();//PUERTA

                    glPushMatrix();
                        glColor3f(0.317,0.733,0.454);
                        glTranslatef(14,5,14);
                        glRotatef(90,1,0,0);
                        glScalef(1,0.05,1.3);
                        glutSolidCube(2);
                    glPopMatrix();

                    glPushMatrix();
                        glColor3f(0.317,0.733,0.454);
                        glTranslatef(14,5,2);
                        glRotatef(90,1,0,0);
                        glScalef(1,0.05,1.3);
                        glutSolidCube(2);
                    glPopMatrix();

                glPopMatrix();


                glPushMatrix();//MOTOR
                    glColor3f(0.721,0.752,0.870);
                    glTranslatef(18,3,8);
                    glScalef(1,1,3);
                    glutSolidCube(4);
                glPopMatrix();

            glPopMatrix();
        glPopMatrix();


}
void Tractor::graficarCarro(){

 glColor3f( 0.776 , 0.776 , 0.776 );
    glPushMatrix();
    glRotated(90,0,1,0);
    glTranslated(0,0,0.1);
    glutSolidTorus(0.3,0.2,16,16);//rueda1
    glPopMatrix();
    glPushMatrix();
    glRotated(90,0,1,0);
    glTranslated(0,0,3.8);
    glutSolidTorus(0.3,0.2,16,16);//Rueda2
    glPopMatrix();
    glPushMatrix();
    glRotated(90,0,1,0);
    glTranslated(-3,0,3.8);//
    glutSolidTorus(0.3,0.2,16,16);//rueda3
    glPopMatrix();
     glPushMatrix();
    glRotated(90,0,1,0);
    glTranslated(-3,0,0.1);
    glutSolidTorus(0.3,0.2,16,16);//rueda4
    glPopMatrix();
    glPushMatrix();
    glColor3f( 0.431 , 0.752 , 0.513 );
    glTranslated(2,0.6,1.80);
    glScaled(0.6,0.3,0.8);
    glutSolidCube(6);
    glPopMatrix();///caja
    glPushMatrix();
    glColor3f( 0.313 , 0.462 , 0.537 );
    glTranslated(2,1.6,1.22);
    glScaled(0.59,0.5,0.6);
    glutSolidCube(6);//Caja
    glPopMatrix();
    glPushMatrix();
    glColor3f( 0.317 , 0.333 , 0.368 );
    glTranslated(2.2,0.80,4.22);//lamina ventana
    glScaled(0.3,0.03,0);
    glutSolidCube(6);
    glPopMatrix();
    glPushMatrix();
    glColor3f( 0.364 , 0.384 , 0.407 );
    glTranslated(2,2.24,3.03);
    glScaled(0.5,0.17,0);
    glutSolidCube(6);
    glPopMatrix();
}

void Tractor::graficarTodo2(){
    glPushMatrix();

         glColor3f( 0.788 , 0.062 , 0.078 );

        glPushMatrix();
             glScaled(8,2,12);
             glutSolidCube(5);
        glPopMatrix();

        glPushMatrix();
             glPushMatrix();
                   glRotated(90,1,0,0);
                   glTranslated(0,0,-8);
                   glColor3f(1.0,1.0,1.0);
                   glutWireTorus(6,6,60,60);
        glPopMatrix();

          glColor3f( 0.788 , 0.062 , 0.078 );
        glPushMatrix();

            glScaled(2.5,1,3.5);
            glTranslated(0,15,0);
            glutSolidCube(10);
        glPopMatrix();

        glPushMatrix();

        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(0.5,0.05,20);
            glScaled(5.1,-1.3,2);
             glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();

         glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(-0.5,-0.05,-20);
            glScaled(5.1,-1.3,2);
            glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();
    glPopMatrix();

        glPushMatrix();
        //camara ojo pez
       /* glTranslated(23,0,0);
            glScaled(-5.99,-5.99,-5.99);
            glColor3i(0,0,0);
            glutSolidSphere(30,30,30);
        glPopMatrix();*/
             glPushMatrix();

             glTranslated(23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();
            //------------------------------
            glPushMatrix();

             glTranslated(-23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(-23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(-23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

        glPopMatrix();


glColor3f(  1.0  , 0.760 ,  0.0  );
        glPushMatrix();
            glScaled(2.5,2.5,3.5);
            glTranslated(0,10,0);
            glutSolidCube(5);
        glPopMatrix();

    glPopMatrix();

}






void Tractor::graficarTodo(){
    glPushMatrix();

        glColor3f( 0.784 , 0.450 , 0.082 );

        glPushMatrix();
             glScaled(8,2,12);
             glutSolidCube(5);
        glPopMatrix();

        glPushMatrix();
             glPushMatrix();
                   glRotated(90,1,0,0);
                   glTranslated(0,0,-8);
                   glColor3f(1.0,1.0,1.0);
                   glutWireTorus(6,6,60,60);
        glPopMatrix();

         glColor3f( 0.807 , 0.607 ,  0.0  );
        glPushMatrix();

            glScaled(2.5,1,3.5);
            glTranslated(0,15,0);
            glutSolidCube(10);
        glPopMatrix();

        glPushMatrix();

        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(0.5,0.05,20);
            glScaled(5.1,-1.3,2);
             glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();

         glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(-0.5,-0.05,-20);
            glScaled(5.1,-1.3,2);
            glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();
    glPopMatrix();

        glPushMatrix();
        //camara ojo pez
       /* glTranslated(23,0,0);
            glScaled(-5.99,-5.99,-5.99);
            glColor3i(0,0,0);
            glutSolidSphere(30,30,30);
        glPopMatrix();*/
             glPushMatrix();

             glTranslated(23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();
            //------------------------------
            glPushMatrix();

             glTranslated(-23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(-23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(-23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

        glPopMatrix();


glColor3f(  1.0  , 0.760 ,  0.0  );
        glPushMatrix();
            glScaled(2.5,2.5,3.5);
            glTranslated(0,10,0);
            glutSolidCube(5);
        glPopMatrix();

    glPopMatrix();

}




#endif // TRACTOR_H
