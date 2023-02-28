#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GLU_LINE);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);
	glVertex2f(0.2, 0.2);
	glVertex2f(0, 0.6);
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.7, 0.15);
	glVertex2f(-0.3, -0.1);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0, -0.3);
	glVertex2f(0.5, -0.5);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.7, 0.15);

	glEnd();

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