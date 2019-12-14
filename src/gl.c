#include "ft.h"

void vDisplay1() 
	{ 
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
    glVertex2f(100, 100);
    glVertex2f(200, 200);
	glEnd();
	glFlush();
	} 
	
	void vReshape1(int w, int h) 
{ 
	float L;
	float H;

	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w<=h) 
	{ 
	  if (w==0) H=HEIGHT1;
	  else H=(GLfloat) (WIDTH1*h/w);
	  L=WIDTH1;
	} 
	else 
	{ 
	  H=HEIGHT1;
	  if (h==0) L=WIDTH1;
	  else L=(GLfloat) (HEIGHT1*w/h);
	} 
	gluOrtho2D(-L/2,L/2,-H/2,H/2); 
} 
