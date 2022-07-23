#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#define PI          3.141516
#include<math.h>

void display() {

// Set background color to black and opaque
glClearColor(0.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);


    //glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	int i;

    GLfloat p1=0.0f; GLfloat q1= 0.50f; GLfloat r1 = 0.15f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 252, 229, 112);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    glFlush();








    	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.8f,0.8f,0.8f); // Red

	glVertex2f(-1.0f, -0.05f);    // x, y
	glVertex2f(1.0f, -0.05f);    // x, y

	glVertex2f(1.0f, 0.00f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y
	glEnd();

	//river
		glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f,0.8f,0.8f); // Red

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y
    glVertex2f(1.0f, -0.30f);    // x, y
	glVertex2f(-1.0f, -0.30f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.8f,0.8f,0.8f); // Red

	glVertex2f(-0.80f, -0.12f);    // x, y
	glVertex2f(-0.40f, -0.12f);    // x, y

	glVertex2f(-0.40f, -0.05f);    // x, y
	glVertex2f(-0.80f, -0.05f);    // x, y
	glEnd();
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.8f,0.8f,0.8f); // Red

	glVertex2f(0.80f, -0.12f);    // x, y
	glVertex2f(0.40f, -0.12f);    // x, y

	glVertex2f(0.40f, -0.05f);    // x, y
	glVertex2f(0.80f, -0.05f);    // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.8f,0.8f,0.8f); // Red

	glVertex2f(-0.68f, -0.60f);    // x, y
	glVertex2f(-0.55f, -0.60f);    // x, y

	glVertex2f(-0.55f, -0.12f);    // x, y
	glVertex2f(-0.68f, -0.12f);    // x, y
	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.8f,0.8f,0.8f); // Red

	glVertex2f(0.68f, -0.60f);    // x, y
	glVertex2f(0.55f, -0.60f);    // x, y

	glVertex2f(0.55f, -0.12f);    // x, y
	glVertex2f(0.68f, -0.12f);    // x, y
	glEnd();


    glFlush();  // Render now

}



/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {

glutInit(&argc, argv);                 // Initialize GLUT

glutCreateWindow("Circle"); // Create a window with the given title

glutInitWindowSize(720, 480);   // Set the window's initial width & height

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop();           // Enter the event-processing loop

return 0;

}

