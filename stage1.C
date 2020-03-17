#include<graphics.h>
#include<process.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void car(int, int);
main()
{
	int gd=DETECT,gm,i,j,ch,x=0,y=0;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");


	for(i=0;i<240;i+=10)
	{
	     for(j=0;j<240;j+=10)
	     {
		while(1)
		{
		bar3d(215,0,215,getmaxy(),5,3);
		bar3d(415,0,415,getmaxy(),5,3);
		line(265,0,265,getmaxy());
		line(315,0,315,getmaxy());
		line(365,0,365,getmaxy());

		car(i,j);
		setcolor(RED);


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
		j=j+y;


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
			setcolor(GREEN);
	       //	circle(10+i,395+j,5);
	       //	circle(30+i,395+j,5);

		rectangle(215+7+i,370-j,215+48+i,395-j);
		rectangle(215+12+i,375-j,215+18+i,380-j);
		rectangle(215+22+i,375-j,215+28+i,380-j);
		rectangle(215+32+i,375-j,215+38+i,380-j);
		rectangle(215+40+i,375-j,215+44+i,387-j);
	}
