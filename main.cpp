/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<stdio.h>
#include <stdlib.h>

float nilai_x;
float nilai_y[5]= {0,-80,-160,-240,-320};
int state = 1;
int state2 = 1;
int state3 = 1;
int state4 = 1;
int stateBesar = 1;
int stateBesar2 = 1;
int stateBesar3 = 1;
int stateBesar4 = 1;
int stateVertikal1 = 1;
int stateVertikal2 = 1;
int stateVertikal3 = 1;
int stateVertikal4 = 1;
int stateVertikalBesar = 1;
int stateVertikalBesar2 = 1;
int stateVertikalBesar3 = 1;
int stateVertikalBesar4 = 1;
int uang = 1000;
int hargaIkan = 500;
int hargaJualIkan = 250;
int jumlahIkan;
int hargaKolam = 1500;
int dayaTampung = 3;
int pilihan;
int posIkan;
void timer(int);
int a;
int umurDewasa = 10;
int age;
float status[] = {0,1,2,3};
void timerUmur(int);
int purchase;
bool jual,beli;
float IkanBanyak[4][9]={{5.0f,115.0f,394.0f,463.0f,80.0f,0.0f,0.0f,0.5f,0.5f},
                        {5.0f,115.0f,394.0f,463.0f,100.0f,-80.0f,0.0f,0.5f,0.5f},
                        {5.0f,115.0f,394.0f,463.0f,80.0f,-160.0f,0.0f,0.5f,0.5f},
                        {5.0f,115.0f,394.0f,463.0f,80.0f,-240.0f,0.0f,0.5f,0.5f}};
///x1,x2,y1,y2,tranx,transy,relatifx1,relatifx2,relatify1,relatify2,kehidupan,scalex,scaley

float IkanBesar[4][9]={{5.0f,115.0f,394.0f,463.0f,80.0f,0.0f,0.0f,1.0f,1.0f},
                        {5.0f,115.0f,394.0f,463.0f,100.0f,-80.0f,0.0f,1.0f,1.0f},
                        {5.0f,115.0f,394.0f,463.0f,80.0f,-160.0f,0.0f,1.0f,1.0f},
                        {5.0f,115.0f,394.0f,463.0f,80.0f,-240.0f,0.0f,1.0f,1.0f}};


void Bawah(){
    float koor3x[11] = {0,0,40,40,80,80,120,120};
    for (int a = 0; a < 12; a++){
        glBegin(GL_POLYGON);
        glColor3ub(53, 115, 52);
        glVertex2f(koor3x[0],0);
        glVertex2f(koor3x[1],40);
        glVertex2f(koor3x[2],40);
        glVertex2f(koor3x[3],60);
        glColor3ub(35, 189, 32);
        glVertex2f(koor3x[4],60);
        glVertex2f(koor3x[5],40);
        glVertex2f(koor3x[6],40);
        glVertex2f(koor3x[7],0);
        glEnd();
        for (int k = 0; k < 12; k++){
            koor3x[k]+=120;
        }
    }
}
void Atas(){


    float koor4x[4] = {0,0,120,120};
    for (int as= 0; as < 12; as++){
        glBegin(GL_POLYGON);
        glColor3ub(53, 115, 52);
        glVertex2f(koor4x[0],600);
        glVertex2f(koor4x[1],540);
        glColor3ub(35, 189, 32);
        glVertex2f(koor4x[2],540);
        glVertex2f(koor4x[3],600);
        glEnd();
        for (int k = 0; k < 12; k++){
            koor4x[k]+=120;
        }
    }
}


void gambarIkan(){
glBegin(GL_POLYGON);
glVertex2f(305,445);
glVertex2f(305,405);
glVertex2f(330,425);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(330,425);
glVertex2f(339.8,436.4);
glVertex2f(350.0608647119014,443.5247640104295);
glVertex2f(360.1186362216311,447.7745266201744);
glVertex2f(370,450);
glVertex2f(369.8930902240444,407.1184643202815);
glVertex2f(359.8353187143148,407.9684168422305);
glVertex2f(350,410);
glVertex2f(339.7197756948553,414.7680370178223);
glVertex2f(330,425);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(370,450);
glVertex2f(368,454);
glVertex2f(364,458);
glVertex2f(359.8643364959623,461.2391735254503);
glVertex2f(355.9785665675465,462.5131964528013); //O
glVertex2f(351.9335437732119,463.405012501946);
glVertex2f(352.8269880465672,461.7202130514105);
glVertex2f(354.4694875504317,459.7153974805169);
glVertex2f(355.9187518185474,456.9859497755654);
glVertex2f(357.2713984687887,454.7395901599859);
glVertex2f(358.3992101295104,452.3528636071883);
glVertex2f(359.291026178655,450.2188752038777);
glVertex2f(360.1186362216311,447.7745266201744);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(370,450);
glVertex2f(384.4859809564682,449.7790865393588); //U
glVertex2f(391.3538173891204,447.8879431738457);
glVertex2f(397.1267813470019,445.5986643629613);
glVertex2f(402.9992791662262,442.0154453546205); //B1
glVertex2f(408.175039956051,438.0340909009086);
glVertex2f(412.9526653005047,433.0573978337687);
glVertex2f(415.2419441113888,429.0760433800568);
glVertex2f(413.748936191247,424.9951550650021);
glVertex2f(410.5638526282779,421.0138006112901);
glVertex2f(406.6820320359092,416.634310712207);
glVertex2f(401.5062712460845,413.4492271492375); //I1
glVertex2f(397.0272474856591,410.6622790316391);
glVertex2f(392.1500882798626,408.5720679434403);
glVertex2f(387.1733952127234,407.8753309140407);
glVertex2f(381.4980581430201,407.1913590366867);
glVertex2f(369.8930902240444,407.1184643202815);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(359.8353187143148,407.9684168422305); //J
glVertex2f(358.5189551128351,405.2347466059668); //C2
glVertex2f(356.2196404578402,402.3376101406728);
glVertex2f(353.6444080442459,400.6821035890763);
glVertex2f(351.6210111478504,399.2565285029792);
glVertex2f(348.9078198549564,397.6470082444825); //W1
glVertex2f(345.5048341655639,395.7615702273865);
glVertex2f(348.7563274943009,395.0745269551565);
glVertex2f(352.6059153521139,394.9174009201437);
glVertex2f(356.1412511399013,395.1530899726629); //S1
glVertex2f(360.3124205437312,395.8075565204864);
glVertex2f(363.1333596979698,398.0599216203997);
glVertex2f(365.7259392756806,399.9454340405533);
glVertex2f(367.3757626433147,401.5166943906813);
glVertex2f(367.3757626433147,401.5166943906813);
glVertex2f(369.8930902240444,407.1184643202815);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(395,435);
glVertex2f(397,435);
glVertex2f(397,433);
glVertex2f(395,433);
glEnd();

}
//Gambar


void ikan(){
    glColor3ub(47, 146, 163);
    glPushMatrix();
    glTranslatef(-300,0,0);
    gambarIkan();
    glPopMatrix();
}




void movement_ikan(){
    switch(state){
        case 1:
            if (IkanBanyak[0][4] < 1500){
                IkanBanyak[0][4] += 3;
            }
            else{
                state = -1;
            }
            break;
        case -1:
            if (IkanBanyak[0][4] > 0){
                IkanBanyak[0][4] -= 3;
            }
            else{
                state = 1;
            }
            break;
    }
}
void movement_ikan2(){
    switch(state2){
        case 1:
            if (IkanBanyak[1][4] < 1500){
                IkanBanyak[1][4] += 2;
            }
            else{
                state2 = -1;
            }
            break;
        case -1:
            if (IkanBanyak[1][4] > 0){
                IkanBanyak[1][4] -= 2;
            }
            else{
                state2 = 1;
            }
            break;
    }
}
void movement_ikan3(){
    switch(state3){
        case 1:
            if (IkanBanyak[2][4] < 1500){
                IkanBanyak[2][4] += 4;
            }
            else{
                state3 = -1;
            }
            break;
        case -1:
            if (IkanBanyak[2][4] > 0){
                IkanBanyak[2][4] -= 4;
            }
            else{
                state3 = 1;
            }
            break;
    }
}
void movement_ikan4(){
    switch(state4){
        case 1:
            if (IkanBanyak[3][4] < 1500){
                IkanBanyak[3][4] += 1;
            }
            else{
                state4 = -1;
            }
            break;
        case -1:
            if (IkanBanyak[3][4] > 0){
                IkanBanyak[3][4] -= 1;
            }
            else{
                state4 = 1;
            }
            break;
    }
}

void movement_ikanBesar(){
switch(stateBesar){
        case 1:
            if (IkanBesar[0][4] < 700){
                IkanBesar[0][4] += 2;
            }
            else{
                stateBesar = -1;
            }
            break;
        case -1:
            if (IkanBesar[0][4] > 0){
                IkanBesar[0][4] -= 2;
            }
            else{
                stateBesar = 1;
            }
            break;
    }
}

void movement_ikanBesar2(){
switch(stateBesar2){
        case 1:
            if (IkanBesar[1][4] < 700){
                IkanBesar[1][4] += 3;
            }
            else{
                stateBesar2 = -1;
            }
            break;
        case -1:
            if (IkanBesar[1][4] > 0){
                IkanBesar[1][4] -= 3;
            }
            else{
                stateBesar2 = 1;
            }
            break;
    }
}

void movement_ikanBesar3(){
switch(stateBesar3){
        case 1:
            if (IkanBesar[2][4] < 700){
                IkanBesar[2][4] += 4;
            }
            else{
                stateBesar3 = -1;
            }
            break;
        case -1:
            if (IkanBesar[2][4] > 0){
                IkanBesar[2][4] -= 4;
            }
            else{
                stateBesar3 = 1;
            }
            break;
    }
}

void movement_ikanBesar4(){
switch(stateBesar4){
        case 1:
            if (IkanBesar[3][4] < 700){
                IkanBesar[3][4] += 1;
            }
            else{
                stateBesar4 = -1;
            }
            break;
        case -1:
            if (IkanBesar[3][4] > 0){
                IkanBesar[3][4] -= 1;
            }
            else{
                stateBesar4 = 1;
            }
            break;
    }
}

void movementVertikal_ikan(){
    switch(stateVertikal1){
    case 1:
        if(IkanBanyak[0][5] < 600){
            IkanBanyak[0][5] += 2;
        }
        else {
            stateVertikal1 = -1;
        }
        break;

    case -1:
        if(IkanBanyak[0][5] > -350){
            IkanBanyak[0][5] -= 2;
        }
        else{
            stateVertikal1 = 1;
        }
        break;
    }
}
void movementVertikal_ikan2(){
    switch(stateVertikal2){
    case 1:
        if(IkanBanyak[1][5] < 600){
            IkanBanyak[1][5] += 2;
        }
        else {
            stateVertikal2 = -1;
        }
        break;

    case -1:
        if(IkanBanyak[1][5] > -350){
            IkanBanyak[1][5] -= 2;
        }
        else{
            stateVertikal2 = 1;
        }
        break;
    }
}
void movementVertikal_ikan3(){
    switch(stateVertikal3){
    case 1:
        if(IkanBanyak[2][5] < 600){
            IkanBanyak[2][5] += 2;
        }
        else {
            stateVertikal3 = -1;
        }
        break;

    case -1:
        if(IkanBanyak[2][5] > -350){
            IkanBanyak[2][5] -= 2;
        }
        else{
            stateVertikal3 = 1;
        }
        break;
    }
}
void movementVertikal_ikan4(){
    switch(stateVertikal4){
    case 1:
        if(IkanBanyak[3][5] < 600){
            IkanBanyak[3][5] += 2;
        }
        else {
            stateVertikal4 = -1;
        }
        break;

    case -1:
        if(IkanBanyak[3][5] > -350){
            IkanBanyak[3][5] -= 2;
        }
        else{
            stateVertikal4 = 1;
        }
        break;
    }
}

void movementVertikal_IkanBesar(){
switch(stateVertikalBesar){
    case 1:
        if(IkanBesar[0][5] < 80){
            IkanBesar[0][5] += 2;
        }
        else {
            stateVertikalBesar = -1;
        }
        break;

    case -1:
        if(IkanBesar[0][5] > -350){
            IkanBesar[0][5] -= 2;
        }
        else{
            stateVertikalBesar = 1;
        }
        break;
    }
}

void movementVertikal_IkanBesar2(){
switch(stateVertikalBesar2){
    case 1:
        if(IkanBesar[1][5] < 80){
            IkanBesar[1][5] += 2;
        }
        else {
            stateVertikalBesar2 = -1;
        }
        break;

    case -1:
        if(IkanBesar[1][5] > -350){
            IkanBesar[1][5] -= 2;
        }
        else{
            stateVertikalBesar2 = 1;
        }
        break;
    }
}
void movementVertikal_IkanBesar3(){
switch(stateVertikalBesar3){
    case 1:
        if(IkanBesar[2][5] < 80){
            IkanBesar[2][5] += 2;
        }
        else {
            stateVertikalBesar3 = -1;
        }
        break;

    case -1:
        if(IkanBesar[2][5] > -350){
            IkanBesar[2][5] -= 2;
        }
        else{
            stateVertikalBesar3 = 1;
        }
        break;
    }
}
void movementVertikal_IkanBesar4(){
switch(stateVertikalBesar4){
    case 1:
        if(IkanBesar[3][5] < 80){
            IkanBesar[3][5] += 2;
        }
        else {
            stateVertikalBesar4 = -1;
        }
        break;

    case -1:
        if(IkanBesar[3][5] > -350){
            IkanBesar[3][5] -= 2;
        }
        else{
            stateVertikalBesar4 = 1;
        }
        break;
    }
}
void ikanbyk(){
    for (int i = 0; i< 4;i++){
        glPushMatrix();
        glScalef(IkanBanyak[i][7],IkanBanyak[i][8],0);
        glTranslated(IkanBanyak[i][4],IkanBanyak[i][5],0);
        if (IkanBanyak[i][6] == 1){
            ikan();
        }
        glPopMatrix();
    }
}

void ikanBesar(){
    for (int i = 0; i< 4;i++){
        glPushMatrix();
        glScalef(IkanBesar[i][7],IkanBesar[i][8],0);
        glTranslated(IkanBesar[i][4],IkanBesar[i][5],0);
        if (IkanBesar[i][6] == 1){
            ikan();
        }
        glPopMatrix();
    }
}

void pembelian(){
    switch(a){
    case 1:
        IkanBanyak[0][6] = 1;
       // IkanBesar[0][6] = 1;
        break;
    case 2:
        IkanBanyak[1][6] = 1;
      //  IkanBesar[1][6] = 1;
        break;
    case 3:
        IkanBanyak[2][6] = 1;
      //  IkanBesar[2][6] = 1;
        break;
    case 4:
        IkanBanyak[3][6] = 1;
      //  IkanBesar[3][6] = 1;
        break;
    }
}

void penjualan(){
    switch(a){
    case 1:
        IkanBanyak[0][6] = 0;
        break;
    case 2:
        IkanBanyak[1][6] = 0;
        break;
    case 3:
        IkanBanyak[2][6] = 0;
        break;
    case 4:
        IkanBanyak[3][6] = 0;
        break;
    }
}


void timer(int){
    glutTimerFunc(10,timer, 0);
    movement_ikan();
    movement_ikan2();
    movement_ikan3();
    movement_ikan4();
    movement_ikanBesar();
    movement_ikanBesar2();
    movement_ikanBesar3();
    movement_ikanBesar4();
    movementVertikal_ikan();
    movementVertikal_ikan2();
    movementVertikal_ikan3();
    movementVertikal_ikan4();
    movementVertikal_IkanBesar();
    movementVertikal_IkanBesar2();
    movementVertikal_IkanBesar3();
    movementVertikal_IkanBesar4();
    glutPostRedisplay();
}


void pertumbuhan(){
    if (age == umurDewasa){
        IkanBanyak[0][6] = 0;
        IkanBesar[0][6] = 1;
    }
}
void timerUmur(int){
glutTimerFunc(1000,timerUmur, 0);
age += 1;
pertumbuhan();
}











void keyboard_gameplay(unsigned char key, int x, int y){
    if(key == 'q'){
          if(uang > 49){
            if(a <= 4){
                a+=1;
                pembelian();
            }
            else{
                printf("full");
            }
          }
          else{
            printf("uang tidak cukup");
          }

    }
    if(key == 'w'){
        if (a >= 0){
            penjualan();
            a-=1;
            uang += 50;
        }
        else{
            printf("tidak punya ikan");
        }
    }

}




void gameplay(){
uang = 100;
ikanbyk();
ikanBesar();
pertumbuhan();
printf("%d",age);
glutKeyboardFunc(keyboard_gameplay);
}





void display(){
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.4,0.867,0.91,1);
    glClear(GL_COLOR_BUFFER_BIT);
    gameplay();
    Atas();
    Bawah();
    glFlush();
    glutSwapBuffers();
}




int main(int argc, char* argv[]){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(800,600);
glutInitWindowPosition(100,100);
glutCreateWindow("Juragan Lele");
gluOrtho2D(0,800,0,600);
glutTimerFunc(10,timer,0);
glutTimerFunc(1000,timerUmur,0);
glutDisplayFunc(display);
//glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}
