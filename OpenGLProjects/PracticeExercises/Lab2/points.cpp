/*
Syed Ali
COSC 518 Lab 2 Problem 1
Assignment Due 09/21/2020
*/

#include <glut.h>

void myinit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);						// set display window to white
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(-200.0, 400.0, -200.0, 200);					// setting the (x,y) coordinates
	glMatrixMode(GL_MODELVIEW);
}

void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, 500, 500);

	// First House
	glColor3f(1.0, 0.0, 0.0);								// setting the object color to red
	glBegin(GL_POINTS);										// calling GL_POINTS functions

	glVertex2f(0, -50);										// placing all the points for the first house
	glVertex2f(80, -50);
	glVertex2f(80, 30);
	glVertex2f(120, 30);
	glVertex2f(120, -50);
	glVertex2f(200, -50);
	glVertex2f(200, 70);
	glVertex2f(0, 70);
	glVertex2f(100, 150);
	glVertex2f(140, 100);
	glVertex2f(160, 150);
	glVertex2f(160, 80);
	glVertex2f(200, 70);
	glEnd();

	// Second House
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POINTS);

	glVertex2f(50, 0);										// placing all the points for the second house
	glVertex2f(90, 0);
	glVertex2f(110, 0);
	glVertex2f(150, 0);
	glVertex2f(150, 60);
	glVertex2f(50, 60);
	glVertex2f(100, 100);
	glVertex2f(90, 40);
	glVertex2f(110, 40);
	glVertex2f(120, 80);
	glVertex2f(120, 100);
	glVertex2f(130, 100);
	glVertex2f(130, 75);
	glVertex2f(200, 70);
	glEnd();

	glFlush();
}


	int main(int argc, char** argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_RGBA
			| GLUT_SINGLE | GLUT_MULTISAMPLE);			// initialize GLUT
		glutInitWindowSize(640, 480);					// set the window size
		glutInitWindowPosition(100, 100);				// set display-window width and height to 100
		glutCreateWindow("Drawing a 2D House");
		glutDisplayFunc(display);						// send graphics to display window
		myinit();
		glutMainLoop();
		return 0;
	}