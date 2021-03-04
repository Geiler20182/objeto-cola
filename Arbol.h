#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Arbol
{
	public:
		Arbol();

		void DibujarArbol(float aX, float aY, float aZ);

		~Arbol();
};

