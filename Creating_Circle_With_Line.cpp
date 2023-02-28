#include<GL/glut.h>
#include<math.h>
#define PI 3.14
void display()
{
	gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
	glClear(GL_COLOR_BUFFER_BIT);
	float x, y, z, i, Teta;
	glBegin(GL_LINE);
	z = 0.0;
	for (i = 0.0; i < PI; i += (PI / 20.0))
	{
		glColor3f(0, 0, 1);
		x = 50.0*sin(i);
		y = 50.0*cos(i);
		glVertex3f(x, y, z);


		glColor3f(0, 1, 0);
		x = 50.0*sin(i + PI);
		y = 50.0*cos(i + PI);
		glVertex3f(x, y, z);
	}

	glEnd();
	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(750, 700);
	glutCreateWindow("Test");
	glClearColor(0, 0, 0, 0);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	glutMainLoop();
}