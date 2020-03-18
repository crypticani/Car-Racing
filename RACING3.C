#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
//#include"mygames.h"

void car(int, int);
void track();
void play();
void menu();
main()
{
  menu();
}


void play()
{
int gd=DETECT,gm,i,j,a,k,ch,x=0,y=0;

	randomize();
	a=215+rand()%150;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<450;k++)
	{
	for(i=215;i<415;i++)
	{
	     for(j=0;j<10;j++)
	     {

			track();
			delay(10);

			car(i,j);
			if(kbhit())
			{
				ch=getch();
				k=k+1;
				if(ch==72)  //move upward
				{
					x=0;
					y=1;
				}

				if(ch==75&&i>215)  //move left
				{
					x=-1;
					y=0;
				}

				if(ch==77&&i<365) //move right
				{
					x=1;
					y=0;
				}

				if(ch==80) //move downward
				{
					x=0;
					y=-1;
				}

				if(ch==27) //exit
				{
					exit(0);
				}

			i=i+x; //car moves towards left or right

			if(i==366) //max value of x coordinate of car
			{
				i=365; // to remain on the track
			}

			j=j+y; //car moves up or down

		rectangle(a,50+k,a+50,100+k);
		delay(10);
			delay(10);
			cleardevice();

		}
	     }
	    }
	 }
	getch();
	closegraph();
}


void car(int i, int j)
{

	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirrors
	arc(30+i,290,10,170,15);     //front light

	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
}

void track()
{
		bar3d(215,0,215,getmaxy(),5,3);//left boundary
		bar3d(430,0,430,getmaxy(),5,3);//right boundary
		line(270,0,270,getmaxy());  //lanes
		line(320,0,320,getmaxy());
		line(370,0,370,getmaxy());
}


void menu()
{
int s=1,t=0,a,p=140,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
do
{
do
{
cleardevice();
setcolor(YELLOW);
settextstyle(1,0,4);
outtextxy(230,30,"MENU");
setfillstyle(1,2);
bar(140,80,400,82);
settextstyle(1,0,1);
setcolor(10);
outtextxy(220,137,"PLAY GAME");
outtextxy(220,167,"SCORES");
outtextxy(220,197,"HELP");
outtextxy(220,227,"ABOUT");
outtextxy(220,257,"EXIT");
setcolor(RED);
rectangle(200,p,350,p+20);
a=getch();
switch(a)
{
case UP:if(p>140)
	{p-=30;
	 s--;}
	break;
case DOWN:if(p<260)
	{p+=30;
	s++;};
	break;
case ENTER:a=1;
	break;
default:break;
}
}while(a!=1);
switch(s)
{
case 1:play();
	break;
/*case 2:disp_score();
	break;
case 3:help();
	break;
case 4:about();
	break;*/
case 5:exit(0);
default:cprintf("Invalid choice");
	break;
}
}while(t==0);
getch();
}
