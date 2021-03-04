#include "Cola.h"

Cola::Cola() {

}

void Cola::DibujarCola(float aX, float aY, float aZ) {
	glPushMatrix();

	glTranslatef(aX, aY, aZ);
	//Copa del Cola
	glPushMatrix();
	glTranslatef(0.0f, 1.0f, 0.0f);
	glutSolidSphere(1.0f, 20, 20);
	glPopMatrix();

	//Tronco
	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glutSolidCylinder(0.5f, 1.0f, 20, 20);
	glPopMatrix();

	glPopMatrix();
}

Cola::~Cola() {}