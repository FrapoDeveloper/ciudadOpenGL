#include <gl/glut.h>
#include <iostream>
#include <Carretera.h>
#include <Tractor.h>
#include <Arbol.h>
#include <Edificio.h>
#include <Pasto.h>
#include <Abispas.h>
#include <windows.h>
#include <Helicoptero.h>
#include <Semaforo.h>
/*AUTOR: FRAN ESPINO MOSTACERO*/
using namespace std;
float caminaTractor=-80;
float caminaTractor2=-100;
float caminaCarro=-100;
float camaraArriba=20;
float camaraX=0;
float camaraY=0;
float camaraZ=0;
float camaraFrente=10;
bool band=true;
Carretera *g;
Tractor *t;
Arbol *a;
Pasto *po;
Edificio *e;
Helicoptero *he;
Semaforo * se;

void graficarEjes()
{
    glColor3f(0,0,0);
    glBegin(GL_LINES);

        glColor3f(1,0,0);
        glVertex3f(0,0,0);
        glVertex3f(50,0,0);

        glColor3f(0,1,0);
        glVertex3f(0,0,0);
        glVertex3f(0,50,0);

        glColor3f(0,0,1);
        glVertex3f(0,0,0);
        glVertex3f(0,0,50);
    glEnd();
}



/*void printText(float x, float y, int spacing, void *font, char *string)
{
  char *c;
  int x1=x;

  for (c=string; *c != '\0'; c++)
{
    glRasterPos2f(x1,y);
        glutBitmapCharacter(font, *c);

    x1 = x1 + glutBitmapWidth(font,*c) + spacing;
  }
}
*/

void graficar(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f( 0.686 , 0.741 , 0.784 );
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotated(40,camaraX,camaraY,camaraZ);
    gluLookAt(-18,camaraFrente,camaraArriba,0,0,0,0,1,0);
    glPushMatrix();
    graficarEjes();

        glPushMatrix();
            glScaled(0.29,0.29,0.29);
       // printText(-84,84,0,GLUT_BITMAP_HELVETICA_18,"OZNEROL   DADUI C");
        glPopMatrix();

        //graficar carreteras
        glPushMatrix();
            glTranslated(0,0,-80);
            g->graficarPiso();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-178);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-112);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,-96);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,-80);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-64);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-48);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-32);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,-16);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,0);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,16);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,32);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,48);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,64);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,80);
            g->pista();
        glPopMatrix();

         glPushMatrix();
        glTranslated(-20,1,96);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,112);
            g->pista();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-20,1,128);
            g->pista();
        glPopMatrix();


        glPushMatrix();
        glTranslated(-20,1,144);
            g->pista();
        glPopMatrix();

           glPushMatrix();
        glTranslated(-20,1,160);
            g->pista();
        glPopMatrix();

          glPushMatrix();
          glRotated(270,0,1,0);
        glTranslated(0,13,0);

           se->graficarSemaforo();
        glPopMatrix();

        //graficar arboles
            glPushMatrix();
                glTranslated(20,1,0);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(20,1,0);
                a->dibujarArbol1();
            glPopMatrix();


            glPushMatrix();
                glTranslated(25,1,0);
                a->dibujarArbol1();
            glPopMatrix();

             glPushMatrix();
                glTranslated(30,1,0);
                a->dibujarArbol1();
            glPopMatrix();



            glPushMatrix();
                glTranslated(6,1,15);
                a->dibujarArbol1();
            glPopMatrix();

            glPushMatrix();
                glTranslated(6,1,25);
                a->dibujarArbol1();
            glPopMatrix();


              glPushMatrix();
                glTranslated(6,1,39);
                a->dibujarArbol2();
            glPopMatrix();

             glPushMatrix();
                glTranslated(6,1,45);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(6,1,50);
                a->dibujarArbol2();
            glPopMatrix();

             glPushMatrix();
                glTranslated(6,1,55);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(6,1,50);
                a->dibujarArbol1();
            glPopMatrix();

            glPushMatrix();
                glTranslated(6,1,65);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(9,12,-25);
                e->graficarHospital();
            glPopMatrix();

        glPushMatrix();
                glTranslated(-41,4,-40);
                glScalef(0.8,0.8,0.8);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-44,2.5,-31);
                glScalef(1,1.3,1);
                se->graficarBsurero();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-44,2.5,-55);
                glScalef(1,1.3,1);
                se->graficarBsurero();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-44,2.5,-13);
                glScalef(1,1.3,1);
                se->graficarBsurero();
            glPopMatrix();

            //----


//-------

            glPushMatrix();
                glTranslated(-47,12,65);
                e->graficarEdificio2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-34.4,6,-15);
                glRotatef(90,0,1,0);
                e->graficarTienda();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-46.7,6,-45);
                e->graficarEdificio1();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-47.4,7,-63);
                glScalef(1.2,1.2,1.2);
                e->graficarEdificio3();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-47.4,7,-75);
                e->graficarEdificio2();
            glPopMatrix();

            //-----

        //graficar Edificios
            glPushMatrix();
                glTranslated(-4,7,-75);
                glRotated(90,0,-1,0);
                e->graficarTienda();
            glPopMatrix();


            glPushMatrix();
                glTranslated(-4,7,-100);
                glRotated(90,0,-1,0);
                e->graficarTienda();
            glPopMatrix();

            glPushMatrix();
                glTranslated(9,12,-52);
                e->graficarEdificio1();
            glPopMatrix();

            glPushMatrix();
                glTranslated(9,12,-42);
                e->graficarEdificio2();
            glPopMatrix();

              glPushMatrix();

                glTranslated(8,6,-82);
                 glRotated(180,0,1,0);
                e->graficarEdificio4();
            glPopMatrix();

             glPushMatrix();
                glTranslated(6,0,18); //
                a->dibujarArbol2();
            glPopMatrix();

             glPushMatrix();
                glTranslated(6,0,2);
                a->dibujarArbol2();
            glPopMatrix();

            glPushMatrix();
                glTranslated(7,3,-17);
                se->graficarBsurero();
            glPopMatrix();

             glPushMatrix();
                glTranslated(7,3,0);
                se->graficarBsurero();
            glPopMatrix();

             glPushMatrix();
                glTranslated(7,3,16);
                se->graficarBsurero();
            glPopMatrix();

            glPushMatrix();
                glTranslated(18,5,25);
                glRotated(-90,1,0,0);
                se->graficarBsurero();
            glPopMatrix();

            glPushMatrix();
                glTranslated(28,5,25);
                glRotated(180,1,0,0);
                se->graficarBsurero();
            glPopMatrix();


            glPushMatrix();
                glTranslated(9,12,32);
                e->graficarHospital();
            glPopMatrix();

            glPushMatrix();
                glTranslated(9,12,50);
                e->graficarEdificio3();
            glPopMatrix();

            glPushMatrix();
                glTranslated(9,12,8);
                e->graficarEdificio1();
            glPopMatrix();



            glPushMatrix();
                glTranslated(9,12,-8);
                e->graficarEdificio3();
            glPopMatrix();


             glPushMatrix();
                glTranslated(-50,8,0);
                glScaled(2,2,2);
                e->graficarEdificio4();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-48,12,16);
                e->graficarEdificio1();
            glPopMatrix();

             glPushMatrix();
                glTranslated(-48,12,32);
                e->graficarHospital();
            glPopMatrix();

            glPushMatrix();
                glTranslated(-48,12,45);
                e->graficarEdificio2();
            glPopMatrix();

        //graficar pastos
            glPushMatrix();
                glTranslated(22,1.5,28);
                glScaled(1.3,1,16);
                po->graficarPasto();
            glPopMatrix();

             glPushMatrix();
                glTranslated(-57,1.5,28);
                glScaled(1.3,1,16);
                po->graficarPasto();
            glPopMatrix();
            glPushMatrix();
                glTranslated(-55,5,-27);
                glRotated(-90,1,0,0);
                se->graficarmuneco();
            glPopMatrix();


            glPopMatrix();
            //vehiculos

            glPushMatrix();
            glTranslated(-25,8,caminaCarro);
                t->graficarCarro();
             glPopMatrix();



                glPushMatrix();
                    glTranslated(-12,3,caminaTractor);
                    glScaled(0.095,0.095,0.095);
                    t->graficarTodo();
                    glPushMatrix();
                        glRotated(265,0,1,0);
                        glColor3f( 0.784 , 0.450 , 0.082 );
                            glScaled(2.5,2.5,3.5);
                            glTranslated(0,14,0);
                            glutSolidTeapot(2);
                        glPopMatrix();
                        //mano 1
                        glPushMatrix();
                            glColor3f( 0.784 , 0.450 , 0.082 );
                            glTranslated(0,35,3.5);
                            glScaled(2,2,2);
                            glRotated(-35,1,0,0);
                            gluCylinder(p,1,1,10,80,60);
                        glPopMatrix();

                        //escabadora
                             glPushMatrix();
                                glColor3f(0.0,0.0,0.0);
                                glTranslated(0,27,35);
                                glutSolidCube(10);
                            glPopMatrix();

                             glPushMatrix();
                             glTranslated(0,27,39);

                                glColor3f(0.0,0.0,0.0);
                                gluCylinder(p,2,0,10,80,60);
                            glPopMatrix();

                            glPushMatrix();
                            glTranslated(3,27,39);

                                glColor3f(0.0,0.0,0.0);
                                gluCylinder(p,2,0,10,80,60);
                            glPopMatrix();

                             glPushMatrix();
                            glTranslated(-3,27,39);

                                glColor3f(0.0,0.0,0.0);
                                gluCylinder(p,2,0,10,80,60);
                            glPopMatrix();

                            glPopMatrix();

                             glPushMatrix();
                                    glTranslated(0,46.8,21);
                                    glScaled(-0.19,-0.19,-0.19); //achicar
                                    glColor3i(0,0,0);
                                    glutSolidSphere(20,20,20);
                        glPopMatrix();

                        glPushMatrix();
                        glColor3f( 0.784 , 0.450 , 0.082 );
                                    glTranslated(0,46,20);
                                    glScaled(2,2,2);
                                    glRotated(50,1,0,0);
                                    gluCylinder(p,1,1,10,80,60);

                        glPopMatrix();
                 glPopMatrix();


    glPopMatrix();
    glPushMatrix();

    glTranslated(9,25,-24);
    glScaled(0.5,0.5,0.5);
    he->graficarHelicoptero();
    glPopMatrix();


    glPushMatrix();
                    glTranslated(-12,3,caminaTractor2);
                    glScaled(0.095,0.095,0.095);
                     t->graficarTodo2();
                    glPopMatrix();

        glPopMatrix();

    glutSwapBuffers();



}

void inicializar(void)
{
    glColor3f( 0.686 , 0.741 , 0.784 );
    glEnable(GL_DEPTH_TEST);
   // gluQuadricDrawStyle(tractor.p,GLU_LINE);
}

void redimensionar(int w, int h){

	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluPerspective(80.0,(float)w/(float)h,1,100); //de este dependeta el lookat
}



void manejarTeclado(unsigned char key,int x, int y)
{
    switch(key)
    {

        case 'x':   camaraX = camaraX + 10;
                    break;
        case 'y':    camaraY = camaraY + 10;
                    break;
        case 'z':    camaraZ = camaraZ+ 10;
                    break;
         case 'a':   camaraX = camaraX - 10;
                    break;
        case 'b':    camaraFrente =camaraFrente-5;
                    break;
        case 'c':    camaraZ = camaraZ - 10;
                    break;
        case 't': camaraFrente =camaraFrente+5;
                    break;
        case 'o': camaraArriba =camaraArriba+5;
                    break;
        case 'p': camaraArriba =camaraArriba-5;
                    break;

        case 'n':    camaraX=0;
                     camaraY=0;
                     camaraZ=0;
                    break;
    }
    glutPostRedisplay();
}

void Manejo()
{
       caminaTractor=caminaTractor+8;
        caminaCarro=caminaCarro+8;
caminaTractor2=caminaTractor2+8;
        if(band==true){
        caminaTractor=caminaTractor+8;
        caminaTractor2=caminaTractor2+8;
        caminaCarro=caminaCarro+8;
      //  camaraFrente = camaraFrente+2;
        }

        if(camaraFrente>=50 && band==true){

           //camaraFrente =20;
           //camaraArriba =20;
           band=false;
        }

        if(band==false){


          // camaraArriba = camaraArriba + 0.5;

        }


      if(caminaTractor>=180){

         caminaTractor=-80;
         caminaTractor2=-120;
         caminaCarro=caminaTractor-50;

      }

         glutPostRedisplay();

}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("t = subir /b= bajar");
    inicializar();
    glutDisplayFunc(graficar);
	glutReshapeFunc(redimensionar);
	glutKeyboardFunc(manejarTeclado);//TECLADO
	glutIdleFunc(Manejo);


    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();
    return 0;
}
