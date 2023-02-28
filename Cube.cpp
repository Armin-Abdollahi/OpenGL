#include<GL/glut.h>
int w = 400, h = 400;
float size = 0.5;
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(90, 1, 0, 1);
	glPolygonMode(GL_FRONT_AND_BACK, GLU_LINE);
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(size, 0, 0);
	glVertex3f(size, size, 0);
	glVertex3f(0, size, 0);

	glColor3f(0, 0, 1);
	glVertex3f(0, 0, -size);
	glVertex3f(size, 0, -size);
	glVertex3f(size, size, -size);
	glVertex3f(0, size, -size);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(0, size, 0);
	glVertex3f(0, size, -size);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, -size);

	glVertex3f(size, 0, 0);
	glVertex3f(size, 0, -size);
	glVertex3f(size, size, 0);
	glVertex3f(size, size, -size);

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