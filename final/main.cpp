#include<cstdio>
#include <windows.h>
#include<math.h>

# define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>





GLfloat position1 = .50f;
GLfloat speed1 =-0.004f;
void boat(int value)
{
   if(position1 < -0.25)
        position1 = 0.60f;

    position1 += speed1;


glutPostRedisplay();


	glutTimerFunc(100, boat, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = -0.002f;
void cloud(int value) {
    if(position2 < -1.00)
        position2 =1.00f;
    position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, cloud, 0);
}

GLfloat position22 = 0.0f;
GLfloat speed22 = 0.005f;
void birdd(int value) {
    if(position22 > 1.0)
        position22 =-1.0f;
    position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(100, birdd, 0);
}

GLfloat position3 = 1.4f;
GLfloat speed3 = -0.020f;
void bullettrain(int value) {
    if(position3 < -1.0)
        position3 =2.4f;
    position3 += speed3;
	glutPostRedisplay();
	glutTimerFunc(100, bullettrain, 0);

}

GLfloat position6= 0.60f;
GLfloat speed6 = 0.010f;
void car3(int value) {
    if(position6 > 1.2)
        position6 =-1.2f;
    position6 += speed6;
	glutPostRedisplay();
	glutTimerFunc(100, car3, 0);

}



	GLfloat position4= -0.90f;
GLfloat speed4 = 0.010f;
void car1(int value) {
    if(position4 > 1.2)
        position4 =-1.2f;
    position4 += speed4;
	glutPostRedisplay();
	glutTimerFunc(100, car1, 0);


}



GLfloat position5 = -1.5f;
GLfloat speed5 = 0.009f;
void car2(int value) {
    if(position5 > 1.0)
        position5 =-1.5f;
    position5 += speed5;
	glutPostRedisplay();
	glutTimerFunc(100, car2, 0);


}



GLfloat position7 = .30f; //minibus
GLfloat speed7 =-0.009f;

void minibus(int value)
{
   if(position7 < -1.8)
        position7 = 1.00f;

    position7 += speed7;


glutPostRedisplay();


	glutTimerFunc(100, minibus, 0);
}



GLfloat position8 = .00f; //minibus2
GLfloat speed8 =-0.009f;
void minibus2(int value)
{
   if(position8 < -1.8)
        position8 = 1.00f;

    position8 += speed8;


glutPostRedisplay();
glutTimerFunc(100, minibus2, 0);
}

GLfloat position9 = -0.70f;
GLfloat speed9 = -0.010f;
void jeep1(int value) {
    if(position9 < -1.8)
        position9 =1.10f;
    position9 += speed9;
	glutPostRedisplay();
	glutTimerFunc(100, jeep1, 0);

}

	GLfloat position10 = 0.0f;
GLfloat speed10 = -0.010f;
void jeep2(int value) {
    if(position10 < -1.80)
        position10 =1.10f;
    position10 += speed10;
	glutPostRedisplay();
	glutTimerFunc(100, jeep2, 0);

}




void cloud1()
{
    int i;

	GLfloat x=.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void cloud2()
{

    int i;

	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void cloud3()
{

    int i;

	GLfloat x=0.0f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.05f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.05f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.02f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.1f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void bird()
{
       int i;
GLfloat mm=0.382f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.3f,0.8f);
    glVertex2f(0.31f,0.79f);
    glVertex2f(0.32f,0.78f);
    glVertex2f(0.36f,0.77f);
    glVertex2f(0.39f,0.79f);
    glVertex2f(0.401f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.375f,0.8f);
    glVertex2f(0.35f,0.8f);
    glVertex2f(0.34f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.375f,0.8f);
    glVertex2f(0.344f,0.8f);
    glVertex2f(0.32f,0.83f);
    glEnd();

	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.18f,0.8f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.20f,0.78f);
    glVertex2f(0.24f,0.77f);
    glVertex2f(0.27f,0.79f);
    glVertex2f(0.281f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.255f,0.8f);
    glVertex2f(0.23f,0.8f);
    glVertex2f(0.22f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.255f,0.8f);
    glVertex2f(0.224f,0.8f);
    glVertex2f(0.20f,0.83f);
    glEnd();

	GLfloat mmm=0.262f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.82f,0.8f);
    glVertex2f(-0.81f,0.79f);
    glVertex2f(-0.8f,0.78f);
    glVertex2f(-0.76f,0.77f);
    glVertex2f(-0.73f,0.79f);
    glVertex2f(-0.719f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.745f,0.8f);
    glVertex2f(-0.77f,0.8f);
    glVertex2f(-0.78f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.745f,0.8f);
    glVertex2f(-0.776f,0.8f);
    glVertex2f(-0.8f,0.83f);
    glEnd();

	GLfloat mmmm=-0.738f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.218f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.3f,0.8f);
    glVertex2f(-0.29f,0.79f);
    glVertex2f(-0.28f,0.78f);
    glVertex2f(-0.24f,0.77f);
    glVertex2f(-0.21f,0.79f);
    glVertex2f(-0.199f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.225f,0.8f);
    glVertex2f(-0.25f,0.8f);
    glVertex2f(-0.26f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.225f,0.8f);
    glVertex2f(-0.256f,0.8f);
    glVertex2f(-0.28f,0.83f);
    glEnd();


}


void boat()
{
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.50f, -0.95f);
	glVertex2f(0.65f, -0.95f);
	glVertex2f(0.70f, -0.90);
    glVertex2f(0.45f, -0.90f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(0.50f, -0.90f);
	glVertex2f(0.65f,-0.90f);
	glVertex2f(0.63f, -0.87f);
	glVertex2f(0.60f, -0.85f);
	glVertex2f(0.55f, -0.85f);
    glVertex2f(0.52f, -0.87f);
    glEnd();

glBegin(GL_POLYGON);
	glColor3ub(255,25,25);
	glVertex2f(0.52f, -0.82f);
	glVertex2f(0.63f, -0.83f);
	glVertex2f(0.63f, -0.68f);
	glVertex2f(0.52f, -0.67f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(136,204,0);
	glVertex2f(0.57f, -0.85f);
	glVertex2f(0.58f, -0.85f);
	glVertex2f(0.58f, -0.65f);
	glVertex2f(0.57f, -0.65f);
	glEnd();

}

void bullettrain(){

glBegin(GL_POLYGON);
	glColor3ub(14,89,156);
	glVertex2f(-0.51f,-0.35f);
    glVertex2f(-0.27f,-0.35f);
    glVertex2f(-0.27f,-0.29f);
    glVertex2f(-0.54f,-0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(253,253,253);
	glVertex2f(-0.54f,-0.29f);
    glVertex2f(-0.50f,-0.20f);
    glVertex2f(-0.27f,-0.20f);
    glVertex2f(-0.27f,-0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.48f,-0.27f);
    glVertex2f(-0.45f,-0.27f);
    glVertex2f(-0.45f,-0.22f);
    glVertex2f(-0.48f,-0.22f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.40f,-0.27f);
    glVertex2f(-0.37f,-0.27f);
    glVertex2f(-0.37f,-0.22f);
    glVertex2f(-0.40f,-0.22f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.32f,-0.27f);
    glVertex2f(-0.29f,-0.27f);
    glVertex2f(-0.29f,-0.22f);
    glVertex2f(-0.32f,-0.22f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(14,89,156);
	glVertex2f(-0.26f,-0.35f);
    glVertex2f(-0.17f,-0.35f);
    glVertex2f(-0.17f,-0.29f);
    glVertex2f(-0.26f,-0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(253,253,253);
	glVertex2f(-0.26f,-0.29f);
    glVertex2f(-0.17f,-0.29f);
    glVertex2f(-0.17f,-0.20f);
    glVertex2f(-0.26f,-0.20f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.23f,-0.27f);
    glVertex2f(-0.20f,-0.27f);
    glVertex2f(-0.20f,-0.22f);
    glVertex2f(-0.23f,-0.22f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(14,89,156);
	glVertex2f(-0.16f,-0.35f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(0.04f,-0.29f);
    glVertex2f(-0.16f,-0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(253,253,253);
	glVertex2f(-0.16f,-0.29f);
    glVertex2f(0.04f,-0.29f);
    glVertex2f(0.02f,-0.20f);
    glVertex2f(-0.16f,-0.20f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.13f,-0.27f);
    glVertex2f(-0.10f,-0.27f);
    glVertex2f(-0.10f,-0.22f);
    glVertex2f(-0.13f,-0.22f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.07f,-0.27f);
    glVertex2f(-0.04f,-0.27f);
    glVertex2f(-0.04f,-0.22f);
    glVertex2f(-0.07f,-0.22f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(49,44,51);
	glVertex2f(-0.01f,-0.27f);
    glVertex2f(0.02f,-0.27f);
    glVertex2f(0.02f,-0.22f);
    glVertex2f(-0.01f,-0.22f);
	glEnd();



glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(49,44,51);
	glVertex2f(-0.542f,-0.28f);
    glVertex2f(-0.51f,-0.21f);
	glEnd();
}

void car1(){


glBegin(GL_POLYGON);
	glBegin(GL_POLYGON);
    glColor3ub(213, 32, 39);
    glVertex2f(0.10f,-0.40f);
    glVertex2f(0.104f,-0.38f);
    glVertex2f(0.10f,-0.35f);
    glVertex2f(0.07f,-0.35f);
    glVertex2f(0.02f,-0.30f);
    glVertex2f(-0.03f,-0.30f);
    glVertex2f(-0.06f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glVertex2f(-0.08f,-0.40f);
glEnd();

    int i;         //Wheel

	GLfloat x=-0.04f; GLfloat y=-0.40f; GLfloat radius =.02f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

       //Wheel

	GLfloat p=0.06f; GLfloat q=-0.40f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON); //car1
    glColor3ub(36, 40, 43);

    glVertex2f(0.06f,-0.35f);
    glVertex2f(0.02f,-0.31f);
    glVertex2f(-0.028f,-0.31f);
    glVertex2f(-0.05f,-0.35f);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);

    glColor3ub(213, 32, 39);

    glVertex2f(0.01f,-0.31f);
    glVertex2f(0.01f,-0.35f);
glEnd();
}

void car2(){


glBegin(GL_POLYGON);
	glBegin(GL_POLYGON);
    glColor3ub(0, 114, 54);
    glVertex2f(0.50f,-0.41f);
    glVertex2f(0.504f,-0.39f);
    glVertex2f(0.50f,-0.36f);
    glVertex2f(0.47f,-0.36f);
    glVertex2f(0.42f,-0.31f);
    glVertex2f(0.37f,-0.31f);
    glVertex2f(0.34f,-0.36f);
    glVertex2f(0.32f,-0.36f);
    glVertex2f(0.32f,-0.41f);
glEnd();

    int i;         //Wheel

	GLfloat x=0.36f; GLfloat y=-0.41f; GLfloat radius =.02f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

       //Wheel

	GLfloat p=0.46f; GLfloat q=-0.41f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON); //car2
    glColor3ub(36, 40, 43);

    glVertex2f(0.46f,-0.36f);
    glVertex2f(0.42f,-0.32f);
    glVertex2f(0.372,-0.32f);
    glVertex2f(0.35f,-0.36f);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);

    glColor3ub(0, 114, 54);

    glVertex2f(0.41f,-0.32f);
    glVertex2f(0.41f,-0.36f);
glEnd();
}

void car3(){


glBegin(GL_POLYGON);
	glBegin(GL_POLYGON); //Front road
    glColor3ub(43, 62, 154);
    glVertex2f(0.10f,-0.40f);
    glVertex2f(0.104f,-0.38f);
    glVertex2f(0.10f,-0.35f);
    glVertex2f(0.07f,-0.35f);
    glVertex2f(0.02f,-0.30f);
    glVertex2f(-0.03f,-0.30f);
    glVertex2f(-0.06f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glVertex2f(-0.08f,-0.40f);
glEnd();

    int i;         //Wheel

	GLfloat x=-0.04f; GLfloat y=-0.40f; GLfloat radius =.02f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

       //Wheel

	GLfloat p=0.06f; GLfloat q=-0.40f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(36, 40, 43);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(36, 40, 43);

    glVertex2f(0.06f,-0.35f);
    glVertex2f(0.02f,-0.31f);
    glVertex2f(-0.028f,-0.31f);
    glVertex2f(-0.05f,-0.35f);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);

     glColor3ub(43, 62, 154);

    glVertex2f(0.01f,-0.31f);
    glVertex2f(0.01f,-0.35f);
glEnd();
}















void minibus() {

glBegin(GL_POLYGON); //car2
    glColor3ub(253, 173, 22);

    glVertex2f(0.60f,-0.50f);
    glVertex2f(0.85f,-0.50f);
    glVertex2f(0.85f,-0.35f);
    glVertex2f(0.65f,-0.35f);
    glVertex2f(0.63f,-0.42f);
    glVertex2f(0.60f,-0.42f);
    glVertex2f(0.594f,-0.46f);
glEnd();

glBegin(GL_POLYGON); //car2
    glColor3ub(71, 71, 71);


    glVertex2f(0.65f,-0.35f);
    glVertex2f(0.65f,-0.42f);
    glVertex2f(0.62f,-0.42f);

glEnd();

glBegin(GL_POLYGON); //car2
    glColor3ub(71, 71, 71);


    glVertex2f(0.67f,-0.38f);
    glVertex2f(0.70f,-0.38f);
    glVertex2f(0.70f,-0.50f);
    glVertex2f(0.67f,-0.50f);

glEnd();

glBegin(GL_POLYGON); //window
    glColor3ub(71, 71, 71);


    glVertex2f(0.72f,-0.40f);
    glVertex2f(0.83f,-0.40f);
    glVertex2f(0.83f,-0.45f);
    glVertex2f(0.72f,-0.45f);

glEnd();

glLineWidth(2);

glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.81f,-0.40f);
    glVertex2f(0.81f,-0.45f);


glEnd();

glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.75f,-0.40f);
    glVertex2f(0.75f,-0.45f);


glEnd();

glBegin(GL_LINES); //window
    glColor3ub(253, 173, 22);


    glVertex2f(0.78f,-0.40f);
    glVertex2f(0.78f,-0.45f);


glEnd();



int i;         //Wheel

	GLfloat x=0.635f; GLfloat y=-0.50f; GLfloat radius =.025f;
	int triangleAmount = 100;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(71, 71, 71);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat p=0.80f; GLfloat q=-0.50f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(71, 71, 71);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void minibus2() {

glBegin(GL_POLYGON);
    glColor3ub(2, 168, 75);

    glVertex2f(0.30f,-0.50f);
    glVertex2f(0.55f,-0.50f);
    glVertex2f(0.55f,-0.35f);
    glVertex2f(0.35f,-0.35f);
    glVertex2f(0.33f,-0.42f);
    glVertex2f(0.30f,-0.42f);
    glVertex2f(0.294f,-0.46f);
glEnd();

glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);


    glVertex2f(0.35f,-0.35f);
    glVertex2f(0.35f,-0.42f);
    glVertex2f(0.32f,-0.42f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);


    glVertex2f(0.37f,-0.38f);
    glVertex2f(0.40f,-0.38f);
    glVertex2f(0.40f,-0.50f);
    glVertex2f(0.37f,-0.50f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);


    glVertex2f(0.42f,-0.40f);
    glVertex2f(0.53f,-0.40f);
    glVertex2f(0.53f,-0.45f);
    glVertex2f(0.42f,-0.45f);

glEnd();

glLineWidth(2);

glBegin(GL_LINES);
     glColor3ub(2, 168, 75);


    glVertex2f(0.51f,-0.40f);
    glVertex2f(0.51f,-0.45f);


glEnd();

glBegin(GL_LINES);
   glColor3ub(2, 168, 75);


    glVertex2f(0.45f,-0.40f);
    glVertex2f(0.45f,-0.45f);


glEnd();

glBegin(GL_LINES); //window
     glColor3ub(2, 168, 75);


    glVertex2f(0.48f,-0.40f);
    glVertex2f(0.48f,-0.45f);


glEnd();



int i;         //Wheel

	GLfloat x=0.335f; GLfloat y=-0.50f; GLfloat radius =.025f;
	int triangleAmount = 20;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(71, 71, 71);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat p=0.50f; GLfloat q=-0.50f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(71, 71, 71);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}



void tree1() {

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
glEnd();


glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

glEnd();

int i;

	GLfloat x=-0.775f; GLfloat y=-0.01f; GLfloat radius =.06f;
	int triangleAmount = 20;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-0.725f; GLfloat y1=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x2=-0.825f; GLfloat y2=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x3=-0.835f; GLfloat y3=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-0.715f; GLfloat y4=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=-0.705f; GLfloat y5=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x6=-0.845f; GLfloat y6=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x7=-0.835f; GLfloat y7=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-0.715f; GLfloat y8=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x9=-0.745f; GLfloat y9=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x10=-0.805; GLfloat y10=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}



void tree2() {

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
glEnd();


glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

glEnd();

int i;

	GLfloat x=-0.775f; GLfloat y=-0.01f; GLfloat radius =.06f;
	int triangleAmount = 20;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-0.725f; GLfloat y1=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x2=-0.825f; GLfloat y2=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x3=-0.835f; GLfloat y3=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-0.715f; GLfloat y4=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=-0.705f; GLfloat y5=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x6=-0.845f; GLfloat y6=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x7=-0.835f; GLfloat y7=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-0.715f; GLfloat y8=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x9=-0.745f; GLfloat y9=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x10=-0.805; GLfloat y10=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}


void tree3() {

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
glEnd();


glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

glEnd();

int i;

	GLfloat x=-0.775f; GLfloat y=-0.01f; GLfloat radius =.06f;
	int triangleAmount = 20;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-0.725f; GLfloat y1=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x2=-0.825f; GLfloat y2=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x3=-0.835f; GLfloat y3=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-0.715f; GLfloat y4=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=-0.705f; GLfloat y5=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x6=-0.845f; GLfloat y6=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x7=-0.835f; GLfloat y7=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-0.715f; GLfloat y8=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x9=-0.745f; GLfloat y9=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x10=-0.805; GLfloat y10=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}



void tree4() {

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.83f,-0.34f);
    glVertex2f(-0.80f,-0.31f);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.76f,-0.31f);
    glVertex2f(-0.72f,-0.35f);
    glVertex2f(-0.75f,-0.28f);
glEnd();


glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.80f,-0.28f);
    glVertex2f(-0.75f,-0.28f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.80f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);

    glVertex2f(-0.785f,-0.10f);
    glVertex2f(-0.765f,-0.10f);
    glVertex2f(-0.765f,-0.06f);
    glVertex2f(-0.785f,-0.06f);


glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.75f,-0.07f);
    glVertex2f(-0.73f,-0.05f);
    glVertex2f(-0.75f,-0.04f);
    glVertex2f(-0.765f,-0.10f);

glEnd();

glBegin(GL_POLYGON);
    glColor3ub(131, 63, 24);
    glVertex2f(-0.80f,-0.10f);
    glVertex2f(-0.80f,-0.07f);

    glVertex2f(-0.82f,-0.05f);
    glVertex2f(-0.80f,-0.04f);

    glVertex2f(-0.785f,-0.10f);

glEnd();

int i;

	GLfloat x=-0.775f; GLfloat y=-0.01f; GLfloat radius =.06f;
	int triangleAmount = 20;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-0.725f; GLfloat y1=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x2=-0.825f; GLfloat y2=-0.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x3=-0.835f; GLfloat y3=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-0.715f; GLfloat y4=-0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=-0.705f; GLfloat y5=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x6=-0.845f; GLfloat y6=0.02f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x7=-0.835f; GLfloat y7=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-0.715f; GLfloat y8=0.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x9=-0.745f; GLfloat y9=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x10=-0.805; GLfloat y10=0.08f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(130, 193, 76);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}


void jeep1() {

glBegin(GL_POLYGON); //jeep
    glColor3ub(194, 37, 44);
    glVertex2f(0.60f,-0.52f);
    glVertex2f(0.80f,-0.52f);
    glVertex2f(0.78f,-0.37f);
    glVertex2f(0.67f,-0.37f);
    glVertex2f(0.64f,-0.44f);
    glVertex2f(0.60f,-0.46f);
    glVertex2f(0.595f,-0.485f);
glEnd();


glBegin(GL_POLYGON); //jeep
    glColor3ub(174, 209, 228);

    glVertex2f(0.665f,-0.38f);
    glVertex2f(0.635f,-0.44f);

    glVertex2f(0.78f,-0.44f);
    glVertex2f(0.77f,-0.38f);

glEnd();

glLineWidth(8);
glBegin(GL_LINES); //jeep
    glColor3ub(153, 0, 42);
glVertex2f(0.60f,-0.51f);
glVertex2f(0.798f,-0.51f);

glEnd();


glBegin(GL_LINES); //jeep
    glColor3ub(194, 37, 44);
    glVertex2f(0.68f,-0.38f);
    glVertex2f(0.68f,-0.44f);

glEnd();

glBegin(GL_LINES); //jeep
    glColor3ub(194, 37, 44);
    glVertex2f(0.735f,-0.38f);
    glVertex2f(0.735f,-0.44f);

glEnd();

glBegin(GL_POLYGON); //jeep
   glColor3ub(61, 50, 54);
    glVertex2f(0.794f,-0.480f);

    glVertex2f(0.785f,-0.41f);
    glVertex2f(0.79f,-0.405f);
    glVertex2f(0.80f,-0.408f);
    glVertex2f(0.809f,-0.472f);
    glVertex2f(0.80f,-0.481f);


glEnd();






int i;         //Wheel

	GLfloat x=0.64f; GLfloat y=-0.52f; GLfloat radius =.025f;
	int triangleAmount = 100;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(61, 50, 54);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat p=0.765f; GLfloat q=-0.52f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(61, 50, 54);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


void jeep2() {

glBegin(GL_POLYGON); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.60f,-0.52f);
    glVertex2f(0.80f,-0.52f);
    glVertex2f(0.78f,-0.37f);
    glVertex2f(0.67f,-0.37f);
    glVertex2f(0.64f,-0.44f);
    glVertex2f(0.60f,-0.46f);
    glVertex2f(0.595f,-0.485f);
glEnd();


glBegin(GL_POLYGON); //jeep
    glColor3ub(174, 209, 228);

    glVertex2f(0.665f,-0.38f);
    glVertex2f(0.635f,-0.44f);

    glVertex2f(0.78f,-0.44f);
    glVertex2f(0.77f,-0.38f);

glEnd();

glLineWidth(8);
glBegin(GL_LINES); //jeep
    glColor3ub(36, 0, 117);
glVertex2f(0.60f,-0.51f);
glVertex2f(0.798f,-0.51f);

glEnd();


glBegin(GL_LINES); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.68f,-0.38f);
    glVertex2f(0.68f,-0.44f);

glEnd();

glBegin(GL_LINES); //jeep
    glColor3ub(36, 57, 178);
    glVertex2f(0.735f,-0.38f);
    glVertex2f(0.735f,-0.44f);

glEnd();

glBegin(GL_POLYGON); //jeep
   glColor3ub(61, 50, 54);
    glVertex2f(0.794f,-0.480f);

    glVertex2f(0.785f,-0.41f);
    glVertex2f(0.79f,-0.405f);
    glVertex2f(0.80f,-0.408f);
    glVertex2f(0.809f,-0.472f);
    glVertex2f(0.80f,-0.481f);


glEnd();






int i;         //Wheel

	GLfloat x=0.64f; GLfloat y=-0.52f; GLfloat radius =.025f;
	int triangleAmount = 100;
     double twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(61, 50, 54);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat p=0.765f; GLfloat q=-0.52f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(61, 50, 54);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void jhaugass1()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}





//school jhawgass

void jhaugas5(){
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();


}










//sCHOOL.////////////////////SCHOOL//////////////////SCHOOL//////

void school(){

    glBegin(GL_POLYGON);
    glColor3ub(153, 70, 0);

    glVertex2f(0.00f,0.04f);
    glVertex2f(0.30f,0.04f);

    glVertex2f(0.30f,0.12f);
    glVertex2f(0.00f,0.12f);

glEnd();


  glBegin(GL_POLYGON);
   glColor3ub(102, 0, 0);

    glVertex2f(-0.02f,0.12f);
    glVertex2f(0.32f,0.12f);
    glVertex2d(.28f,.16f);
    glVertex2d(.02f,.16f);


glEnd();

glBegin(GL_POLYGON);
    glColor3ub(153, 70, 0);
    glVertex2d(.02f,.16f);
    glVertex2d(.28f,.16f);

    glVertex2d(.28f,.24f);
    glVertex2d(.02f,.24f);
glEnd();

glBegin(GL_POLYGON);
     glColor3ub(102, 0, 0);

    glVertex2d(.00f,.24f);
    glVertex2d(.30f,.24f);

    glVertex2d(.26f,.28f);
    glVertex2d(.04f,.28f);
glEnd();

//window 1

glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.03f,.09f);
    glVertex2d(.07f,.09f);

    glVertex2d(.07f,.12f);
    glVertex2d(.03f,.12f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(.04f,.10f);
    glVertex2d(.06f,.10f);

    glVertex2d(.06f,.12f);
    glVertex2d(.04f,.12f);
glEnd();

//window 2
glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.13f,.09f);
    glVertex2d(.17f,.09f);

    glVertex2d(.17f,.12f);
    glVertex2d(.13f,.12f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(.14f,.10f);
    glVertex2d(.16f,.10f);

    glVertex2d(.16f,.12f);
    glVertex2d(.14f,.12f);
glEnd();

//window 3

glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.23f,.09f);
    glVertex2d(.27f,.09f);

    glVertex2d(.27f,.12f);
    glVertex2d(.23f,.12f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(0.24f,0.10f);
    glVertex2d(0.26f,0.10f);

    glVertex2d(0.26f,0.12f);
    glVertex2d(0.24f,0.12f);

glEnd();

//2nd floor windows.............

//window 1
glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.03f,.21f);
    glVertex2d(.07f,.21f);

    glVertex2d(.07f,.24f);
    glVertex2d(.03f,.24f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(.04f,.22f);
    glVertex2d(.06f,.22f);

    glVertex2d(.06f,.24f);
    glVertex2d(.04f,.24f);
glEnd();

//window 2
 glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.13f,.21f);
    glVertex2d(.17f,.21f);

    glVertex2d(.17f,.24f);
    glVertex2d(.13f,.24f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(.14f,.22f);
    glVertex2d(.16f,.22f);

    glVertex2d(.16f,.24f);
    glVertex2d(.14f,.24f);
glEnd();

//window 3

 glBegin(GL_POLYGON);

     glColor3ub(0, 0, 0);

    glVertex2d(.23f,.21f);
    glVertex2d(.27f,.21f);

    glVertex2d(.27f,.24f);
    glVertex2d(.23f,.24f);
glEnd();



glBegin(GL_POLYGON);

     glColor3ub(155, 255, 255);

    glVertex2d(.24f,.22f);
    glVertex2d(.26f,.22f);

    glVertex2d(.26f,.24f);
    glVertex2d(.24f,.24f);
glEnd();

//behind rood

 glBegin(GL_POLYGON);
    glColor3ub(192,192,192);

    glVertex2f(-0.05f,0.04f);
    glVertex2f(0.40f,0.04f);

    glVertex2f(0.35f,-.05f);
    glVertex2f(-.10f,-.05f);

glEnd();



}



void jhaugass2()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}


void jhaugass3()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}


void jhaugass4()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}

void jhaugass5()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}
void jhaugass6()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}

void jhaugass7()
{
  glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

glEnd();

 glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


glEnd();

glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


glEnd();



glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


glEnd();

}



void house1(){

     glBegin(GL_POLYGON);
    glColor3ub(0,102, 204);

    glVertex2f(0.00f,0.00f);
    glVertex2f(0.10f,0.00f);

    glVertex2f(0.10f,0.08f);
    glVertex2f(0.00f,0.08f);

glEnd();


  glBegin(GL_POLYGON);
   glColor3ub(190, 36, 3);

    glVertex2f(-0.02f,0.08f);
    glVertex2f(0.12f,0.08f);
    glVertex2d(.09f,.14f);
    glVertex2d(.01f,.14f);


glEnd();

   glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2f(0.04f,0.00f);
    glVertex2f(0.07f,0.00f);

    glVertex2f(0.07f,0.05f);
    glVertex2f(0.04f,0.05f);

glEnd();



}

void house2()
{
    glBegin(GL_POLYGON);
    glColor3ub(5, 113, 99);

    glVertex2f(0.00f,0.00f);
    glVertex2f(0.15f,0.00f);

    glVertex2f(0.15f,0.20f);
    glVertex2f(0.00f,0.20f);

glEnd();


  glBegin(GL_TRIANGLE_FAN);
   glColor3ub(15, 2, 67 );

    glVertex2f(-0.02f,0.20f);

    glVertex2f(0.17f,0.20f);
    glVertex2d(.08f,.35f);




glEnd();

   glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2f(0.03f,0.00f);
    glVertex2f(0.06f,0.00f);

    glVertex2f(0.06f,0.05f);
    glVertex2f(0.03f,0.05f);

glEnd();



   glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2f(0.10f,0.00f);
    glVertex2f(0.13f,0.00f);

    glVertex2f(0.13f,0.05f);
    glVertex2f(0.10f,0.05f);

glEnd();



 glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2f(0.03f,0.13f);
    glVertex2f(0.06f,0.13f);

    glVertex2f(0.06f,0.18f);
    glVertex2f(0.03f,0.18f);

glEnd();



   glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2f(0.10f,0.13f);
    glVertex2f(0.13f,0.13f);

    glVertex2f(0.13f,0.18f);
    glVertex2f(0.10f,0.18f);

glEnd();



}







void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

glBegin(GL_POLYGON); // green background main
    glColor3ub(166, 210, 131);
    glVertex2f(-1.00f,-1.00f);
    glVertex2f(1.00f,-1.00f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(-1.00f,0.40f);

    glEnd();

glBegin(GL_POLYGON); // sky
    glColor3ub(152, 219, 248);
    glVertex2f(-1.00f,0.40f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(1.00f,1.00f);
    glVertex2f(-1.00f,1.00f);

    glEnd();


glBegin(GL_POLYGON); // behind mountain left
    glColor3ub(11, 131, 129);
    glVertex2f(-0.40f,0.55f);
    glVertex2f(-0.30f,0.60f);
    glVertex2f(-0.18f,0.55f);
    glVertex2f(-0.07f,0.57f);
    glVertex2f(0.03f,0.53f);
    glVertex2f(-0.12f,0.37f);
    glEnd();

    glBegin(GL_POLYGON); // behind mountain right
    glColor3ub(11, 131, 129);
    glVertex2f(0.50f,0.53f);
    glVertex2f(0.55f,0.58f);
    glVertex2f(0.68f,0.56f);
    glVertex2f(0.80f,0.60f);
    glVertex2f(0.95f,0.56f);
    glVertex2f(1.00f,0.56f);
    glVertex2f(1.00f,0.35f);
    glVertex2f(0.85f,0.35f);
    glEnd();


    glBegin(GL_POLYGON); // road back 1
    glColor3ub(168, 169, 173);
    glVertex2f(-0.13f,0.40f);
    glVertex2f(-0.13f,0.38f);
    glVertex2f(-0.32f,0.31f);
    glVertex2f(-0.35f,0.33f);

glEnd();


glBegin(GL_POLYGON); // road back 2
    glColor3ub(168, 169, 173);
    glVertex2f(-0.32f,0.31f);
    glVertex2f(-0.29f,0.33f);
    glVertex2f(0.12f,0.20f);
    glVertex2f(0.00f,0.16f);
glEnd();

glBegin(GL_POLYGON); // road back 3
    glColor3ub(168, 169, 173);
    glVertex2f(0.12f,0.20f);
    glVertex2f(0.00f,0.20f);
    glVertex2f(-0.74f,-0.80f);
    glVertex2f(-0.49f,-0.81f);
glEnd();

glBegin(GL_POLYGON); // road back 4
    glColor3ub(168, 169, 173);
    glVertex2f(-0.74f,-0.80f);
    glVertex2f(-0.49f,-0.81f);
    glVertex2f(-0.40f,-1.00f);
    glVertex2f(-0.72f,-1.00f);
glEnd();


glLineWidth(2);
glBegin(GL_LINES); // road back 1 inside
    glColor3ub(129, 130, 134);
    glVertex2f(-0.13f,0.39f);
    glVertex2f(-0.313f,0.32f);

glEnd();

glBegin(GL_POLYGON); // road back 2 inside
   glColor3ub(129, 130, 134);
   glVertex2f(0.08f,0.19f);
    glVertex2f(0.05f,0.16f);
    glVertex2f(-0.31f,0.32f);
    glVertex2f(-0.31f,0.33f);
glEnd();

glBegin(GL_POLYGON); // road back 3 inside
    glColor3ub(129, 130, 134);
    glVertex2f(0.07f,0.19f);
    glVertex2f(0.03f,0.19f);
    glVertex2f(-0.66f,-0.80f);
    glVertex2f(-0.57f,-0.81f);
glEnd();

glBegin(GL_POLYGON); // road back 4 inside
    glColor3ub(129, 130, 134);
    glVertex2f(-0.66f,-0.80f);
    glVertex2f(-0.57f,-0.81f);
    glVertex2f(-0.50f,-1.00f);
    glVertex2f(-0.62f,-1.00f);
glEnd();











glBegin(GL_POLYGON); // river back 1
    glColor3ub(56, 180, 232);
    glVertex2f(-0.13f,0.37f);
    glVertex2f(-0.23f,0.34f);
    glVertex2f(-.23f,0.33f);
    glVertex2f(-0.13f,0.36f);


    glEnd();

    glBegin(GL_POLYGON); // river back 2
    glColor3ub(56, 180, 232);
    glVertex2f(-.23f,0.33f);
    glVertex2f(0.26f,0.25f);
    glVertex2f(0.26f,0.23f);
    glVertex2f(-0.22f,0.34f);



    glEnd();

glBegin(GL_POLYGON); // river back 3
    glColor3ub(56, 180, 232);
    glVertex2f(0.27f,0.25f);
    glVertex2f(0.15f,0.05f);
    glVertex2f(0.11f,0.05f);
    glVertex2f(0.24f,0.24f);



    glEnd();

glBegin(GL_POLYGON); // river back 4
    glColor3ub(56, 180, 232);
    glVertex2f(0.12f,0.05f);
    glVertex2f(0.38f,-0.08f);
    glVertex2f(0.42f,-0.03f);
    glVertex2f(0.15f,0.08f);



    glEnd();

glBegin(GL_POLYGON); // river back 5
    glColor3ub(56, 180, 232);
    glVertex2f(0.42f,-0.03f);
    glVertex2f(0.33f,-0.05f);
    glVertex2f(0.36f,-0.46f);
    glVertex2f(0.51f,-0.41f);




    glEnd();


    glBegin(GL_POLYGON); // green mountain left
    glColor3ub(36, 104, 65);
    glVertex2f(-1.00f,0.64f);
    glVertex2f(-0.85f,0.68f);
    glVertex2f(-0.55f,0.57f);
    glVertex2f(-0.45f,0.60f);
    glVertex2f(-0.00f,0.40f);
    glVertex2f(-0.45f,0.35f);
    glVertex2f(-0.48f,0.33f);
    glVertex2f(-0.50f,0.30f);
    glVertex2f(-1.00f,0.17f);

    glEnd();

glBegin(GL_POLYGON); // middle mountain
    glColor3ub(39, 178, 77);
    glVertex2f(-0.15f,0.35f);
    glVertex2f(0.05f,0.58f);
    glVertex2f(0.12f,0.55f);
    glVertex2f(0.29f,0.61f);
    glVertex2f(1.00f,0.35f);
    glVertex2f(0.20f,0.30f);


glEnd();


glBegin(GL_POLYGON); // right mountain
    glColor3ub(13, 121, 69);
    glVertex2f(0.48f,0.22f);
    glVertex2f(0.52f,0.18f);
    glVertex2f(0.60f,0.15f);
    glVertex2f(0.68f,0.16f);
    glVertex2f(0.72f,0.13f);
    glVertex2f(1.00f,0.09f);
    glVertex2f(1.00f,0.48f);
    glVertex2f(0.85f,0.46f);
    glVertex2f(0.70f,0.41f);





glEnd();





glBegin(GL_POLYGON); // river front

glColor3ub(56, 180, 232);
glVertex2f(1.00f,-0.30);
glVertex2f(0.90f,-0.29f);
glVertex2f(0.80f,-0.28f);
glVertex2f(0.70f,-0.38f);
glVertex2f(0.59f,-0.50f);
glVertex2f(0.51f,-0.53f);
glVertex2f(0.46f,-0.67f);
glVertex2f(0.40f,-0.78f);
glVertex2f(0.35f,-0.88f);
glVertex2f(0.26f,-0.84f);
glVertex2f(0.10f,-1.00f);
glVertex2f(1.00f,-1.00f);


glEnd();


glBegin(GL_POLYGON); // river back 6
    glColor3ub(56, 180, 232);
   glVertex2f(0.36f,-0.46f);
    glVertex2f(0.46f,-0.67f);
    glVertex2f(0.59f,-0.50f);
    glVertex2f(0.51f,-0.41f);








    glEnd();



int i;         //River curve 1

	GLfloat x=.82f; GLfloat y=-.31f; GLfloat radius =.04f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(56, 180, 232);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=.88f; GLfloat b=-.31f;  //River curve 2

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(56, 180, 232);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.94f; GLfloat d=-.31f;   //River curve 3

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(56, 180, 232);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=1.00f; GLfloat f=-.31f;  //River curve 4

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(56, 180, 232);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//school////////////////////////////////////////////////////////////////////////////////////////
       glPushMatrix();
     glTranslatef(-0.06f, -0.25f, 0.00f);
    school();
     glPopMatrix();
     //school jawgass

     glPushMatrix();
     glTranslatef(.80f, .70f, 0.00f);
     jhaugas5();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(1.20f, .75f, 0.00f);
     jhaugass7();
     glPopMatrix();

glPushMatrix();
     glTranslatef(1.16f, .70f, 0.00f);
     jhaugass6();
     glPopMatrix();



     //House////////////
     glPushMatrix();
     glTranslatef(.25f,.08f, 0.00f);
     house1();
     glPopMatrix();

     //House 2//////////
     glPushMatrix();
     glTranslatef(.55f,-.15f, 0.00f);
     house2();
     glPopMatrix();







    glPushMatrix();
    glTranslatef(-0.35f, 0.00f, 0.00f);
    glScalef(0.70f, 0.70f, 0.00f);
    tree1();
    glPopMatrix();

	glBegin(GL_POLYGON); //fly over
    glColor3ub(169, 170, 174);
    glVertex2f(-1.00f,-0.35f);
    glVertex2f(1.00f,-0.35f);
    glVertex2f(1.00f,-0.55f);
    glVertex2f(-1.00f,-0.55f);
    glEnd();


    glBegin(GL_POLYGON); //fly over  border
    glColor3ub(88, 86, 91);
    glVertex2f(-1.00f,-0.55f);
    glVertex2f(-1.00f,-0.56f);
    glVertex2f(1.00f,-0.56f);
    glVertex2f(1.00f,-0.55f);
    glEnd();

glBegin(GL_POLYGON); //metro rail border
    glColor3ub(158, 158, 160);
    glVertex2f(-1.00f,-0.35f);
    glVertex2f(1.00f,-0.35f);
    glVertex2f(1.00f,-0.38f);
    glVertex2f(-1.00f,-0.38f);
    glEnd();

    glLineWidth(2);
glBegin(GL_LINES); //metro rail line
    glColor3ub(72, 74, 71);
    glVertex2f(-1.00f,-0.37f);
    glVertex2f(1.00f,-0.37f);
     glEnd();

glBegin(GL_POLYGON); //road middle section
    glColor3ub(110, 157, 61);
    glVertex2f(-1.00f,-0.45f);
    glVertex2f(1.00f,-0.45f);
    glVertex2f(1.00f,-0.46f);
    glVertex2f(-1.00f,-0.46f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 1
    glColor3ub(168, 169, 173);
    glVertex2f(-0.85f,-0.56f);
    glVertex2f(-.78f,-0.56f);
    glVertex2f(-.78f,-0.76f);
    glVertex2f(-0.85f,-0.76f);
    glEnd();

glBegin(GL_POLYGON); //road piller 1a
    glColor3ub(95, 89, 95);
    glVertex2f(-.78f,-0.56f);
    glVertex2f(-.78f,-0.76f);
     glVertex2f(-.80f,-0.76f);
    glVertex2f(-.80f,-0.56f);
    glEnd();

 glBegin(GL_POLYGON); //road piller 2
    glColor3ub(168, 169, 173);
    glVertex2f(-0.32f,-0.56f);
    glVertex2f(-.25f,-0.56f);
    glVertex2f(-.25f,-0.76f);
    glVertex2f(-0.32f,-0.76f);
    glEnd();

glBegin(GL_POLYGON); //road piller 2a
    glColor3ub(95, 89, 95);
    glVertex2f(-.25f,-0.56f);
    glVertex2f(-.25f,-0.76f);
     glVertex2f(-.27f,-0.76f);
    glVertex2f(-.27f,-0.56f);
    glEnd();

    glBegin(GL_POLYGON); //road piller 3
    glColor3ub(168, 169, 173);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.24f,-0.56f);
    glVertex2f(0.24f,-0.76f);
    glVertex2f(0.18f,-0.76f);
    glEnd();

glBegin(GL_POLYGON); //road piller 3a
    glColor3ub(95, 89, 95);
    glVertex2f(0.24f,-0.56f);
    glVertex2f(0.24f,-0.76f);
     glVertex2f(0.26f,-0.76f);
    glVertex2f(0.26f,-0.56f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 4
    glColor3ub(168, 169, 173);
    glVertex2f(0.48f,-0.56f);
    glVertex2f(0.54f,-0.56f);
    glVertex2f(0.54f,-0.76f);
    glVertex2f(0.48f,-0.76f);
    glEnd();

glBegin(GL_POLYGON); //road piller 4a
    glColor3ub(95, 89, 95);
    glVertex2f(0.54f,-0.56f);
    glVertex2f(0.54f,-0.76f);
     glVertex2f(0.56f,-0.76f);
    glVertex2f(0.56f,-0.56f);
    glEnd();


    glBegin(GL_POLYGON); //road piller 5
    glColor3ub(168, 169, 173);
    glVertex2f(0.94f,-0.56f);
    glVertex2f(1.00f,-0.56f);
    glVertex2f(1.00f,-0.76f);
    glVertex2f(0.94f,-0.76f);
    glEnd();

glBegin(GL_POLYGON); //road piller 5a
    glColor3ub(95, 89, 95);
    glVertex2f(0.99f,-0.56f);
    glVertex2f(0.99f,-0.76f);
     glVertex2f(1.00f,-0.76f);
    glVertex2f(1.00f,-0.56f);
    glEnd();


    glPushMatrix();
    glTranslatef(1.45f, 0.05f, 0.00f);
 glScalef(0.70f, 0.70f, 0.00f);
    tree2();
    glPopMatrix();

 glPushMatrix(); //cloud
    glTranslatef(position2,0.0f, 0.0f);
    cloud1();
    cloud2();
    cloud3();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    bird();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    bullettrain();
    glPopMatrix();


glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    boat();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    car3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
    car1();
    glPopMatrix();

glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    car2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    minibus();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position8,0.0f, 0.0f);
    minibus2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.45f, -0.74f, 0.00f);
    tree3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.75f, -0.74f, 0.00f);
    tree4();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position9,0.0f, 0.0f);
    jeep1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position10,0.0f, 0.0f);
    jeep2();
    glPopMatrix();

       jhaugass1();
    glPushMatrix();
    glTranslatef(0.10f, 0.02f, 0.00f);
    jhaugass2();
    glPopMatrix();



glPushMatrix();
    glTranslatef(0.16f, 0.19f, 0.00f);
    jhaugass3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.02f, 0.20f, 0.00f);
    jhaugass4();
    glPopMatrix();






glFlush ();
}

//school





void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1, 1, -1, 1, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1280, 720);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutTimerFunc(100, boat, 0);
glutTimerFunc(100, cloud, 0);
glutTimerFunc(100, birdd, 0);
glutTimerFunc(100, bullettrain, 0);
glutTimerFunc(100, car3, 0);
glutTimerFunc(100, car1, 0);
glutTimerFunc(100, car2, 0);
glutTimerFunc(100, jeep1, 0);
glutTimerFunc(100, jeep2, 0);
glutTimerFunc(100, minibus, 0);
glutTimerFunc(100, minibus2, 0);


glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

