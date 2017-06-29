#include<GL/glut.h>

void AnyObject(){
	glSolidTeapot();
	
}

void myDisplay(){

	glColor3f(1,0,0); //Color of Object to Red
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(10,10,200,200);
	AnyObject();
	glFlush();
	
}

void main(){

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowsSize(800,600);
glutInitWindowPosition(200,50);
glutCreateWindow("OpenGL Lab 2");
glClearColor(0,0,0,0); //Setting color to black
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-3,3,-2,2);
glutDisplayFunc(myDisplay);
glutMainLoop();
}
