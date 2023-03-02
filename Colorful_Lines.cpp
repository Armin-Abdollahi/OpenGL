#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.5, 0.5);

	glColor3f(0, 1, 0);
	glVertex2f(-0.1, 0.1);
	glVertex2f(-0.5, 0.5);

	glColor3f(0, 0, 1);
	glVertex2f(-0.1, -0.1);
	glVertex2f(-0.5, -0.5);

	glColor3f(1, 1, 1);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.5, -0.5);

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