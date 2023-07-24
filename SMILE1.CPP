//___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ______________//
//_________________ C++ PROGRAM TO DRAW SMILE EMOJI ______________________//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"c://tc//bgi");

// LINE
setlinestyle(1,0,3);

//FACE
circle(200,200,80);    delay(50);
setfillstyle(1,14);
floodfill(200,200,15);

// 1TH EYE
ellipse(180,180,0,360,8,13);   delay(250);
setfillstyle(1,6);
floodfill(180,180,15);

// 2ND EYE
ellipse(220,180,0,360,8,13);   delay(250);
setfillstyle(1,6);
floodfill(220,180,15);

//SMILE
setcolor(6);
ellipse(200,225,185,355,32,20);    delay(300);

setcolor(10);
settextstyle(3,0,2);
outtextxy(200,375,":- ROHIT TECH STUDY");

getch();
closegraph();
}


/*............... I HOPE YOU LIKE THIS PROGRAMMING .......................

............. LIKE .......... SHARE ........ SUBSCRIBE ..................*/


