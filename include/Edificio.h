#ifndef EDIFICIO_H
#define EDIFICIO_H
#include <gl/glut.h>
#include <math.h>
class Edificio
{

        Edificio();

    public: void graficarEdificio1();
            void graficarEdificio2();
            void graficarEdificio3();
            void graficarEdificio4();
            void graficarHospital();
            void graficarBodega();
            void graficarTienda();

};

void Edificio::graficarEdificio1(){

glPushMatrix();//EDIFICIO
        glColor3f(0.439,0.439,0.439);
        glScalef(1,2.5,1);
        glutSolidCube(8);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANAS
        glColor3f(0,0,0);
        glTranslatef(4.01,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.6,0.6,0);
        glutSolidCube(4);//marco 1I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 1D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 2I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 2D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 3I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 3D
    glPopMatrix();

    glPushMatrix(); //VENTANAS
        glColor3f(0.247,0.729,0.705);
        glTranslatef(4.02,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.5,0.5,0);
        glutSolidCube(4);//ventana 1I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 1D
        glTranslatef(-7.2,-7.1,0);
        glutSolidCube(4);//ventana 2I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 2D
        glTranslatef(-7.2,-7.2,0);
        glutSolidCube(4);//ventana 3I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 3D
    glPopMatrix();

    //----------------------------------

    glPushMatrix();//rellenar lado izquierdo
        glTranslatef(0,0,8.03);
        glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();
        glTranslatef(-0.03,0,0);
        //glRotatef(90,0,1,0);

        glPushMatrix(); //VENTANAS
            glColor3f(0.247,0.729,0.705);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();
        glPopMatrix();

        //----------------RELLENAR ATRAS
        glPushMatrix();
            glTranslatef(-8.02,0,0);
            glPushMatrix();//MARCOS
                glColor3f(0,0,0);
                glTranslatef(4.01,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.6,0.6,0);
                glutSolidCube(4);//marco 1I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 1D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 2I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 2D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 3I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 3D
            glPopMatrix();

            glTranslatef(-0.02,0,0);
            glPushMatrix();//VENTANAS
                glColor3f(0.247,0.729,0.705);
                glTranslatef(4.02,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,0);
                glutSolidCube(4);//ventana 1I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 1D
                glTranslatef(-7.2,-7.1,0);
                glutSolidCube(4);//ventana 2I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 2D
                glTranslatef(-7.2,-7.2,0);
                glutSolidCube(4);//ventana 3I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 3D
            glPopMatrix();
        glPopMatrix();

        //------------------------RELLENAR LADO DERECHO

        glPushMatrix();
            glTranslatef(0,0,-0.02);
            glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();

        glTranslatef(0,0,-0.02);
        glPushMatrix();//VENTANAS
            glColor3f(0.247,0.729,0.705);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();
    glPopMatrix();
}

void Edificio::graficarBodega(){

glPushMatrix();//cuboestablo1
            glColor3f(0.4,0.1,0.2);
            glTranslatef(8,1.65,-18);
            glScaled(0.5,0.5,1);
            glutSolidCube(20);
        glPopMatrix();

         glPushMatrix();//cuboestablo1
            glColor3f(1,1,1);
            glTranslatef(12,2,1);
            glScaled(0.5,0.5,0.5);
            glutSolidCube(4);
        glPopMatrix();


         glPushMatrix();//cuboestablo1
            glColor3f(1,1,1);
            glTranslatef(9.4,2.5,1);
            glScaled(0.4,0.7,0);
            glutSolidCube(5);
        glPopMatrix();

        glPushMatrix();//cuboestablo1
            glColor3f(0.6,0.1,0.4);
            glTranslatef(10.4,1.8,4);
            glScaled(0.85,0.4,0);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//techo1.2
            glColor3f(0.75,0.75,0.75);

            glTranslatef(5.4 ,8,-12.5);
            glRotatef(30,0,0,1);
            glScaled(0.15,0.02,0.3);

            glutSolidCube(39);
        glPopMatrix();

                glPushMatrix();
                glColor3f(2,4,2);
                glTranslatef(11.4,4,-2.5);
                //glPushMatrix();
                //glPopMatrix();
                glPopMatrix();


        glPushMatrix();//techo1.3
            glColor3f(0.75,0.75,0.75);

            glTranslatef(10.9 ,8,-12.5);
            glRotatef(-30,0,0,1);
            glScaled(0.15,0.02,0.3);

            glutSolidCube(39);
        glPopMatrix();

           glPushMatrix();//Barra que sostiene bandera
            glColor3f(0.75,0.75,0.75);
            glTranslatef(8.5,6.35,-12);
            glScaled(0.499,0.02,1);
            glutSolidCube(20);
        glPopMatrix();

        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(12.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(11.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(10.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(9.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(8.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(7.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(6.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(5.9,5.2,-1);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();

}
void Edificio::graficarHospital(){
glPushMatrix();//EDIFICIO
        glColor3f(0.729,0.894,0.890);
        glScalef(1,2.5,1);
        glutSolidCube(8);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANAS
        glColor3f(0,0,0);
        glTranslatef(4.01,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.6,0.6,0);
        glutSolidCube(4);//marco 1I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 1D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 2I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 2D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 3I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 3D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 4I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 4D
    glPopMatrix();

    glPushMatrix(); //VENTANAS
        glColor3f(1,1,1);
        glTranslatef(4.02,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.5,0.5,0);
        glutSolidCube(4);//ventana 1I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 1D
        glTranslatef(-7.2,-7.1,0);
        glutSolidCube(4);//ventana 2I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 2D
        glTranslatef(-7.2,-7.2,0);
        glutSolidCube(4);//ventana 3I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 3D
        glTranslatef(-7.2,-7.2,0);
        glutSolidCube(4);//ventana 4I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 4D
    glPopMatrix();

    //----------------------------------

    glPushMatrix();//rellenar lado izquierdo
        glTranslatef(0,0,8.03);
        glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 4I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 4D

        glPopMatrix();
        glTranslatef(-0.03,0,0);
        //glRotatef(90,0,1,0);

        glPushMatrix(); //VENTANAS
            glColor3f(1,1,1);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 4I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 4D
        glPopMatrix();
        glPopMatrix();

        //----------------RELLENAR ATRAS
        glPushMatrix();
            glTranslatef(-8.02,0,0);
            glPushMatrix();//MARCOS
                glColor3f(0,0,0);
                glTranslatef(4.01,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.6,0.6,0);
                glutSolidCube(4);//marco 1I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 1D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 2I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 2D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 3I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 3D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 4I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 4D
            glPopMatrix();

            glTranslatef(-0.02,0,0);
            glPushMatrix();//VENTANAS
                glColor3f(1,1,1);
                glTranslatef(4.02,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,0);
                glutSolidCube(4);//ventana 1I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 1D
                glTranslatef(-7.2,-7.1,0);
                glutSolidCube(4);//ventana 2I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 2D
                glTranslatef(-7.2,-7.2,0);
                glutSolidCube(4);//ventana 3I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 3D
                glTranslatef(-7.2,-7.2,0);
                glutSolidCube(4);//ventana 4I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 4D
            glPopMatrix();
        glPopMatrix();

        //------------------------RELLENAR LADO DERECHO

        glPushMatrix();
            glTranslatef(0,0,-0.02);
            glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 4I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 4D
        glPopMatrix();

        glTranslatef(0,0,-0.02);
        glPushMatrix();//VENTANAS
            glColor3f(1,1,1);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 4I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 4D
        glPopMatrix();

        glPushMatrix();
        glPushMatrix();//PENTAGONO
            glColor3f(0.501,0.556,0.274);
            glTranslatef(0,10.02,0);
            glRotatef(90,1,0,0);
            glScalef(3.5,3.5,0);
            glutSolidIcosahedron();
        glPopMatrix();

        glColor3f(0.250,0.415,0.584);

        glPushMatrix();//H1
            glTranslatef(-0.2,5.5,4.04);
            glScalef(0.3,1.8,0);
            glutSolidCube(3);
        glPopMatrix();

        glPushMatrix();//H2
            glTranslatef(0,6.2,4.04);
            glRotatef(90,0,0,1);
            glScalef(0.2,1.8,0);
            glutSolidCube(3);
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();




}
void Edificio::graficarEdificio2(){

glPushMatrix();//EDIFICIO
        glColor3f(0.439,0.439,0.439);
        glScalef(1,2.5,1);
        glutSolidCube(8);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANAS
        glColor3f(0,0,0);
        glTranslatef(4.01,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.6,0.6,0);
        glutSolidCube(4);//marco 1I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 1D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 2I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 2D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 3I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 3D
    glPopMatrix();

    glPushMatrix(); //VENTANAS
        glColor3f(0.247,0.729,0.705);
        glTranslatef(4.02,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.5,0.5,0);
        glutSolidCube(4);//ventana 1I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 1D
        glTranslatef(-7.2,-7.1,0);
        glutSolidCube(4);//ventana 2I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 2D
        glTranslatef(-7.2,-7.2,0);
        glutSolidCube(4);//ventana 3I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 3D
    glPopMatrix();

    //----------------------------------

    glPushMatrix();//rellenar lado izquierdo
        glTranslatef(0,0,8.03);
        glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();
        glTranslatef(-0.03,0,0);
        //glRotatef(90,0,1,0);

        glPushMatrix(); //VENTANAS
            glColor3f( 0.305 , 0.305 , 0.305 );
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();
        glPopMatrix();

        //----------------RELLENAR ATRAS
        glPushMatrix();
            glTranslatef(-8.02,0,0);
            glPushMatrix();//MARCOS
                glColor3f(0,0,0);
                glTranslatef(4.01,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.6,0.6,0);
                glutSolidCube(4);//marco 1I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 1D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 2I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 2D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 3I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 3D
            glPopMatrix();

            glTranslatef(-0.02,0,0);
            glPushMatrix();//VENTANAS
                glColor3f(0.247,0.729,0.705);
                glTranslatef(4.02,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,0);
                glutSolidCube(4);//ventana 1I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 1D
                glTranslatef(-7.2,-7.1,0);
                glutSolidCube(4);//ventana 2I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 2D
                glTranslatef(-7.2,-7.2,0);
                glutSolidCube(4);//ventana 3I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 3D
            glPopMatrix();
        glPopMatrix();

        //------------------------RELLENAR LADO DERECHO

        glPushMatrix();
            glTranslatef(0,0,-0.02);
            glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();

        glTranslatef(0,0,-0.02);
        glPushMatrix();//VENTANAS
            glColor3f( 0.141 ,  0.0  , 0.141 );
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();
    glPopMatrix();


}

void Edificio::graficarTienda(){

        glPushMatrix();//cubo
            glColor3f(0.4,0.1,0.2);
            glTranslatef(8,1.65,-18);
            glScaled(0.5,0.5,1);
            glutSolidCube(20);
        glPopMatrix();

         glPushMatrix();//Ventana
            glColor3f(1,1,1);
            glTranslatef(12,2,-7.9);
            glScaled(0.5,0.5,0);
            glutSolidCube(4);
        glPopMatrix();


         glPushMatrix();//Puerta
            glColor3f(0.1,0.3,0.4);
            glTranslatef(6.4,-0.6,-8.1);
            glScaled(0.6,1.1,0.1);
            glutSolidCube(5);
        glPopMatrix();

        glPushMatrix();//repisa
            glColor3f(0.6,0.1,0.4);
            glTranslatef(12,1,-7.9);
            glScaled(1,0.4,0.4);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//techo1.2
            glColor3f(0.75,0.75,0.75);

            glTranslatef(5.4 ,8,-12.5);
            glRotatef(30,0,0,1);
            glScaled(0.15,0.02,0.3);

            glutSolidCube(39);
        glPopMatrix();


        glPushMatrix();//techo1.3
            glColor3f(0.75,0.75,0.75);

            glTranslatef(10.9 ,8,-12.5);
            glRotatef(-30,0,0,1);
            glScaled(0.15,0.02,0.3);

            glutSolidCube(39);
        glPopMatrix();

           glPushMatrix();//Barra que sostiene bandera
            glColor3f(0.75,0.75,0.75);
            glTranslatef(8.5,6.35,-12);
            glScaled(0.499,0.02,1);
            glutSolidCube(20);
        glPopMatrix();

        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(12.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(11.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(10.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(9.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(8.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(7.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(6.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();


        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(5.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();

        glPushMatrix();//Bandera
            glColor3f(1,0,0);
            glTranslatef(4.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();

        glPushMatrix();//Bandera
            glColor3f(1,1,1);
            glTranslatef(3.9,5.2,-3);
            glScaled(0.5,0.8,1);
            glutSolidCube(2);
        glPopMatrix();

}
void Edificio::graficarEdificio4(){
     glScalef(0.8,0.3,0.8);
    glPushMatrix();//EDIFICIO
        glColor3f(0.223,0.725,0.301);
        glScalef(1,2.5,1);
        glutSolidCube(8);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANA
        glColor3f(0.658,0.458,0.184);
        glTranslatef(4.01,4,0);
        glRotatef(90,0,1,0);
        glScalef(1.1,1.3,0);
        glutSolidCube(4);//marco 1I
    glPopMatrix();

    glPushMatrix(); //VENTANA
        glColor3f(0.819,0.858,0.090);
        glTranslatef(4.02,4,0);
        glRotatef(90,0,1,0);
        glScalef(1,1,0);
        glutSolidCube(4);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANA ladoI
        glColor3f(0.658,0.458,0.184);
        glTranslatef(0,0,4.02);
        //glRotatef(90,0,1,0);
        glScalef(1.3,2,0);
        glutSolidCube(4);//marco
    glPopMatrix();

    glPushMatrix(); //VENTANA
        glColor3f(0.819,0.858,0.090);
        glTranslatef(0,0,4.04);
        //glRotatef(90,0,1,0);
        glScalef(1.2,1.7,0);
        glutSolidCube(4);//ventana
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANA ladoD
        glColor3f(0.658,0.458,0.184);
        glTranslatef(0,0,-4.02);
        //glRotatef(90,0,1,0);
        glScalef(1.3,2,0);
        glutSolidCube(4);//marco
    glPopMatrix();

    glPushMatrix(); //VENTANA
        glColor3f(0.819,0.858,0.090);
        glTranslatef(0,0,-4.04);
        //glRotatef(90,0,1,0);
        glScalef(1.2,1.7,0);
        glutSolidCube(4);//ventana
    glPopMatrix();

    glPushMatrix();//Porton
        glColor3f(0.658,0.458,0.184);
        glTranslatef(4.02,-6,0);
        glRotatef(90,0,1,0);
        glScalef(1.4,2,0);
        glutSolidCube(4);
    glPopMatrix();

    //----AFICHE

    glPushMatrix();
        glColor3f(0.439,0.439,0.439);
        glTranslatef(4.4,6,-3);
        glRotatef(90,0,1,0);
        glScalef(0.1,0.1,0.3);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.211,0.211,0.211);
        glTranslatef(5,6,-3);
        glRotatef(90,0,1,0);
        glScalef(0.4,0.8,0.4);
        glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();//SIMBOLO
        glColor3f(1,0,0);
        glTranslatef(5,6,-3.65);
        //glRotatef(90,0,1,0);
        glScalef(0.3,1,0);
        glutSolidTeapot(1);
    glPopMatrix();

    glPushMatrix();//SIMBOLO
        glColor3f(1,0,0);
        glTranslatef(5,6,-2.355);
        //glRotatef(90,0,1,0);
        glScalef(0.3,1,0);
        glutSolidTeapot(1);
    glPopMatrix();

    glPushMatrix();//SIMBOLO
        glColor3f(1,0,0);
        glTranslatef(5.66,6,-3);
        glRotatef(90,0,1,0);
        glScalef(0.3,1,0);
        glutSolidTeapot(1);
    glPopMatrix();




}
void Edificio::graficarEdificio3(){

  glPushMatrix();//EDIFICIO
        glColor3f(0.407,0.756,0.529);
        glScalef(1,2.5,1);
        glutSolidCube(8);
    glPopMatrix();

    glPushMatrix(); //MARCO VENTANAS
        glColor3f(0,0,0);
        glTranslatef(4.01,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.6,0.6,0);
        glutSolidCube(4);//marco 1I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 1D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 2I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 2D
        glTranslatef(-6,-6,0);
        glutSolidCube(4);//marco 3I
        glTranslatef(6,0,0);
        glutSolidCube(4);//marco 3D
    glPopMatrix();

    glPushMatrix(); //VENTANAS
        glColor3f(0.537,0.556,0.705);
        glTranslatef(4.02,8,2);
        glRotatef(90,0,1,0);
        glScalef(0.5,0.5,0);
        glutSolidCube(4);//ventana 1I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 1D
        glTranslatef(-7.2,-7.1,0);
        glutSolidCube(4);//ventana 2I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 2D
        glTranslatef(-7.2,-7.2,0);
        glutSolidCube(4);//ventana 3I
        glTranslatef(7.2,0,0);
        glutSolidCube(4);//ventana 3D
    glPopMatrix();

    //----------------------------------

    glPushMatrix();//rellenar lado izquierdo
        glTranslatef(0,0,8.03);
        glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();
        glTranslatef(-0.03,0,0);
        //glRotatef(90,0,1,0);

        glPushMatrix(); //VENTANAS
            glColor3f(0.537,0.556,0.705);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();
        glPopMatrix();

        //----------------RELLENAR ATRAS
        glPushMatrix();
            glTranslatef(-8.02,0,0);
            glPushMatrix();//MARCOS
                glColor3f(0,0,0);
                glTranslatef(4.01,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.6,0.6,0);
                glutSolidCube(4);//marco 1I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 1D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 2I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 2D
                glTranslatef(-6,-6,0);
                glutSolidCube(4);//marco 3I
                glTranslatef(6,0,0);
                glutSolidCube(4);//marco 3D
            glPopMatrix();

            glTranslatef(-0.02,0,0);
            glPushMatrix();//VENTANAS
                glColor3f(0.537,0.556,0.705);
                glTranslatef(4.02,8,2);
                glRotatef(90,0,1,0);
                glScalef(0.5,0.5,0);
                glutSolidCube(4);//ventana 1I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 1D
                glTranslatef(-7.2,-7.1,0);
                glutSolidCube(4);//ventana 2I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 2D
                glTranslatef(-7.2,-7.2,0);
                glutSolidCube(4);//ventana 3I
                glTranslatef(7.2,0,0);
                glutSolidCube(4);//ventana 3D
            glPopMatrix();
        glPopMatrix();

        //------------------------RELLENAR LADO DERECHO

        glPushMatrix();
            glTranslatef(0,0,-0.02);
            glRotatef(90,0,1,0);
        glPushMatrix();//MARCOS
            glColor3f(0,0,0);
            glTranslatef(4.01,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.6,0.6,0);
            glutSolidCube(4);//marco 1I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 1D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 2I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 2D
            glTranslatef(-6,-6,0);
            glutSolidCube(4);//marco 3I
            glTranslatef(6,0,0);
            glutSolidCube(4);//marco 3D
        glPopMatrix();

        glTranslatef(0,0,-0.02);
        glPushMatrix();//VENTANAS
            glColor3f(0.537,0.556,0.705);
            glTranslatef(4.02,8,2);
            glRotatef(90,0,1,0);
            glScalef(0.5,0.5,0);
            glutSolidCube(4);//ventana 1I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 1D
            glTranslatef(-7.2,-7.1,0);
            glutSolidCube(4);//ventana 2I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 2D
            glTranslatef(-7.2,-7.2,0);
            glutSolidCube(4);//ventana 3I
            glTranslatef(7.2,0,0);
            glutSolidCube(4);//ventana 3D
        glPopMatrix();

        glPushMatrix();
        glPushMatrix();//PENTAGONO
            glColor3f(0.627,0.835,0.847);
            glTranslatef(0,10.02,0);
            glRotatef(90,1,0,0);
            glScalef(3.5,3.5,0);
            glutSolidIcosahedron();
        glPopMatrix();

        glColor3f(0.250,0.415,0.584);

        glPushMatrix();//H1
            glTranslatef(-1,10.04,0);
            glRotatef(90,1,0,0);
            glScalef(0.3,1.3,0);
            glutSolidCube(3);
        glPopMatrix();

        glPushMatrix();//Hmedio
            glTranslatef(0,10.04,0);
            glRotatef(90,1,0,0);
            glRotatef(90,0,0,1);
            glScalef(0.3,0.8,0);
            glutSolidCube(3);
        glPopMatrix();

        glPushMatrix();//H2
            glTranslatef(1.5,10.04,0);
            glRotatef(90,1,0,0);
            glScalef(0.3,1.3,0);
            glutSolidCube(3);
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();



}

#endif // EDIFICIO_H
