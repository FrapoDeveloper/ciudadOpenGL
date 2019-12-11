#ifndef GRASS_H
#define GRASS_H
#include <gl/glut.h>

class Grass
{
    public:
            Grass();

    public: void graficarGrass();
};

void Grass::graficarGrass()
{
     for(int i=0;i<185;i++){
        for(int j=0;j<150;j++){

            glPushMatrix();
                glTranslatef(-i*0.16,0,-j*0.16);

                glTranslatef(14.8,0.3,15);

                glScaled(0.01,0.01,0.01);
                glColor3f(0,0.6,0);
                 glBegin(GL_TRIANGLES);//derecha

                        glVertex3f(12,13,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);
                glEnd();
               glBegin(GL_TRIANGLES);//izquierda


                        glVertex3f(-12,13,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);


              glEnd();
              glBegin(GL_TRIANGLES);//enmedio


                        glVertex3f(0,16,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);

              glEnd();
            glPopMatrix();
        }
    }
    for(int i=0;i<185;i++){
        for(int j=0;j<150;j++){

            glPushMatrix();
                glTranslatef(-i*0.16,0,-j*0.16);

                glTranslatef(14.8,0.3,15);
                glRotatef(90,0,1,0);
                glScaled(0.01,0.01,0.01);
                glColor3f(0,0.6,0);
                 glBegin(GL_TRIANGLES);//derecha

                        glVertex3f(12,13,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);
                glEnd();
               glBegin(GL_TRIANGLES);//izquierda


                        glVertex3f(-12,13,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);


              glEnd();
              glBegin(GL_TRIANGLES);//enmedio


                        glVertex3f(0,16,0);

                        glVertex3f(-4,-8,0);

                        glVertex3f(4,-8,0);

              glEnd();
            glPopMatrix();
        }
    }
}




#endif // GRASS_H
