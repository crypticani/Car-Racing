#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>

void loading();
void car(int);
void track();
void play();
void menu();
void h1();
void h2();
int score();

void main()
{
	 loading();
	 menu();
}

void play()
{
int gd=DETECT,gm,i,j,k,r,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
	     	for(j=0;j<10;j++)
	    	{
			car(i);
			track();
			score();
			rectangle(r,k,r+50,50+k);
				if(i+50>=r&&i<=(r+50)&&k>=210)
				{
				  outtext("GAME OVER");
				  menu();
				}

				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}
			//delay(10);
			if(kbhit())
			{
				ch=getch();
				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			//delay(10);

		}
	     }
	  }
	 }
	getch();
	closegraph();
}

int score()
{
	outtextxy(500,200,"SCORE:\n");
}

void car(int i)
{
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirrors
	arc(30+i,290,10,170,15);     //front light
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(10);
	cleardevice();
}

void track()
{
		bar3d(215,0,215,getmaxy(),5,3);//left boundary
		bar3d(470,0,470,getmaxy(),5,3);//right boundary
		line(280,0,280,getmaxy());  //lanes
		line(340,0,340,getmaxy());
		line(400,0,400,getmaxy());
}

void loading() //loading screen
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	settextstyle(8,0,7);
	outtextxy(130,100,"Car Racing");
       //	settextstyle(0,0,5);
       //	outtextxy((getmaxx()/2)-500,getmaxy()-125,"LOADING");
	for(i=0;i<200;i++)
	{
		setcolor(RED);
		rectangle((getmaxx()/2)-100+i,getmaxy()-100,(getmaxx()/2)+100,getmaxy()-80);
		delay(10);
	}
}
void menu()
{

int gd=DETECT,gm,i,k,x1=215,y1=198,x2=425,y2=245,a;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(1)
	{
		h1();
		h2();
		rectangle(x1,y1,x2,y2);

	if(kbhit()) // detects the pressing of key
	{
	   k=getch();
	   {
		if(k==72&&y1==198) //cursor at the top
		{
			cleardevice();
			h1();
			h2();
			rectangle(x1,y1,x2,y2);
		}
		else if(k==80&&y2==405) //cursor at the bottom and moves to the top
		{
			x1=215;
			y1=198;
			x2=425;
			y2=245;
			cleardevice();
			h1();
			h2();
			rectangle(x1,y1,x2,y2);
		}
		else if(k==80) //cursor moves downward
		{
			cleardevice();
			h1();
			h2();
			y1=y1+40;
			y2=y2+40;
			rectangle(x1,y1,x2,y2);
		}
		else if(k==72) //cursor moves upward
		{
			cleardevice();
			h1();
			h2();
			y1=y1-40;
			y2=y2-40;
			rectangle(x1,y1,x2,y2);
		}

		else if(k==13) //Enter key is pressed
		{
			if(y1==198)  // cursor on the first option
			{
			   cleardevice();
			   play(); // opens the game
			}
			else
			{
				exit(0);
			}
		}

		else if(k==27)
		{
			exit(0);
		}
	   }
	}
	}
	closegraph();
}

void h1() //prints the "MENU"
{
	settextstyle(7,0,7);
	setcolor(GREEN);
	outtextxy(215,50,"MENU");
	setcolor(RED);
	bar3d(20,145,620,150,5,2);
}

void h2()  // prints options
{
	settextstyle(8,0,4);
	setcolor(GREEN);
	outtextxy(220,200,"PLAY GAME");
	outtextxy(220,240,"HIGH SCORE");
	outtextxy(220,280,"HELP");
	outtextxy(220,320,"ABOUT");
	outtextxy(220,360,"EXIT");
}
