#include "Triangulo.h"

Triangulo::Triangulo() {}

void Triangulo::DibujarTriangulo(float aX, float aY, float aZ) {
	glPushMatrix();
        glTranslatef(aX, aY, aZ);

        glPushMatrix();
            glBegin(GL_TRIANGLES);
                glVertex3f(1.0f, 0.0f, 0.0f);
                glVertex3f(0.0f, 1.7f, 0.0f);
                glVertex3f(-1.0f, 0.0f, 0.0f);
            glEnd();
	    glPopMatrix();

    glPopMatrix();
}

Triangulo::~Triangulo() {}
