#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1, 1, 0);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.6, -0.5);
	glVertex2f(-0.4, -0.8);

	glColor3f(1, 0, 0);
	glVertex2f(0.7, 0.5);
	glVertex2f(0.5, 0.8);
	glVertex2f(0.9, 0.8);

	glColor3f(1, 1, 1);
	glVertex2f(-0.3, 0);
	glVertex2f(0.3, 0);
	glVertex2f(0, 0.51);

	glEnd();

	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Test");
	glClearColor(0, 0, 0, 0);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	glutMainLoop();
}