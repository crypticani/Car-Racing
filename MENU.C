#include<graphics.h>
#include<conio.h>
void h1();
void h2();
void h();

main()
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
		else if(k==72)  //cursor moves upward
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
			if(y1==198) // cursor on the first option
			{
			   cleardevice();
			   h();
			}
			else
			{
				exit();
			}
		}

		else if(k==27)
		{
			exit();
		}

	   }
	}
	}

	getch();
	closegraph();


}

void h1()  //prints the "MENU"
{
	settextstyle(7,0,7);
	setcolor(GREEN);
	outtextxy(215,50,"MENU");
	setcolor(RED);
	bar3d(20,145,620,150,5,2);
}

void h2() // prints options
{
	settextstyle(8,0,4);
	setcolor(GREEN);
	outtextxy(220,200,"PLAY GAME");
	outtextxy(220,240,"HIGH SCORE");
	outtextxy(220,280,"HELP");
	outtextxy(220,320,"ABOUT");
	outtextxy(220,360,"EXIT");
}

void h()
{
	cleardevice();
       outtext("Hello");
}