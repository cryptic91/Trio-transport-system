#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1151.0 , -700.0, 0.0, -1.0, 1.0); // pixel devide
  //gluOrtho2D(0.0,100.0,0.0,100.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void circle(GLfloat cx,GLfloat cy, GLfloat rx, GLfloat ry){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0;i<=100;i++){
        float angle=2.0f*3.1416*i/100;
        float x=rx*cosf(angle);
        float y=ry*sinf(angle);

        glVertex2f(x+cx,y+cy);
    }
    glEnd();
}

float trainX = 362.0f;

float shipX = 524.0f;

float planeX = 574.0f;


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);


   // --------------- full sky -----------

   glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
   glBegin(GL_POLYGON);

   glVertex2i(0, -284);
   glVertex2i(1151, -245);
   glVertex2i(1151, 0);
   glVertex2i(0, 0);

   glEnd();




   // sun


   //glColor3f( 1 ,0, 0);
   //circle(0, 0, 3, 3);
   //glEnd();







    // Green field
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(0, -284);
   glVertex2i(0, -494);
   glVertex2i(163, -437);
   glVertex2i(118, -425);
   glVertex2i(494, -312);
   glVertex2i(768, -257);
   glEnd();


    // Green field
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(477, -320);
   glVertex2i(618, -358);
   glVertex2i(1010, -393);
   glVertex2i(1067, -419);
   glVertex2i(1003, -439);
   glVertex2i(1151, -483);
   glVertex2i(1151, -245);
   glVertex2i(768, -237);
   glEnd();



   // Green mountain 1
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(0, -269);
   glVertex2i(0, -282);
   glVertex2i(189, -272);
   glVertex2i(90, -211);
   glEnd();



   // Green mountain 2
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(177, -273);
   glVertex2i(189, -252);
   glVertex2i(569, -260);
   glVertex2i(380, -171);
   glEnd();




   // Green mountain 3
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(499, -263);
   glVertex2i(772, -260);
   glVertex2i(644, -170);
   glEnd();




   // Green mountain 4
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(771, -234);
   glVertex2i(1076, -239);
   glVertex2i(927, -150);
   glEnd();


    // Green mountain 5
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(993, -255);
   glVertex2i(1151, -240);
   glVertex2i(1151, -178);
   glVertex2i(1099, -152);
   glEnd();



    // ---------River water----------

   glColor3f(0.2f, 0.2f, 1.0f);//Blue
   glBegin(GL_POLYGON);

   glVertex2i(0, -700);
   glVertex2i(1151, -700);
   glVertex2i(1151, -483);
   glVertex2i(1003, -439);
   glVertex2i(1067, -419);
   glVertex2i(1010, -393);
   glVertex2i(618, -358);
   glVertex2i(477, -320);
   glVertex2i(118, -425);
   glVertex2i(163, -437);
   glVertex2i(0, -494);

   glEnd();







     // ----------------- bridge road and piller ----------


   glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
   glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
   glColor3f(0.1f, 0.0f, 0.1f);//Dark Purple
   glColor3f(0.1f, 0.0f, 0.0f);//Brown
   glColor3f(0.4f, 0.9f, 0.9f);//cyan
   glColor3f(0.8f, 0.8f, 0.8f); // Very light grey color

   glBegin(GL_POLYGON);
   glVertex2i(0, -355);
   glVertex2i(1151, -355);
   glVertex2i(1151, -316);
   glVertex2i(0, -316);
   glEnd();


   //----under rail ciment
   glColor3f(0.5f, 0.5f, 0.5f); //gray
   glBegin(GL_POLYGON);
   glVertex2i(0, -355);
   glVertex2i(1151, -355);
   glVertex2i(1151, -340);
   glVertex2i(0, -340);
   glEnd();



    // bridge rail line draw

    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glBegin(GL_LINES);

    glVertex2f(0, -339);
    glVertex2f(1151, -339);

    glVertex2f(0, -340);
    glVertex2f(1151, -340);

    glVertex2f(0, -341);
    glVertex2f(1151, -341);

    glVertex2f(0, -316);
    glVertex2f(1151, -316);

    glVertex2f(0, -355);
    glVertex2f(1151, -355);

    glVertex2f(0, -356);
    glVertex2f(1151, -356);

    glEnd();




    // bridge piller basement left

    glColor3f(0.2f, 0.0f, 0.0f);//Brown
    glBegin(GL_POLYGON);
   glVertex2i(248, -488);
   glVertex2i(394, -488);
   glVertex2i(394, -450);
   glVertex2i(248, -450);
   glEnd();



    // bridge piller basement right

    glColor3f(0.2f, 0.0f, 0.0f);//Brown
    glBegin(GL_POLYGON);
   glVertex2i(732, -488);
   glVertex2i(878, -488);
   glVertex2i(878, -450);
   glVertex2i(732, -450);
   glEnd();


   // bridge stand line border draw left

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_LINES);

    glVertex2f(248, -488);
    glVertex2f(394, -488);

    glVertex2f(394, -488);
    glVertex2f(394, -450);

    glVertex2f(394, -450);
    glVertex2f(248, -450);

    glVertex2f(248, -450);
    glVertex2f(248, -488);

    glEnd();



    // bridge stand line border draw right

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_LINES);

    glVertex2f(732, -488);
    glVertex2f(878, -488);

    glVertex2f(878, -488);
    glVertex2f(878, -450);

    glVertex2f(878, -450);
    glVertex2f(732, -450);

    glVertex2f(732, -450);
    glVertex2f(732, -488);

    glEnd();







   // --------- left bridge wires before train ---------

   glColor3f(0.2f, 0.2f, 0.2f);//dark grey
    glBegin(GL_LINES);

    // .......... left

    glVertex2i(308, -156);
    glVertex2f(80, -316);

    glVertex2i(308, -156);
    glVertex2f(170, -316);

    glVertex2i(308, -156);
    glVertex2f(244, -316);

    // ........... right

    glVertex2i(326, -156);
    glVertex2f(400, -316);

    glVertex2i(326, -156);
    glVertex2f(466, -316);

    glVertex2i(326, -156);
    glVertex2f(570, -316);

    glEnd();




   // --------- right bridge wires before train ---------

    glColor3f(0.2f, 0.2f, 0.2f);//dark grey
    glBegin(GL_LINES);

    // .......... left

    glVertex2i(794, -156);
    glVertex2f(570, -316);

    glVertex2i(794, -156);
    glVertex2f(655, -316);

    glVertex2i(794, -156);
    glVertex2f(731, -316);

    // ........... right

    glVertex2i(810, -156);
    glVertex2f(877, -316);

    glVertex2i(810, -156);
    glVertex2f(952, -316);

    glVertex2i(810, -156);
    glVertex2f(1050, -316);

    glEnd();





    // ------------ Train start -------------


/*

    //  ......  bogie 1

   glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2i(0, -333);
   glVertex2i(86, -333);
   glVertex2i(86, -300);
   glVertex2i(0, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(10, -318);
   glVertex2i(26, -318);
   glVertex2i(26, -310);
   glVertex2i(10, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(60, -318);
   glVertex2i(76, -318);
   glVertex2i(76, -310);
   glVertex2i(60, -310);
   glEnd();



    // bogie 1 + bogie 2 connector

   glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
   glBegin(GL_POLYGON);
   glVertex2i(86, -326);
   glVertex2i(92, -326);
   glVertex2i(92, -320);
   glVertex2i(86, -320);
   glEnd();




    // bogie 2


    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2i(92, -333);
   glVertex2i(178, -333);
   glVertex2i(178, -300);
   glVertex2i(92, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(102, -318);
   glVertex2i(118, -318);
   glVertex2i(118, -310);
   glVertex2i(102, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(152, -318);
   glVertex2i(168, -318);
   glVertex2i(168, -310);
   glVertex2i(152, -310);
   glEnd();



    // bogie 2 + bogie 3 connector

   glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
   glBegin(GL_POLYGON);
   glVertex2i(178, -326);
   glVertex2i(184, -326);
   glVertex2i(184, -320);
   glVertex2i(178, -320);
   glEnd();



    // bogie 3


    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2i(184, -333);
   glVertex2i(270, -333);
   glVertex2i(270, -300);
   glVertex2i(184, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(194, -318);
   glVertex2i(210, -318);
   glVertex2i(210, -310);
   glVertex2i(194, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(244, -318);
   glVertex2i(260, -318);
   glVertex2i(260, -310);
   glVertex2i(244, -310);
   glEnd();



    // bogie 3 + bogie 4 connector

   glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
   glBegin(GL_POLYGON);
   glVertex2i(270, -326);
   glVertex2i(276, -326);
   glVertex2i(276, -320);
   glVertex2i(270, -320);
   glEnd();



    // bogie 4


    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2i(276, -333);
   glVertex2i(362, -333);
   glVertex2i(362, -300);
   glVertex2i(276, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(286, -318);
   glVertex2i(302, -318);
   glVertex2i(302, -310);
   glVertex2i(286, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2i(336, -318);
   glVertex2i(352, -318);
   glVertex2i(352, -310);
   glVertex2i(336, -310);
   glEnd();

*/


    if (trainX >= -1000) { // Change the end condition according to your needs
        trainX -= 0.1f; // Increment to move the train slowly from left to right
    } else {
        trainX = 1362.0f; // Reset the train's position to restart the movement
    }

    //  Bogie 1
    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
    glBegin(GL_POLYGON);
    glVertex2f(trainX - 362, -333);
    glVertex2f(trainX - 276, -333);
    glVertex2f(trainX - 276, -300);
    glVertex2f(trainX - 362, -300);
    glEnd();

    // Window 1
    glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
    glBegin(GL_POLYGON);
    glVertex2f(trainX - 352, -318);
    glVertex2f(trainX - 336, -318);
    glVertex2f(trainX - 336, -310);
    glVertex2f(trainX - 352, -310);
    glEnd();

    // Window 2
    glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
    glBegin(GL_POLYGON);
    glVertex2f(trainX - 302, -318);
    glVertex2f(trainX - 286, -318);
    glVertex2f(trainX - 286, -310);
    glVertex2f(trainX - 302, -310);
    glEnd();

    // Connector 1-2
    glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
    glBegin(GL_POLYGON);
    glVertex2f(trainX - 276, -326);
    glVertex2f(trainX - 270, -326);
    glVertex2f(trainX - 270, -320);
    glVertex2f(trainX - 276, -320);
    glEnd();

    // Bogie 2
    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
    glBegin(GL_POLYGON);
    glVertex2f(trainX - 270, -333);
    glVertex2f(trainX - 184, -333);
    glVertex2f(trainX - 184, -300);
    glVertex2f(trainX - 270, -300);
    glEnd();

    // coordinates for other bogies and windows here

    // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 260, -318);
   glVertex2f(trainX - 244, -318);
   glVertex2f(trainX - 244, -310);
   glVertex2f(trainX - 260, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 210, -318);
   glVertex2f(trainX - 194, -318);
   glVertex2f(trainX - 194, -310);
   glVertex2f(trainX - 210, -310);
   glEnd();



    // bogie 2 + bogie 3 connector

   glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 184, -326);
   glVertex2f(trainX - 178, -326);
   glVertex2f(trainX - 178, -320);
   glVertex2f(trainX - 184, -320);
   glEnd();



    // bogie 3


    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 178, -333);
   glVertex2f(trainX - 92, -333);
   glVertex2f(trainX - 92, -300);
   glVertex2f(trainX - 178, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 168, -318);
   glVertex2f(trainX - 152, -318);
   glVertex2f(trainX - 152, -310);
   glVertex2f(trainX - 168, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 118, -318);
   glVertex2f(trainX - 102, -318);
   glVertex2f(trainX - 102, -310);
   glVertex2f(trainX - 118, -310);
   glEnd();



    // bogie 3 + bogie 4 connector

   glColor3f(0.5f, 0.0f, 0.0f); // Dark red color
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 92, -326);
   glVertex2f(trainX - 86, -326);
   glVertex2f(trainX - 86, -320);
   glVertex2f(trainX - 92, -320);
   glEnd();



    // bogie 4


    glColor3f(1.0f, 0.2f, 0.2f); // Light red color
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 86, -333);
   glVertex2f(trainX - 0, -333);
   glVertex2f(trainX - 0, -300);
   glVertex2f(trainX - 86, -300);
   glEnd();

   // window 1

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 76, -318);
   glVertex2f(trainX - 60, -318);
   glVertex2f(trainX - 60, -310);
   glVertex2f(trainX - 76, -310);
   glEnd();

   // window 2

   glColor3f(1.0f, 0.9f, 0.9f); // Very light red close to white
   glBegin(GL_POLYGON);
   glVertex2f(trainX - 26, -318);
   glVertex2f(trainX - 10, -318);
   glVertex2f(trainX - 10, -310);
   glVertex2f(trainX - 26, -310);
   glEnd();

   glFlush();
   glutPostRedisplay();


    // ------------ Train end -------------





    // ---------------------- bridge piller start

    //  piller left

    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_POLYGON);
   glVertex2i(294, -450);
   glVertex2i(346, -450);
   glVertex2i(326, -156);
   glVertex2i(308, -156);
   glEnd();



   //  piller right

    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_POLYGON);
   glVertex2i(780, -450);
   glVertex2i(833, -450);
   glVertex2i(810, -156);
   glVertex2i(794, -156);
   glEnd();



    // --------------------- bridge piller end






    // --------- left bridge wires after train ---------

   glColor3f(0.2f, 0.2f, 0.2f);//dark grey
    glBegin(GL_LINES);

    // .......... left

    glVertex2i(308, -156);
    glVertex2f(15, -340);

    glVertex2i(308, -156);
    glVertex2f(133, -340);

    glVertex2i(308, -156);
    glVertex2f(216, -340);

    // ........... right

    glVertex2i(326, -156);
    glVertex2f(435, -340);

    glVertex2i(326, -156);
    glVertex2f(507, -340);

    glVertex2i(326, -156);
    glVertex2f(576, -340);

    glEnd();




   // --------- right bridge wires after train ---------

    glColor3f(0.2f, 0.2f, 0.2f);//dark grey
    glBegin(GL_LINES);

    // .......... left

    glVertex2i(794, -156);
    glVertex2f(576, -340);

    glVertex2i(794, -156);
    glVertex2f(660, -340);

    glVertex2i(794, -156);
    glVertex2f(740, -340);

    // ........... right

    glVertex2i(810, -156);
    glVertex2f(910, -340);

    glVertex2i(810, -156);
    glVertex2f(999, -340);

    glVertex2i(810, -156);
    glVertex2f(1121, -340);

    glEnd();






    // ----------- ship start --------------


/*
    glColor3f(0.6f, 0.6f, 0.6f); //gray
    glBegin(GL_POLYGON);
    glVertex2i(524, -606);
    glVertex2i(801, -606);
    glVertex2i(801, -584);
    glVertex2i(504, -584);
    glVertex2i(459, -573);
    glEnd();


    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_POLYGON);
    glVertex2i(504, -584);
    glVertex2i(801, -584);
    glVertex2i(792, -568);
    glVertex2i(496, -568);
    glVertex2i(459, -573);
    glEnd();


    //glColor3f(0.0f, 0.0f, 0.8f); // Medium blue color
    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);
    glVertex2i(557, -584);
    glVertex2i(744, -584);
    glVertex2i(744, -560);
    glVertex2i(731, -545);
    glVertex2i(549, -545);
    glVertex2i(549, -568);
    glEnd();


    // line draw

    glColor3f(0, 0, 0);  //black
    glBegin(GL_LINES);

    glVertex2i(549, -568);
    glVertex2f(549, -545);

    glVertex2f(549, -545);
    glVertex2f(557, -560);

    glVertex2f(557, -560);
    glVertex2f(557, -584);

    glVertex2f(557, -584);
    glVertex2i(549, -568);

    glVertex2f(557, -584);
    glVertex2f(744, -584);

    glVertex2f(744, -560);
    glVertex2f(557, -560);

    glVertex2f(744, -560);
    glVertex2f(731, -545);

    glVertex2f(731, -545);
    glVertex2f(549, -545);

    glEnd();

    // line end


    glColor3f(0.0f, 0.0f, 1.4f); // Medium blue color
    glBegin(GL_POLYGON);
    glVertex2i(622, -560);
    glVertex2i(712, -560);
    glVertex2i(700, -543);
    glVertex2i(640, -543);
    glVertex2i(628, -525);
    glVertex2i(608, -545);
    glEnd();


    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);
    glVertex2i(640, -543);
    glVertex2i(700, -543);
    glVertex2i(684, -525);
    glVertex2i(628, -525);
    glEnd();



    glColor3f(1, 1, 1);  //white
    glBegin(GL_LINES);

    glVertex2i(628, -525);
    glVertex2f(640, -543);

    glVertex2f(640, -543);
    glVertex2f(700, -543);

    glVertex2f(640, -543);
    glVertex2f(622, -560);

    // window

    glVertex2f(619, -575);
    glVertex2f(696, -575);

    glVertex2f(696, -575);
    glVertex2f(696, -566);

    glVertex2f(696, -566);
    glVertex2f(619, -566);

    glVertex2f(619, -566);
    glVertex2f(619, -575);

    glEnd();


*/


if (shipX >= -1000) { // Change the end condition according to your needs
        shipX -= 0.1f; // Increment to move the ship slowly from right to left
    } else {
        shipX = 1234.0f; // Reset the ship's position to restart the movement
    }

    // Ship code with updated X positions
    glColor3f(0.6f, 0.6f, 0.6f); //gray
    glBegin(GL_POLYGON);
    glVertex2f(shipX, -606);
    glVertex2f(shipX + 277, -606);
    glVertex2f(shipX + 277, -584);
    glVertex2f(shipX - 20, -584);
    glVertex2f(shipX - 65, -573);
    glEnd();

    glColor3f(0.4f, 0.4f, 0.4f); //gray
    glBegin(GL_POLYGON);
    glVertex2f(shipX - 20, -584);
    glVertex2f(shipX + 277, -584);
    glVertex2f(shipX + 268, -568);
    glVertex2f(shipX - 28, -568);
    glVertex2f(shipX - 65, -573);
    glEnd();

    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);
    glVertex2f(shipX + 33, -584);
    glVertex2f(shipX + 220, -584);
    glVertex2f(shipX + 220, -560);
    glVertex2f(shipX + 207, -545);
    glVertex2f(shipX + 25, -545);
    glVertex2f(shipX + 25, -568);
    glEnd();

    glColor3f(0, 0, 0);  //black
    glBegin(GL_LINES);
    glVertex2f(shipX + 25, -568);
    glVertex2f(shipX + 25, -545);

    glVertex2f(shipX + 25, -545);
    glVertex2f(shipX + 33, -560);

    glVertex2f(shipX + 33, -560);
    glVertex2f(shipX + 33, -584);

    glVertex2f(shipX + 33, -584);
    glVertex2f(shipX + 25, -568);

    glVertex2f(shipX + 33, -584);
    glVertex2f(shipX + 220, -584);

    glVertex2f(shipX + 220, -560);
    glVertex2f(shipX + 33, -560);

    glVertex2f(shipX + 220, -560);
    glVertex2f(shipX + 207, -545);

    glVertex2f(shipX + 207, -545);
    glVertex2f(shipX + 25, -545);

    //glVertex2f(shipX + 619, -575);
    //glVertex2f(shipX + 696, -575);

    //glVertex2f(shipX + 696, -575);
    //glVertex2f(shipX + 696, -566);

    //glVertex2f(shipX + 696, -566);
    //glVertex2f(shipX + 619, -566);

    //glVertex2f(shipX + 619, -566);
    //glVertex2f(shipX + 619, -575);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.4f); // Medium blue color
    glBegin(GL_POLYGON);
    glVertex2f(shipX + 94, -560);
    glVertex2f(shipX + 184, -560);
    glVertex2f(shipX + 172, -543);
    glVertex2f(shipX + 112, -543);
    glVertex2f(shipX + 100, -525);
    glVertex2f(shipX + 80, -545);
    glEnd();

    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);
    glVertex2f(shipX + 112, -543);
    glVertex2f(shipX + 172, -543);
    glVertex2f(shipX + 156, -525);
    glVertex2f(shipX + 100, -525);
    glEnd();

    glColor3f(1, 1, 1);  //white
    glBegin(GL_LINES);
    glVertex2f(shipX + 100, -525);
    glVertex2f(shipX + 112, -543);

    glVertex2f(shipX + 112, -543);
    glVertex2f(shipX + 172, -543);

    glVertex2f(shipX + 112, -543);
    glVertex2f(shipX + 94, -560);

    glVertex2f(shipX + 95, -575);
    glVertex2f(shipX + 172, -575);

    glVertex2f(shipX + 172, -575);
    glVertex2f(shipX + 172, -566);

    glVertex2f(shipX + 172, -566);
    glVertex2f(shipX + 95, -566);

    glVertex2f(shipX + 95, -566);
    glVertex2f(shipX + 95, -575);

    glEnd();

    glFlush();
    glutPostRedisplay();




    // ----------- ship end --------------



    // --------- plane start --------------

/*
    glColor3f(1.0f, 0.5f, 0.5f); // Light red color
    glColor3f(0.8f, 0.0f, 0.0f); // Medium red color
    glBegin(GL_POLYGON);


    glVertex2i(574, -93);
    glVertex2i(603, -105);
    glVertex2i(619, -105);
    glVertex2i(606, -93);
    glVertex2i(655, -73);
    glVertex2i(643, -73);
    glVertex2i(665, -50);
    glVertex2i(646, -50);
    glVertex2i(618, -73);
    glVertex2i(591, -73);
    glVertex2i(598, -66);
    glVertex2i(589, -66);
    glVertex2i(572, -73);
    glVertex2i(504, -73);
    glVertex2i(495, -80);
    glVertex2i(467, -88);
    glVertex2i(500, -93);

    glEnd();



    // window

    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);

    glVertex2i(495, -80);
    glVertex2i(517, -80);
    glVertex2i(525, -73);
    glVertex2i(504, -73);

    glEnd();



    // line draw


    glColor3f(1, 1, 1);  //white
    glBegin(GL_LINES);

    glVertex2i(504, -73);
    glVertex2f(655, -73);

    glVertex2f(551, -81);
    glVertex2f(585, -81);


    glVertex2f(551, -81);
    glVertex2f(603, -105);

    glVertex2f(603, -105);
    glVertex2f(619, -105);

    glVertex2f(619, -105);
    glVertex2f(585, -81);

    glEnd();

*/

    if (planeX >= -100) { // Change the end condition according to your needs
        planeX -= 0.1f; // Increment to move the plane slowly from right to left
    } else {
        planeX = 1234.0f; // Reset the plane's position to restart the movement
    }

    glColor3f(0.8f, 0.0f, 0.0f); // Light red color
    glBegin(GL_POLYGON);

    // Adjust the X coordinates based on the planeX variable
    glVertex2f(planeX, -93);
    glVertex2f(planeX + 29, -105);
    glVertex2f(planeX + 45, -105);
    glVertex2f(planeX + 32, -93);
    glVertex2f(planeX + 81, -73);
    glVertex2f(planeX + 69, -73);
    glVertex2f(planeX + 91, -50);
    glVertex2f(planeX + 72, -50);
    glVertex2f(planeX + 44, -73);
    glVertex2f(planeX + 17, -73);
    glVertex2f(planeX + 24, -66);
    glVertex2f(planeX + 15, -66);
    glVertex2f(planeX - 2, -73);
    glVertex2f(planeX - 70, -73);
    glVertex2f(planeX - 79, -80);
    glVertex2f(planeX - 107, -88);
    glVertex2f(planeX - 74, -93);

    glEnd();

    // Window
    glColor3f(0.5f, 0.5f, 1.0f); // Light blue color
    glBegin(GL_POLYGON);
    glVertex2f(planeX - 79, -80);
    glVertex2f(planeX - 57, -80);
    glVertex2f(planeX - 49, -73);
    glVertex2f(planeX - 70, -73);
    glEnd();

    // Line draw
    glColor3f(1, 1, 1);  // White
    glBegin(GL_LINES);
    glVertex2f(planeX - 70, -73);
    glVertex2f(planeX + 81, -73);

    glVertex2f(planeX + 23, -81);
    glVertex2f(planeX - 11, -81);

    glVertex2f(planeX - 23, -81);
    glVertex2f(planeX + 29, -105);

    glVertex2f(planeX + 29, -105);
    glVertex2f(planeX + 45, -105);

    glVertex2f(planeX + 45, -105);
    glVertex2f(planeX + 11, -81);

    glEnd();

    glFlush();
    glutPostRedisplay();

    // ------------ plane end ---------------











glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,750);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

