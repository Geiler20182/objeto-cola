#include "Tetera.h"

Tetera::Tetera() {}

void Tetera::DibujarTetera(float aX, float aY, float aZ) {
    glPushMatrix();
        glTranslatef(3.0f, 0.0f, 0.0f);
        glPushMatrix();
            glutSolidTeapot(1);
        glPopMatrix();
    glPopMatrix();
}

Tetera::~Tetera() {}
