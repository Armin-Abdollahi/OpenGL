#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POINT);
	glColor3f(1, 0, 0);
	glVertex2f(-0.5, 0);

	glColor3f(0, 1, 0);
	glVertex2f(-0.4, -0.2);

	glColor3f(0, 0, 1);
	glVertex2f(-0.2, -0.1);

	glColor3f(1, 1, 0);
	glVertex2f(0, 0);

	glColor3f(0.5, 0, 1);
	glVertex2f(0.2, 0.1);

	glColor3f(1, 1, 1);
	glVertex2f(0.4, 0.2);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(0.6, 0.3);

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