#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	float size = 10;
	for (float pos = 0.8; pos > -0.2; pos -= 0.1)
	{
		glColor3f(0.9, 0.8, 0.2);
		glPointSize(size);
		glBegin(GL_POINTS);
		glVertex2f(pos, 0.0);
		glEnd();
		size -= 2;
	}

	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(400, 500);
	glutCreateWindow("Test");
	glClearColor(0, 0, 0, 0);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	glutMainLoop();
}