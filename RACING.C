#include<graphics.h>
#include<process.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void car(int, int);
int score(int);
void mycar(int, int);
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

	       mycar(i,j);
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

void mycar(int i, int j)
{
	//int poly1[]={245,300,285,300,294,320,236,320,245,300};//back mirror
	//int poly2[]={236,230,294,230,280,250,250,250,236,230};//wind screen
	
	rectangle(15+i,250-j,45+i,290-j); //roof
	rectangle(10+i,290-j,50+i,300-j);
	rectangle(i,230-j,60+i,320-j);      //main outline of car
	arc(30+i,250-j,10,170,35);     //side mirror's
	arc(30+i,190-j,10,170,15);     //front light

	/*setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen*/
	
	line(i,230-j,15+i,250-j); //top_left_corner
	line(45+i,250-j,60+i,230-j);//top_right_corner
	line(10+i,300-j,i,320-j);//bottom_left_corner
	line(50+i,300-j,60+i,320-j);//bottom_right_corner

	ellipse(30+i,320-j,180,360,30,20);//trunk lid
	ellipse(30+i,230-j,0,180,30,55);//bonet
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
