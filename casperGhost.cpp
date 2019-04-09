#include<math.h>
#include<iostream>
#include <unistd.h> 
#include <GL/glut.h>
#include <stdlib.h>

float xx=00.0,yy=0,state=1,xxt=0,yyt=0,statel=1;
float c1=-80,c2=-30,c3=0,c4=-70,c5=-20,c6=0,c7=10;
void timer(int);
void init()
{
    glClearColor(0.313, 0.509, 0.929,1.0f);
    gluOrtho2D(-13,107,-15,105);

}
void mouse(int button, int state, int x, int y){
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
        glutTimerFunc(0,timer,0);
    }
    if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
        glClearColor(1.0, 0.0, 0.0,1.0f);
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*9+5+c1,sin(2*3.14159*i/1000.0)*9+80);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*6+-3+c1,sin(2*3.14159*i/1000.0)*6+70);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*7+3+c1,sin(2*3.14159*i/1000.0)*7+70);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*6+13+c1,sin(2*3.14159*i/1000.0)*6+70);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*3+-3+c1,sin(2*3.14159*i/1000.0)*3+87);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*2+15+c1,sin(2*3.14159*i/1000.0)*2+77);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*4+20+c1,sin(2*3.14159*i/1000.0)*4+69);
        glEnd();
        glBegin(GL_POLYGON);
        for(int i=0;i<1000;++i)
        glVertex2f(cos(2*3.14159*i/1000.0)*3+25+c1,sin(2*3.14159*i/1000.0)*3+68);
        glEnd();
            // if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
            //     glClearColor(0.313, 0.509, 0.929,1.0f);
    }
    if(button==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN){
         exit(0);
        
    }
}
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    ///body
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(58,10);
    glVertex2f(57,9);
    glVertex2f(55,7);
    glVertex2f(53,5.5);
    glVertex2f(51.2,4.3);
    glVertex2f(49.2,3);
    glVertex2f(47,2);
    glVertex2f(46,1.6);
    glVertex2f(45,1.2);
    glVertex2f(43,0.6);
    glVertex2f(42,0.3);
    glVertex2f(40,0.1);
    glVertex2f(39,0.1);
    glVertex2f(38,-0.01);
    glVertex2f(37,-0.01);
    glVertex2f(35,0);
    glVertex2f(34,0.1);
    glVertex2f(33,0.15);
    glVertex2f(32,0.17);
    glVertex2f(31,0.25);
    glVertex2f(30,0.6);
    glVertex2f(29,0.8);
    glVertex2f(28,1.2);
    glVertex2f(26,1.75);
    glVertex2f(25,2);
    glVertex2f(23,2.7);
    glVertex2f(20,5);
    glVertex2f(19,5.8);
    glVertex2f(18,6.8);
    ///
    glVertex2f(17,7.6);
    glVertex2f(19,17.2);
    glVertex2f(20,16.9);
    glVertex2f(21,16.8);
    glVertex2f(22,16.79);
    glVertex2f(23,16.73);
    glVertex2f(24,16.7);
    glVertex2f(25,16.75);
    glVertex2f(26,16.8);
    glVertex2f(27,17.1);
    glVertex2f(28.2,17.3);
    glVertex2f(29,17.5);
    glVertex2f(30,17.8);
    glVertex2f(31,18.3);
    glVertex2f(32,19);
    glVertex2f(34,20.2);
    glVertex2f(36.2,22.6);///
    glVertex2f(46,26);
    glVertex2f(60,25);
    glEnd();
    ///tail
    glBegin(GL_POLYGON);
    glVertex2f(17,7.6);
    glVertex2f(1+xxt,28+yyt);
    glVertex2f(19,17.2);
    glEnd();
   
    ///still hand fill
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);

    glVertex2f(45.5,25);
    glVertex2f(46,26);
    glVertex2f(45,26.8);
    glVertex2f(44,27.8);
    glVertex2f(43,28.85);
    glVertex2f(41.3,30);
    glVertex2f(40,30.8);
    glVertex2f(39,31.2);
    glVertex2f(38,31.6);
    glVertex2f(37,32);
    glVertex2f(35,32.4);
    glVertex2f(33,32.45);
    glVertex2f(31,32.45);
    glVertex2f(30,32.35);
    glVertex2f(28,32);
    glVertex2f(27,31.6);
    glVertex2f(24.8,31);
    glVertex2f(28,24);
    glVertex2f(29.5,24.3);
    glVertex2f(31.4,23.9);
    glVertex2f(32.5,23.7);
    glVertex2f(34.5,23.5);
    glVertex2f(36,23.4);
    glVertex2f(36.2,22.6);
    ///glVertex2f(,);
    glEnd();
    ///finger
    glBegin(GL_POLYGON);
    glVertex2f(24.8,31);
    glVertex2f(24.4,31.5);
    glVertex2f(23.6,32.25);
    glVertex2f(22.2,32.2);
    glVertex2f(21,31.8);
    glVertex2f(20,31);
    glVertex2f(19,31);
    glVertex2f(16,29.5);
    glVertex2f(15.3,28.2);
    glVertex2f(15.05,27.8);
    glVertex2f(15,26);
    glVertex2f(15.5,25.45);
    glVertex2f(16,25.05);
    glVertex2f(17,25);
    glVertex2f(17.2,25.2);
    glVertex2f(18.5,26.6);
    glVertex2f(19.5,26.6);
    glVertex2f(20.5,27);
    glVertex2f(21,26.3);
    glVertex2f(21.3,26);
    glVertex2f(21.5,25);
    glVertex2f(22,24);
    glVertex2f(22.5,23.3);
    glVertex2f(23.3,23.3);
    glVertex2f(23.6,23);
    glVertex2f(23.7,22);
    glVertex2f(24,21.1);
    glVertex2f(28,24);
    glEnd();
    ///b_l
    glBegin(GL_POLYGON);
    glVertex2f(24,21.1);
    glVertex2f(25,20.4);
    glVertex2f(26,20.1);
    glVertex2f(27,19.9);
    glVertex2f(28,20);
    glVertex2f(29,20.2);
    glVertex2f(29.5,21);
    glVertex2f(29,21.8);
    glVertex2f(28,22);
    glVertex2f(27,22.5);
    glVertex2f(27,23.35);
    glVertex2f(28,24);
    glEnd();
    ///l_f
    glBegin(GL_POLYGON);
    glVertex2f(19,31);
    glVertex2f(18.8,31.8);
    glVertex2f(18.2,32.4);
    glVertex2f(17.5,32.4);
    glVertex2f(16,31.8);
    glVertex2f(15.35,30);
    glVertex2f(15.35,30.4);
    glVertex2f(15.45,30);
    glVertex2f(16,29.5);
    glEnd();
    ///inner lines
    glBegin(GL_LINE_STRIP);
    glVertex2f(20,31);
    glVertex2f(19,30.1);
    glVertex2f(18.2,29);
    glVertex2f(18,28);
    glVertex2f(18,27.2);
    glVertex2f(18.5,26.5);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(20.2,27);
    glVertex2f(22.3,29.6);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(24.8,31);
    glVertex2f(25,30);
    glVertex2f(24.8,29);
    glVertex2f(24.5,28);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(46,26);
    glVertex2f(46.3,25);
    glVertex2f(47,24);
    glVertex2f(47.5,23);
    glVertex2f(47.8,22);
    glVertex2f(47.9,21);
    glVertex2f(47.9,20);
    glVertex2f(47.8,19);
    glVertex2f(47.4,18);
    glVertex2f(46.5,16.5);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(36.2,22.6);
    glVertex2f(36.5,21);
    glVertex2f(37.5,19);
    glVertex2f(38.9,17);
    glEnd();
    ///still hand ends

    ///MOVING hand fill
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(89+xx,23.85+yy);
    glVertex2f(81+xx,20+yy);
    glVertex2f(85+xx,20.5+yy);
    glVertex2f(89+xx,20.6+yy);
    glVertex2f(90+xx,20.3+yy);
    glVertex2f(91+xx,20.4+yy);
    glVertex2f(92+xx,21+yy);
    glVertex2f(92+xx,22+yy);
    glVertex2f(91.6+xx,22.6+yy);
    glVertex2f(91+xx,23+yy);
    glVertex2f(90+xx,23.6+yy);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(89+xx,23.85+yy);
    glVertex2f(92+xx,24.05+yy);
    glVertex2f(93+xx,24.2+yy);
    glVertex2f(93.8+xx,24.45+yy);
    glVertex2f(94.45+xx,25.5+yy);
    glVertex2f(94.5+xx,26.5+yy);
    glVertex2f(94+xx,27.5+yy);
    glVertex2f(93.7+xx,27.7+yy);
    glVertex2f(93+xx,28+yy);
    glVertex2f(92+xx,28.1+yy);
    glVertex2f(90.2+xx,27.9+yy);
    glVertex2f(88.8+xx,27.5+yy);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(88.8+xx,27.5+yy);
    glVertex2f(91+xx,29+yy);
    glVertex2f(91.8+xx,30+yy);
    glVertex2f(92+xx,30.8+yy);
    glVertex2f(92.1+xx,31.5+yy);
    glVertex2f(91.8+xx,32+yy);
    glVertex2f(91+xx,32.6+yy);
    glVertex2f(90.8+xx,32.7+yy);
    glVertex2f(90+xx,32.8+yy);
    glVertex2f(89+xx,32.5+yy);
    glVertex2f(88.25+xx,32+yy);
    glVertex2f(87.1+xx,31+yy);
    glVertex2f(86.1+xx,30+yy);
    glVertex2f(85.1+xx,29.3+yy);
     glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(85.1+xx,29.3+yy);
    glVertex2f(86+xx,31+yy);
    glVertex2f(85.95+xx,32+yy);
    glVertex2f(85.65+xx,33+yy);
    glVertex2f(85+xx,33.6+yy);
    glVertex2f(84.3+xx,34+yy);
    glVertex2f(84+xx,34.2+yy);
    glVertex2f(83.2+xx,34.2+yy);
    glVertex2f(82.4+xx,33.6+yy);
    glVertex2f(82.1+xx,33+yy);
    glVertex2f(82.15+xx,32+yy);
    glVertex2f(82+xx,31+yy);
    glVertex2f(81.1+xx,30+yy);
    glVertex2f(80.2+xx,29+yy);
    glVertex2f(79.8+xx,27.9+yy);
    glVertex2f(80+xx,26.85+yy);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(81+xx,20+yy);
    glVertex2f(89+xx,23.85+yy);
    glVertex2f(88.8+xx,27.5+yy);
    glVertex2f(85.1+xx,29.3+yy);
    glVertex2f(80+xx,26.85+yy);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(58,10);
    glVertex2f(81+xx,20+yy);
    glVertex2f(80+xx,26.85+yy);

    glVertex2f(78+xx,26+yy);
    glVertex2f(78+xx,26+yy);
    glVertex2f(75+xx,25+yy);

    glVertex2f(65,20);
    glVertex2f(58,20);
    glVertex2f(58,10);
    glEnd();


    glColor3f(0.0f,1.0f,0.0f);
     glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_POLYGON);
     glVertex2f(46.0,26.0);
     glVertex2f(45.5,27);
     glVertex2f(45,28);
     glVertex2f(42.5,32);
     glVertex2f(41,35);
     glVertex2f(40,37);
     glVertex2f(39.2,39);
     glVertex2f(38.9,40);
     glVertex2f(38.2,42);
     glVertex2f(37.8,45);
     glVertex2f(38,48);
     glVertex2f(38.2,50);
     glVertex2f(38.8,53);
     glVertex2f(39.8,55);
     glVertex2f(41,57.6);
     glVertex2f(42.5,60);
     glVertex2f(44.5,62);
     glVertex2f(46.5,64);
     glVertex2f(48,65);
     glVertex2f(50,66);
     glVertex2f(52,67);
     glVertex2f(55,67.7);
     glVertex2f(58,68);
     glVertex2f(60,68.2);
     glVertex2f(63.5,68.1);
     glVertex2f(65,67.9);
     glVertex2f(67.75,67);
     glVertex2f(70,66);
     glVertex2f(72,65);
     glVertex2f(73.65,64);
     glVertex2f(75,63);
     glVertex2f(77.5,61);
     glVertex2f(78.5,60);
     glVertex2f(80,58);
     glVertex2f(81,56.6);
     glVertex2f(81.95,55);
     glVertex2f(82.95,53);
     glVertex2f(83.8,50);
     glVertex2f(84.3,48);
     glVertex2f(84.6,45);
     glVertex2f(84.4,43);
     glVertex2f(84,41);
     glVertex2f(83.7,40);
     glVertex2f(83.2,39);
     glVertex2f(82.5,38);
     glVertex2f(82,37);
     glVertex2f(80.3,35);
     glVertex2f(78,32);
     glVertex2f(76,30);
     glVertex2f(75.5,29.4);
     glVertex2f(75.7,28);
     glVertex2f(76,27);
     glVertex2f(75.8,25);
     glVertex2f(75.5,24);
     glVertex2f(75,22.4);
     glVertex2f(73.9,21);
     glVertex2f(72,20);
     glVertex2f(70,19.1);
     glVertex2f(67,18.2);
     glVertex2f(65,18.1);
     glVertex2f(62.5,18.2);
     glVertex2f(60,18.4);
     glVertex2f(55.5,19.5);
     glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(62.1,57.2);
    glVertex2f(63.8,57.2);
    glVertex2f(64.6,56.7);
    glVertex2f(66,55);///
    glVertex2f(64,55.9);
    glVertex2f(63,55.9);
    glVertex2f(62,55.5);
    glVertex2f(61,55);
    glVertex2f(59,53);///
    glVertex2f(60,55);
    glVertex2f(61,56.2);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(81,47);
    glVertex2f(82,47.1);
    glVertex2f(82.7,46);
    glVertex2f(83,45);
    glVertex2f(82.9,44);
    glVertex2f(82.3,45);
    glVertex2f(81.6,45.7);
    glVertex2f(81,45.95);
    glVertex2f(80,45.7);
    glVertex2f(78.1,45.5);
    glVertex2f(79,46.3);
    glVertex2f(80,46.9);
    glEnd();

    ///eye 01 starts
    ///fill
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_POLYGON);
    glVertex2f(60.3,36.5);
    glVertex2f(59.8,40);
    glVertex2f(59.9,42);
    glVertex2f(60.1,44);
    glVertex2f(60.25,45);
    glVertex2f(60.7,46);
    glVertex2f(61.4,47);
    glVertex2f(63,48.5);
    glVertex2f(64,48.9);
    glVertex2f(65,49);
    glVertex2f(66,48.1);
    glVertex2f(66.8,47);
    glVertex2f(67.1,46);
    glVertex2f(67.2,45);
    glVertex2f(67.3,43);
    glVertex2f(67.2,41.2);
    glVertex2f(66.9,40);
    glVertex2f(65.8,38);
    glVertex2f(65,37);
    glVertex2f(64,36);
    glVertex2f(63.5,35.4);
    glVertex2f(60.3,36.5);
    glEnd();
    ///outline
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(60.3,36.5);
    glVertex2f(59.8,40);
    glVertex2f(59.9,42);
    glVertex2f(60.1,44);
    glVertex2f(60.25,45);
    glVertex2f(60.7,46);
    glVertex2f(61.4,47);
    glVertex2f(63,48.5);
    glVertex2f(64,48.9);
    glVertex2f(65,49);
    glVertex2f(66,48.1);
    glVertex2f(66.8,47);
    glVertex2f(67.1,46);
    glVertex2f(67.2,45);
    glVertex2f(67.3,43);
    glVertex2f(67.2,41.2);
    glVertex2f(66.9,40);
    glVertex2f(65.8,38);
    glVertex2f(65,37);
    glVertex2f(64,36);
    glVertex2f(63.5,35.4);
    glVertex2f(60.3,36.5);
    glVertex2f(59.5,36.6);
    glVertex2f(58.5,36.5);
    glEnd();
    ///eye ball 01
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(60.3,36.5);
    glVertex2f(59.8,40);
    glVertex2f(60.6,42);
    glVertex2f(61.5,42.5);
    glVertex2f(62.6,42);
    glVertex2f(63.1,41);
    glVertex2f(63.4,40);
    glVertex2f(63.4,38.5);
    glVertex2f(63,37.3);
    glVertex2f(62.3,35.8);
    glEnd();
    ///eye 01 ends

    ///eye 02 starts
    ///fill
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_POLYGON);
    glVertex2f(72,34);
    glVertex2f(72.5,36);
    glVertex2f(73.1,37);
    glVertex2f(74,38);
    glVertex2f(76,40);
    glVertex2f(77,40.8);
    glVertex2f(78.5,41);
    glVertex2f(79.6,40.6);
    glVertex2f(80,40);
    glVertex2f(79.9,38);
    glVertex2f(79.7,37);
    glVertex2f(79,36);
    glVertex2f(78.3,35);
    glVertex2f(77.2,34);
    glVertex2f(76,33.05);
    glVertex2f(75,32.6);
    glVertex2f(74,32.5);
    glVertex2f(72.5,33);
    glEnd();
    ///outline
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(72,34);
    glVertex2f(72.5,36);
    glVertex2f(73.1,37);
    glVertex2f(74,38);
    glVertex2f(76,40);
    glVertex2f(77,40.8);
    glVertex2f(78.5,41);
    glVertex2f(79.6,40.6);
    glVertex2f(80,40);
    glVertex2f(79.9,38);
    glVertex2f(79.7,37);
    glVertex2f(79,36);
    glVertex2f(78.3,35);
    glVertex2f(77.2,34);
    glVertex2f(76,33.05);
    glVertex2f(75,32.6);
    glVertex2f(74,32.5);
    glVertex2f(72.5,33);
    glEnd();
    ///eye ball 02
     glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(72.5,33);
    glVertex2f(72,34);
    glVertex2f(72.5,36);
    glVertex2f(73.5,36.6);
    glVertex2f(74.5,36.3);
    glVertex2f(75,36);
    glVertex2f(75.05,35);
    glVertex2f(74.9,34.2);
    glVertex2f(74.5,33.2);
    glVertex2f(74,32.5);
    glEnd();
    ///eye 02 ends
    ///mouth starts
    ///fill
    glColor3f(0.18, 0.18, 0.18);
    glBegin(GL_POLYGON);
    glVertex2f(59.2,27.5);
    glVertex2f(61,31);
    glVertex2f(61.2,30);
    glVertex2f(61.5,29);
    glVertex2f(62.05,28);
    glVertex2f(63,26.6);
    glVertex2f(64,25.5);
    glVertex2f(64.8,25);
    glVertex2f(66,24.5);
    glVertex2f(67,24);
    glVertex2f(65.2,23);
    glVertex2f(64,22.5);
    glVertex2f(63,22.3);
    glVertex2f(61,22.1);
    glVertex2f(60,22.4);
    glVertex2f(59.4,23);
    glVertex2f(59,24);
    glVertex2f(58.9,26.3);
    glEnd();
    ///tongue
    glColor3f(1.0, 0.31, 0.26);
    glBegin(GL_POLYGON);
    glVertex2f(63,22.3);
    glVertex2f(61,22.1);
    glVertex2f(60,22.4);
    glVertex2f(59.4,23);
    glVertex2f(59,24);
    glVertex2f(58.9,26.3);
    glVertex2f(59.2,27.5);
    glVertex2f(60.2,27.2);
    glVertex2f(61,26.3);
    glVertex2f(61.3,26);
    glVertex2f(61.25,25);
    glVertex2f(62,24.5);
    glVertex2f(62.9,24.5);
    glVertex2f(63.7,23.7);
    glVertex2f(63.8,23);
    glVertex2f(63.8,22.35);
    glEnd();
    ///outline
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(59.2,27.5);///
    glVertex2f(61,31);
    glVertex2f(61.2,30);
    glVertex2f(61.5,29);
    glVertex2f(62.05,28);
    glVertex2f(63,26.6);
    glVertex2f(64,25.5);
    glVertex2f(64.8,25);
    glVertex2f(66,24.5);
    glVertex2f(67,24);
    glVertex2f(65.2,23);
    glVertex2f(64,22.5);
    glVertex2f(63,22.3);///
    glVertex2f(61,22.1);///
    glVertex2f(60,22.4);///
    glVertex2f(59.4,23);///
    glVertex2f(59,24);///
    glVertex2f(58.9,26.3);///
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(67,24);
    glVertex2f(70,24.5);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(62.8,31.3);
    glVertex2f(61,31);
    glVertex2f(60,30.7);
    glVertex2f(58,30.8);
    glVertex2f(60,30.7);
    glVertex2f(61,31);
    glEnd();
    ///mouth ends

    glutSwapBuffers();
}

int main(int argc, char * argv[])
{   
    int btn, state=0;
    glutInit( & argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Casper");
    init();
    glutDisplayFunc(myDisplay);
    pid_t pid =fork();

    if (pid == 0) {
        system("canberra-gtk-play -f cello.wav");
    exit(0);
    }
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
void timer(int)
{   glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    ///hand condition
    if(state==1)
      if(xx<1)
        {xx+=0.05;
        yy-=0.1;
       }
      else state=0;
    else
        if(xx>=0)
        {xx-=.05;
        yy+=0.1;
        }
        else state=1;
    ///tail condition
    if(statel==1)
        if(yyt>=-5)
        {
           yyt-=.09;
           xxt-=.035;
        }
        else statel=0;
    else
        if(yyt<0)
        {
            yyt+=.09;
            xxt+=.035;
        }
        else statel=1;


    if(c5<-120)
        c5=110;
    else c5=c5-.2;
    if(c4<-120)
        c4=110;
    else c4=c4-.2;


    if(c1<=-180)
        c1=110;
    else c1=c1-.3;
    if(c2<=-180)
        c2=110;
    else c2=c2-.3;
    if(c3<=-180)
        c3=110;
    else c3=c3-.3;

    if(c6<=-100)
        c6=0;
    else c6=c6-.25;
}
