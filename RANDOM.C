#include<stdlib.h>
#include<time.h>
#include<graphics.h>

main()
{
	int gd=DETECT,gm,a,i;
	clrscr();

	randomize();

	a=215+rand()%150;


		//printf("%d\t",a);
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");
		for(i=0;i<380;i++)
		{
		rectangle(a,10+i,a+50,50+i);
		delay(10);
		cleardevice();
		}

	getch();
      closegraph();
}