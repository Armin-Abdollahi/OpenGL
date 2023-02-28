#include<GL/glut.h>
#include<math.h>
#define PI 3.14
int w = 400, h = 500;
GLint Circle_Points = 100;
void MyCircle(GLfloat centerx, GLfloat centery, GLfloat radius)
{
	GLint r;
	GLdouble Teta;
	glBegin(GL_POLYGON);
	for (r = 0; r < Circle_Points; r++)
	{
		Teta = 2 * PI*r / Circle_Points;
		glVertex2f(centerx + radius*cos(Teta), centery + radius*sin(Teta));
	}
	glEnd();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GLU_LINE);
	glColor3f(0.1, 0.7, 0.4);
	MyCircle(0.3, 0, 0.4);
	MyCircle(-0.3, 0, 0.4);
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