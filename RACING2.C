#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void car(int, int);
void track();
main()
{
	int gd=DETECT,gm,i,j,a,k,ch,x=0,y=0;

	randomize();
	a=215+rand()%150;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=0;i<415;i++)
	{
	     for(j=0;j<10;j++)
	     {
		while(i>215&&i<375&&j<100)
		{
			track();
			delay(10);
	       //	getch();
			car(i,j);
			if(kbhit())
			{
				ch=getch();

				if(ch==72)  //move upward
				{
					x=0;
					y=1;
				}

				if(ch==75)  //move left
				{
					x=-1;
					y=0;
				}

				if(ch==77) //move right
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

			while(i==366) //max value of x coordinate of car
			{
				i=365; // to remain on the track
			}

			j=j+y; //car moves up or down
			delay(10);
			rectangle(a,50+k,a+50,200+k);
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
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonet
}

void track()
{
		bar3d(215,0,215,getmaxy(),5,3);//left boundary
		bar3d(430,0,430,getmaxy(),5,3);//right boundary
		line(270,0,270,getmaxy());  //lanes
		line(320,0,320,getmaxy());
		line(370,0,370,getmaxy());
}