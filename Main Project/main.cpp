#include <windows.h>
#include <GL/glut.h>
#include<math.h>
GLfloat a=2,b=0,k=0,l=0,n=0,c=-5;
void animate(int value)
{
	a+=.02;	//sun position on y axis
    b-=.5; // plane position on x axis
    n+=.11; // boat position on y axis

    if(c<=-210.0)// car moving of run way
    c=-40.0;
    if(n>49) //boat reposition
    {
        n=0;
    }
    if(b<-120)
    {
        b=0;
    }
    if(n>14 && n<=22) //bridge opening
    {
        if(k<=7)
        {
           k=k+.07;
        }
        if(l<=7)
        {
           l=l+.07;
        }
    }
    if(n>39)  //bridge closing
    {
        if(k>=0)
        {
           k=k-.09;
        }
        if(l>=0)
        {
           l=l-.09;
        }
    }
    if(k<=0)
    {
       c-=.5;
    }

	if(a>=20.0)// moving of run way
    a=0.0;
	glutPostRedisplay();
	glutTimerFunc(100,animate,0);//delay
}
void car()
{
glPushMatrix();


glTranslatef(c,-55,0);
glScalef(5,5,0);

	glBegin(GL_POLYGON);                  //  car hood
		glColor3f(1.0,0.0,0.0);
		glVertex2f(18.0,10.50);
		glVertex2f(19.50,10.50);
		glVertex2f(19.50,11.50);
		glVertex2f(18.00,11.50);
	glEnd();


	glBegin(GL_POLYGON);                  //  car front
		glColor3f(0.0,0.0,0.0);
		glVertex2f(17.70,10.30);
		glVertex2f(18.00,10.50);
		glVertex2f(18.00,11.50);
		glVertex2f(17.70,11.30);
	glEnd();


	glBegin(GL_POLYGON);                  //  car left side
		glColor3f(0.0,0.0,0.0);
		glVertex2f(17.70,10.30);
		glVertex2f(19.30,10.30);
		glVertex2f(19.50,10.50);
		glVertex2f(18.00,10.50);
	glEnd();


    glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(18.20,10.80);
		glVertex2f(19.20,10.80);
		glVertex2f(19.20,10.80);
		glVertex2f(19.20,11.10);
		glVertex2f(19.20,11.10);             //hood carrier
		glVertex2f(18.20,11.10);
		glVertex2f(18.20,11.10);
		glVertex2f(18.20,10.80);
		glVertex2f(18.40,10.80);
		glVertex2f(18.40,11.10);
		glVertex2f(18.60,10.80);
		glVertex2f(18.60,11.10);
		glVertex2f(18.80,10.80);
		glVertex2f(18.80,11.10);
		glVertex2f(19.00,10.80);
		glVertex2f(19.00,11.10);
	glEnd();


	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(17.80,10.35);        //left head lamp
		glVertex2f(17.80,10.45);
	glEnd();


	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(17.80,11.25);        //right head lamp
		glVertex2f(17.80,11.35);
	glEnd();


	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(17.90,10.55);        //horn grill
		glVertex2f(17.90,11.25);
		glEnd();


	glBegin(GL_LINES);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(18.00,10.40);        //side window
		glVertex2f(19.28,10.40);
		glEnd();

glPopMatrix();
}
void boat()
{
    glPushMatrix();

    glTranslated(0,-29+n,0.0);
    glScalef(.6,.45,0);
     glColor3f(0.462, 0.192, 0.039);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,12.0);
    glVertex2f(-6.0,6.0);
    glVertex2f(-6.0,-6.0);
    glVertex2f(-3.0,-11.0);
    glVertex2f(3.0,-11.0);
    glVertex2f(6.0,-6.0);
    glVertex2f(6.0,6.0);
    glVertex2f(0.0,12.0);
    glEnd();

    glColor3f(0.717, 0.403, 0.219);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,10.0);
    glVertex2f(-4.0,4.0);
    glVertex2f(-4.0,-4.0);
    glVertex2f(-2.0,-10.0);
    glVertex2f(2.0,-10.0);
    glVertex2f(4.0,-4.0);
    glVertex2f(4.0,4.0);
    glVertex2f(0.0,10.0);
    glEnd();


     glColor3f(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(3.0,3.0);
     glVertex2f(-3.0,3.0);
     glVertex2f(-3.0,-3.0);
     glVertex2f(3.0,-3.0);
     glEnd();


     glColor3f(1,0,0);
glBegin(GL_QUADS);
     glVertex2f(3.0,2.0);
     glVertex2f(-3.0,2.0);
     glVertex2f(-3.0,1.0);
     glVertex2f(3.0,1.0);
     glEnd();


     glColor3f(1,0,0);
glBegin(GL_QUADS);
     glVertex2f(3.0,-1.0);
     glVertex2f(-3.0,-1.0);
     glVertex2f(-3.0,-2.0);
     glVertex2f(3.0,-2.0);
     glEnd();

     glColor3f(0,0,0);
glBegin(GL_TRIANGLES);
     glVertex2f(0.0,8.0);
     glVertex2f(-2.0,5.0);
     glVertex2f(2.0,5.0);
     glEnd();


     glColor3f(0,0,0);
glBegin(GL_QUADS);
     glVertex2f(2.0,-10.0);
     glVertex2f(-2.0,-10.0);
     glVertex2f(-3.0,-11.0);
     glVertex2f(3.0,-11.0);
     glEnd();


     glColor3f(0,0,0);
glBegin(GL_QUADS);
     glVertex2f(2.0,-7.0);
     glVertex2f(-2.0,-7.0);
     glVertex2f(-1.0,-9.0);
     glVertex2f(1.0,-9.0);
     glEnd();


      glColor3f(0,0,0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
     glVertex2f(-2.0,5.0);
     glVertex2f(-3.0,3.0);

    glEnd();


      glColor3f(0,0,0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
     glVertex2f(2.0,5.0);
     glVertex2f(3.0,3.0);

    glEnd();


      glColor3f(0,0,0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
     glVertex2f(-3.0,-3.0);
     glVertex2f(-2.0,-7.0);

    glEnd();


      glColor3f(0,0,0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
     glVertex2f(3.0,-3.0);
     glVertex2f(2.0,-7.0);

    glEnd();
    glPopMatrix();
}
void plane()
{
   glPushMatrix();
   glTranslated(b,0,0.0);
     glColor3f(1,1,1); //main body
glBegin(GL_QUADS);
glVertex2f(45.0,33.0);
glVertex2f(47.0,36.0);
glColor3f(.8,.9,.9);
glVertex2f(62.0,36.0);
glVertex2f(57.0,33.0);
glEnd();

 glColor3f(1,1,1); //back part
glBegin(GL_QUADS);
glVertex2f(57.0,36.0);
glVertex2f(61.0,40.0);
glColor3f(.8,.9,.9);
glVertex2f(63.0,40.0);
glVertex2f(61.0,36.0);
glEnd();

//flag square

 glColor3f(0.086, 0.694, 0.062); //back part
glBegin(GL_QUADS);
glVertex2f(59.5,37.2);
glVertex2f(59.5,38.5);
glVertex2f(61.5,38.5);
glVertex2f(61.5,37.2);
glEnd();

//flag circle
 glBegin(GL_POLYGON);
          GLfloat x=60.5, y=37.8, r=.3;
        glColor3f(0.921, 0.156, 0.098);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

 glColor3f(1,1,1); //middle wing
glBegin(GL_QUADS);
glVertex2f(49.0,34.0);
glVertex2f(52.0,34.0);
glColor3f(.8,.9,.9);
glVertex2f(54.0,30.0);
glVertex2f(53.0,29.0);
glEnd();

glColor3f(1,1,1); //middle wing up
glBegin(GL_QUADS);
glVertex2f(50.0,36.0);
glVertex2f(51.0,39.0);
glColor3f(.8,.9,.9);
glVertex2f(52,38.0);
glVertex2f(51.7,36.0);
glEnd();

glColor3f(0,0,0); //glass
glBegin(GL_QUADS);
glVertex2f(46.0,34.5);
glVertex2f(47.0,36.0);
glVertex2f(48,36.0);
glVertex2f(48,34.5);
glEnd();

glColor3f(0,0,0); //window
glPointSize(4);
glBegin(GL_POINTS);
glVertex2f(49.0,35.0);
glVertex2f(49.5,35.0);
glVertex2f(50.0,35.0);
glVertex2f(50.5,35.0);
glVertex2f(51.0,35.0);
glVertex2f(51.5,35.0);
glVertex2f(52.0,35.0);
glVertex2f(52.5,35.0);
glVertex2f(53.0,35.0);
glVertex2f(53.5,35.0);
glVertex2f(54.0,35.0);
glVertex2f(54.5,35.0);
glVertex2f(55.0,35.0);
glEnd( );

glPopMatrix();

}
void water()
{
    glColor3f(0.309, 0.556, 0.972);
glBegin(GL_QUADS);
glVertex2f(50.0,25.0);
glVertex2f(-50.0,25.0);
glColor3f(0.290, 0.807, 0.968);
glVertex2f(-50.0,-40.0);
glVertex2f(50.0,-40.0);
glEnd();
}
void path()
{
    glColor3f(0.627, 0.309, 0.109);
glBegin(GL_POLYGON);  //bamboo stand 1
glVertex2f(45.0,-20.0);
glVertex2f(47.0,-20.0);
glVertex2f(47.0,-25.0);
glVertex2f(46.0,-27.0);
glEnd();
    glColor3f(0.627, 0.309, 0.109);
glBegin(GL_POLYGON);  //bamboo stand 2
glVertex2f(42.0,-25.0);
glVertex2f(44.0,-25.0);
glVertex2f(44.0,-30.0);
glVertex2f(43.0,-32.0);
glEnd();
    glColor3f(0.627, 0.309, 0.109);
glBegin(GL_POLYGON);  //bamboo stand 3
glVertex2f(38.0,-33.0);
glVertex2f(40.0,-33.0);
glVertex2f(40.3,-38.0);
glVertex2f(39.0,-38.0);
glEnd();

     glColor3f(0.847, 0.819, 0.729);
glBegin(GL_TRIANGLES);
glVertex2f(38.0,-40.0);//bamboo pull
glVertex2f(50.0,-40.0);
glVertex2f(50.0,-15.0);
glEnd();

glColor3f(0, 0, 0);
glLineWidth(4.5);
glBegin(GL_LINES);
glVertex2f(40.0,-35.0);
glVertex2f(50.0,-35.0);
glVertex2f(42.0,-31.0);
glVertex2f(50.0,-31.0);
glVertex2f(44.0,-27.0);
glVertex2f(50.0,-27.0);
glVertex2f(46.0,-23.0);
glVertex2f(50.0,-23.0);
glEnd();

}
void soil()
{

    glColor3f(0.850, 0.760, 0.505);
glBegin(GL_QUADS);
glVertex2f(-40.0,-40.0);
glVertex2f(-35.0,-32.0);
glColor3f(0.980, 0.917, 0.741);
glVertex2f(50.0,-35.0);
glVertex2f(50.0,-40.0);
glEnd();
}
void table()
{
    //table
     glBegin(GL_POLYGON);
          GLfloat x=-41, y=-32, r=13;
        glColor3f(0.705, 0.537, 0.031);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

     //coconut 1
     glBegin(GL_POLYGON);
       x=-45, y=-30, r=3.5;
        glColor3f(0.078, 0.843, 0.082);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

     glBegin(GL_POLYGON);
       x=-45, y=-29, r=1.9;
        glColor3f(0.988, 0.913, 0.631);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

    glColor3f(1,1,1);
glLineWidth(10.5);
glBegin(GL_LINES);
glVertex2f(-45.0,-29.0);
glVertex2f(-45.0,-25.0);
glVertex2f(-45.0,-25.0);
glVertex2f(-43.0,-23.0);
glEnd();

    //coconut 2
     glBegin(GL_POLYGON);
       x=-36, y=-30, r=3.5;
        glColor3f(0.101, 0.819, 0.101);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

      glBegin(GL_POLYGON);
       x=-36, y=-29, r=1.9;
        glColor3f(0.988, 0.913, 0.631);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
    glEnd();

    glColor3f(1,1,1);
glLineWidth(10.5);
glBegin(GL_LINES);
glVertex2f(-36.0,-29.0);
glVertex2f(-36.0,-26.0);
glVertex2f(-36.0,-26.0);
glVertex2f(-37.0,-24.0);
glEnd();
}
void mountain()
{
//left side
 glColor3f(0.494, 0.854, 0.168);
glBegin(GL_QUADS);
glVertex2f(-43.0,26.0);
glVertex2f(-35.0,30.0);
 glColor3f(0.211, 0.631, 0.341);
glVertex2f(-20.0,21.0);
glVertex2f(-35.0,21.0);
glEnd();

   glColor3f(0.078, 0.560, 0.282);
glBegin(GL_QUADS);
glVertex2f(-50.0,29.0);
glVertex2f(-48.0,31.0);
glColor3f(0.160, 0.701, 0.309);
glVertex2f(-34.0,21.0);
glVertex2f(-50.0,21.0);
glEnd();
//right side
 glColor3f(0.494, 0.854, 0.168);
glBegin(GL_QUADS);
glVertex2f(43.0,26.0);
glVertex2f(35.0,30.0);
 glColor3f(0.211, 0.631, 0.341);
glVertex2f(20.0,21.0);
glVertex2f(35.0,21.0);
glEnd();

 glColor3f(0.078, 0.560, 0.282);
glBegin(GL_QUADS);
glVertex2f(50.0,29.0);
glVertex2f(48.0,31.0);
glColor3f(0.160, 0.701, 0.309);
glVertex2f(34.0,21.0);
glVertex2f(50.0,21.0);
glEnd();
}
void sky()
{

    glColor3f(0.333, 0.709, 0.964);
glBegin(GL_QUADS);
glVertex2f(-50.0,40.0);
glVertex2f(50.0,40.0);
glColor3f(0.960, 0.823, 0.639);
glVertex2f(50.0,25.0);
glVertex2f(-50.0,25.0);
glEnd();
}
void sun()
{

glPushMatrix();

         glBegin(GL_POLYGON);
        GLfloat x=0, y=20+a, r=3;
        glColor3f(0.988, 0.533, 0.113);
            for(float i=0; i<=7; i=i+.1)
            {
                glVertex3f(x+r*cos(i),y+r*sin(i),0);
            }
             glEnd();

glPopMatrix();

}
void Bridge()
{
glPushMatrix();
glTranslated(0,-3,0.0);
//right part of bridge
glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(20.0,10.0);
glVertex2f(50.0,10.0);
glVertex2f(50.0,9.0);
glVertex2f(20.0,9.0);
glEnd();

glColor3f(0.4, 0.4, .4);
glBegin(GL_QUADS);
glVertex2f(50.0,9.0);
glVertex2f(20.0,9.0);
glVertex2f(20.0,-3.0);
glVertex2f(50.0,-3.0);
glEnd();

glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(20.0,-3.0);
glVertex2f(20.0,-5.0);
glVertex2f(50.0,-5.0);
glVertex2f(50.0,-3.0);
glEnd();

//right divider
glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(47.0,4.0);
glVertex2f(39.0,4.0);
glVertex2f(39.0,2.0);
glVertex2f(47.0,2.0);
glEnd();

glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(35.0,4.0);
glVertex2f(27.0,4.0);
glVertex2f(27.0,2.0);
glVertex2f(35.0,2.0);
glEnd();

//left part of bridge
glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(-20.0,10.0);
glVertex2f(-50.0,10.0);
glVertex2f(-50.0,9.0);
glVertex2f(-20.0,9.0);
glEnd();

glColor3f(0.4, 0.4, .4);
glBegin(GL_QUADS);
glVertex2f(-50.0,9.0);
glVertex2f(-20.0,9.0);
glVertex2f(-20.0,-3.0);
glVertex2f(-50.0,-3.0);
glEnd();

glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(-20.0,-3.0);
glVertex2f(-20.0,-5.0);
glVertex2f(-50.0,-5.0);
glVertex2f(-50.0,-3.0);
glEnd();


//left divider
glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(-47.0,4.0);
glVertex2f(-39.0,4.0);
glVertex2f(-39.0,2.0);
glVertex2f(-47.0,2.0);
glEnd();

glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(-35.0,4.0);
glVertex2f(-27.0,4.0);
glVertex2f(-27.0,2.0);
glVertex2f(-35.0,2.0);
glEnd();

//left part of open Bridge
glPushMatrix();

glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(-19.95,10.0);
glVertex2f(-19.95,9.0);
glVertex2f(-.1-k,9.0+l);
glVertex2f(-.1-k,10.0+l);
glEnd();

glColor3f(0.4, 0.4, .4);
glBegin(GL_QUADS);
glVertex2f(-19.9,9.0);
glVertex2f(-.1-k,9.0+l);
glVertex2f(-.1-k,-3.0+l);
glVertex2f(-19.9,-3.0);
glEnd();

glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(-19.95,-3.0);
glVertex2f(-.1-k,-3.0+l);
glVertex2f(-.1-k,-4.5+l);
glVertex2f(-19.95,-4.5);
glEnd();


//left open divider
glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(-15.0,4.0);
glVertex2f(-5.0-k,4.0+l);
glVertex2f(-5.0-k,2.0+l);
glVertex2f(-15.0,2.0);
glEnd();

//right part of open Bridge


glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(19.95,10.0);
glVertex2f(19.95,9.0);
glVertex2f(.1+k,9.0+l);
glVertex2f(.1+k,10.0+l);
glEnd();

glColor3f(0.4, 0.4, .4);
glBegin(GL_QUADS);
glVertex2f(19.9,9.0);
glVertex2f(.1+k,9.0+l);
glVertex2f(.1+k,-3.0+l);
glVertex2f(19.9,-3.0);
glEnd();

glColor3f(0.2, 0.3, .4);
glBegin(GL_QUADS);
glVertex2f(19.95,-3.0);
glVertex2f(.1+k,-3.0+l);
glVertex2f(.1+k,-4.5+l);
glVertex2f(19.95,-4.5);
glEnd();

//right open divider
glColor3f(1, 1, 1);
glBegin(GL_QUADS);
glVertex2f(15.0,4.0);
glVertex2f(5.0+k,4.0+l);
glVertex2f(5.0+k,2.0+l);
glVertex2f(15.0,2.0);
glEnd();
glPopMatrix();

//right pole
glColor3f(0.2, 0.2, .3);
glBegin(GL_QUADS);
glVertex2f(27,-5.0);
glVertex2f(36,-5.0);
glColor3f(0.364, 0.364, 0.556);
glVertex2f(36,-13.0);
glVertex2f(27,-13.0);
glEnd();

//left pole
glColor3f(0.2, 0.2, .3);
glBegin(GL_QUADS);
glVertex2f(-27,-5.0);
glVertex2f(-36,-5.0);
glColor3f(0.364, 0.364, 0.556);
glVertex2f(-36,-13.0);
glVertex2f(-27,-13.0);
glEnd();

glPopMatrix();

}


void Draw()
{
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     sky();
     sun();
     plane();
     water();
     Bridge();
     soil();
     path();
     table();
     mountain();
     boat();
     car();

  glFlush();

}
void Initialize()
{
glClearColor(.5,.7, 1, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-50.0, 50.0, -40.0, 40.0, -50.0, 50.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1380, 760);
glutInitWindowPosition(0, 0);
glutCreateWindow("Final project");
Initialize();
glutDisplayFunc(Draw);
glutTimerFunc(100,animate,0);
glutMainLoop();
return 0;
}
