#ifndef HELICOPTERO_H
#define HELICOPTERO_H


class Helicoptero
{
    public:

    public:
            void graficarHelicoptero();

};



void Helicoptero::graficarHelicoptero(){

    glColor3f(0.250,0.435,0.658);
      //  glRotatef(angTronco,0,1,0);
        glutSolidSphere(4,10,10);
        glPushMatrix();
            //cola
            glColor3f(0.462,0.737,0.474);
            glTranslatef(0,0,2.5);
            gluCylinder(p,4,0.5,9.5,60,60);

            glPushMatrix();
                //helice2
                  //  glRotatef(angHelice2,0,0,1);
                    glPushMatrix();
                    glTranslated(-4,0,10);
                    glColor3f(0.623,0.725,0.909);
                    glRotatef(90,0,1,0);
                    gluCylinder(p,0.1,0.1,8,16,16);

                    glTranslated(0,4,4);
                    glRotatef(90,1,0,0);
                    gluCylinder(p,0.1,0.1,8,16,16);
                    glPopMatrix();
            glPopMatrix();
            glPushMatrix();
                //tronquito
                glColor3f(0.650,0.549,0.2);
                glTranslatef(0,4,-3);
                glRotatef(-90,1,0,0);
                gluCylinder(p,0.5,0.1,2,16,16);
                glPushMatrix();
                //helice1

                    glPushMatrix();
                    glColor3f(0.623,0.725,0.909);
                   // glRotatef(angHelice1,0,0,1);
                    glTranslatef(0,0,2);
                    glRotatef(90,0,1,0);
                    gluCylinder(p,0.1,0.1,4,16,16);

                    glTranslated(0,0,0);
                    glRotatef(90,1,0,0);
                    gluCylinder(p,0.1,0.1,4,16,16);

                    glTranslated(0,0,0);
                    glRotatef(90,1,0,0);
                    gluCylinder(p,0.1,0.1,4,16,16);

                    glTranslated(0,0,0);
                    glRotatef(90,1,0,0);
                    gluCylinder(p,0.1,0.1,4,16,16);
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();

        glPopMatrix();

        glPushMatrix();
            glTranslatef(1.5,-3.5,0);
            glRotatef(90,1,0,0);
            gluCylinder(p,0.3,0.3,2,16,16);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-1,-3.5,0);
            glRotatef(90,1,0,0);
            gluCylinder(p,0.3,0.3,2,16,16);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(1.5,-5.5,-1);
            gluCylinder(p,0.3,0.3,2,16,16);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-1,-5.5,-1);
            gluCylinder(p,0.3,0.3,2,16,16);
        glPopMatrix();



}

#endif // HELICOPTERO_H
