#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.9, 0.2, 0.3);

	GLushort stPattern = 0xFFAAFF;
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(4, stPattern);
	glLineWidth(3.8);
	glBegin(GL_LINES);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.6, 0.6);
	glVertex2f(-0.6, -0.6);
	glVertex2f(0.6, -0.6);
	glVertex2f(0.6, 0.6);

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