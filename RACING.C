#include<graphics.h>
#include<process.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void car(int, int);
int score(int);
main()
{
	int gd=DETECT,gm,i,j,ch,x=0,y=0;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");


	for(i=215;i<415;i++)
	{
	     for(j=0;j<10;j++)
	     {
		while(i>215&&i<375&&j<10)
		{
		bar3d(215,0,215,getmaxy(),5,3);
		bar3d(415,0,415,getmaxy(),5,3);
		line(265,0,265,getmaxy());
		line(315,0,315,getmaxy());
		line(365,0,365,getmaxy());

		car(i,j);
		setcolor(WHITE);
		score(j);

		if(kbhit())
		{

			ch=getch();

			if(ch==72)
			{
				x=0;
				y=1;
			}

			if(ch==75)
			{
				x=-1;
				y=0;
			}

			if(ch==77)
			{
				x=1;
				y=0;
			}

			if(ch==80)
			{
				x=0;
				y=-1;
			}

			if(ch==27)
			{
				exit(0);
			}
		i=i+x;
		while(i==366)
		{
			i=365;

		}
		j=j+y;

		delay(20);

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
			setcolor(GREEN);
	       //	circle(10+i,395+j,5);
	       //	circle(30+i,395+j,5);

		rectangle(7+i,370-j,48+i,395-j);
		rectangle(12+i,375-j,18+i,380-j);
		rectangle(22+i,375-j,28+i,380-j);
		rectangle(32+i,375-j,38+i,380-j);
		rectangle(40+i,375-j,44+i,387-j);
	}

int score(int j)
	{
		rectangle(490,100,590,200);
		outtextxy(500,120,"Score");
		if(j==0)
		{
		outtextxy(500,140,"0");
		}

		else if(j>=5&&j<10)

		outtextxy(500,140,"5");
		delay(100);
	}