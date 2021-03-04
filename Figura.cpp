#include "Figura.h"

Figura::Figura() {}

void Figura::DibujarFigura(float aX, float aY, float aZ) {

    glPushMatrix();
        glTranslatef(1.0f, -0.5f, 0.0f);
        glPushMatrix();
        glutSolidCube(2);
        glPopMatrix();

        glTranslatef(-2.0f, 0.0f, 0.0f);
        glPushMatrix();
        glutSolidCube(2);
        glPopMatrix();
    
        glTranslatef(-2.0f, 0.0f, 0.0f);
        glPushMatrix();
        glutSolidSphere(1, 20, 20);
        glPopMatrix();

    glPopMatrix();
    glPushMatrix();
        

        glTranslatef(aX, aY, aZ);
        glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
        glTranslatef(3.0, 0.0, 0.0);
        glPushMatrix();
        glScalef(1.0, 0.4, 0.5);
        glutSolidCube(1.0);
        glPopMatrix();
           
        const int num_seg = 28;
        
        for (int i = 0; i < num_seg; i++) {
        
            glTranslatef(0.5, 0.0, 0.0);
            glRotatef((GLfloat)20, 0.0, 0.0, 1.0);
            glTranslatef(0.5, 0.0, (-1.0) * i/25);
            glPushMatrix();
            glScalef(1.0, 0.4, 0.5);
            glutSolidCube(1.0);
            glPopMatrix();
        
        }

    glPopMatrix();
}

Figura::~Figura() {}