#include<stdlib.h>
#include<time.h>
#include<graphics.h>

myrandom()
{
	int gd=DETECT,gm,i,a;
	randomize();
	a=215+rand()%150;
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");
		for(i=0;i<30;i++)
		{
		rectangle(a,10+i,a+50,50+i);
		delay(10);
		//cleardevice();
		}

	getch();
      closegraph();
}
