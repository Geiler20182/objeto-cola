#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Tetera
{
	public:
		Tetera();

		void DibujarTetera(float aX, float aY, float aZ);

		~Tetera();
};

