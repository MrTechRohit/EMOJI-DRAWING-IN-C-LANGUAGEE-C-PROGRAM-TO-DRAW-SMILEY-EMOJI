//___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ______________//
//_________________ C++ PROGRAM TO DRAW SMILEY EMOJI ______________________//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"c://tc//bgi");

//FACE
setcolor(14);
circle(200,200,70);    delay(50);
setfillstyle(1,14);
floodfill(200,200,14);

// 1TH EYE
setcolor(0);
setfillstyle(1,0);
fillellipse(220,177,4,10);   delay(250);

// 2ND EYE
fillellipse(180,177,4,10);   delay(250);

//SMILE
setlinestyle(1,0,3);
setcolor(4);
ellipse(200,220,185,335,32,18);
ellipse(200,220,185,335,32,19);
ellipse(200,220,185,335,32,20);
ellipse(200,220,185,335,32,21);
ellipse(200,220,185,335,32,22);
ellipse(200,220,185,335,32,23);
ellipse(200,220,185,335,32,24);

setcolor(10);
settextstyle(3,0,2);
outtextxy(200,375,":- ROHIT TECH STUDY");

getch();
closegraph();
}


/*............... I HOPE YOU LIKE THIS PROGRAMMING .......................

............. LIKE .......... SHARE ........ SUBSCRIBE ..................*/


