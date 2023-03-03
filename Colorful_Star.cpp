#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GLU_LINE);
	glBegin(GL_POLYGON);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(0.2, 0.2);

	glColor3f(0.9, 0.2, 0.2);
	glVertex2f(0, 0.6);

	glColor3f(0.3, 0.3, 0.3);
	glVertex2f(-0.2, 0.2);

	glColor3f(0.4, 0.4, 1);
	glVertex2f(-0.7, 0.15);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(-0.3, -0.1);

	glColor3f(0.6, 1, 0.6);
	glVertex2f(-0.5, -0.5);

	glColor3f(1, 0.7, 0.7);
	glVertex2f(0, -0.3);

	glColor3f(0.8, 1, 0.8);
	glVertex2f(0.5, -0.5);

	glColor3f(0.9, 0.9, 1);
	glVertex2f(0.3, -0.1);

	glColor3f(0, 1, 0);
	glVertex2f(0.7, 0.15);

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