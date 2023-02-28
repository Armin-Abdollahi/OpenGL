#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GLU_LINE);
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.4, 0.7);
	glVertex2f(0, 0);
	glVertex2f(0.2, 0.2);
	glVertex2f(0.8, 0.2);
	glVertex2f(0.6, 0);

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