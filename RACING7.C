/*
	Racing 7 changelog :
	1. Whole code is optimized in terms of graphics. Now Play the game until exit is pressed.
	2. Tracks, car movement and obstacles optimized.
	3. frequency of objects now set to a particular distance.
	4. Pause and Resume game only with the space bar.
	5. bug at the select car screen slightly fixed for future debugging purpose.
	6. Score is displayed after the game is over as well as after pausing the game.
	7. Screen after game over is held till Enter key is pressed.
*/
#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#define D 50   // Delay
int a=0,cars=0;
void loading();
void car(int);
void track();
void play();
void play1();
void play2();
void play3();
void play4();
void menu();
void h1();
void h2();
int score();
void select_car();
void car_choice();
void car1();
void car2();
void car3();
void car4();
void mycar1(int);
void mycar2(int);
void mycar3(int);
void mycar4(int);

void main()
{
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	 loading();
	 menu();
}

void play()
{
int i,j,k,l,r,s,ch;
	cleardevice();
	randomize();
	r=210+rand()%150; // generates a random number between 210 and 210+150
	s=210+rand()%150;
	for(k=0;k<433;k+=5)
	{
	for(l=-200;l<433;l+=5)
	{
		for(i=220;i<345;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			car(i);

			rectangle(r,k,r+50,50+k);
			rectangle(s,l,s+50,50+l);
				if(i+55>=r&&i<=(r+50)&&k>=240&&k<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  a=0;     //resets score to 0.
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  kbhit();
				  while(getch()!=13)  //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(i+55>=s&&i<=(s+50)&&l>=240&&l<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  a=0;
				  kbhit();
				  while(getch()!=13) //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(k==430)
				{
					k=0;
					a=a+10;
					randomize();
					r=210+rand()%150;   // generates a random number between 210 and 210+150
				}
				else if(l==430)
				{
					l=0;
					a=a+10;
					randomize();
					s=210+rand()%150;
				}
				else
				{
					k+=5;
					l+=5;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==32) //space button
				{
					outtextxy(200,200,"GAME PAUSED");
					printf("Your Current Score is : %d :",a);
					outtextxy(200,250,"Press Space bar to Resume");
					while(getch()!=32) //to hold the screen till Space is pressed
					{
						getch();
					}
				}
				if(ch==75&&i>220)  //move left
				{
					if(i==220)
					{
						i=225;
					}
					i-=20;
				}

				if(ch==77&&i<337) //move right
				{
					if(i==345) //max value of x coordinate of car
					{
						i=345; // to remain on the track
					}
					i+=20;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	}
	getch();
}
void play1()
{
int i,j,k,l,r,s,ch;
	cleardevice();
	randomize();
	r=210+rand()%150; // generates a random number between 210 and 210+150
	s=210+rand()%150;
	for(k=0;k<433;k+=5)
	{
	for(l=-200;l<433;l+=5)
	{
		for(i=220;i<345;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			mycar1(i);

			rectangle(r,k,r+50,50+k);
			rectangle(s,l,s+50,50+l);
				if(i+55>=r&&i<=(r+50)&&k>=240&&k<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  a=0;     //resets score to 0.
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  kbhit();
				  while(getch()!=13)  //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(i+55>=s&&i<=(s+50)&&l>=240&&l<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  a=0;
				  kbhit();
				  while(getch()!=13) //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(k==430)
				{
					k=0;
					a=a+10;  //increases score
					randomize();
					r=210+rand()%150;   // generates a random number between 210 and 210+150
				}
				else if(l==430)
				{
					l=0;
					a=a+10;
					randomize();
					s=210+rand()%150;
				}
				else
				{
					k+=5;
					l+=5;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==32) //space button
				{
					outtextxy(200,200,"GAME PAUSED");
					printf("Your Current Score is : %d :",a);
					outtextxy(200,250,"Press Space bar to Resume");
					while(getch()!=32) //to hold the screen till Space is pressed
					{
						getch();
					}
				}
				if(ch==75&&i>220)  //move left
				{
					if(i==220)
					{
						i=225;
					}
					i-=20;
				}

				if(ch==77&&i<337) //move right
				{
					if(i==345) //max value of x coordinate of car
					{
						i=345; // to remain on the track
					}
					i+=20;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	}
	getch();
}
void play2()
{
int i,j,k,l,r,s,ch;
	cleardevice();
	randomize();
	r=210+rand()%150; // generates a random number between 210 and 210+150
	s=210+rand()%150;
	for(k=0;k<433;k+=5)
	{
	for(l=-200;l<433;l+=5)
	{
		for(i=220;i<345;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			mycar2(i);

			rectangle(r,k,r+50,50+k);
			rectangle(s,l,s+50,50+l);
				if(i+55>=r&&i<=(r+50)&&k>=240&&k<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  a=0;     //resets score to 0.
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  kbhit();
				  while(getch()!=13)  //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(i+55>=s&&i<=(s+50)&&l>=240&&l<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  a=0;
				  kbhit();
				  while(getch()!=13) //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(k==430)
				{
					k=0;
					a=a+10;
					randomize();
					r=210+rand()%150;   // generates a random number between 210 and 210+150
				}
				else if(l==430)
				{
					l=0;
					a=a+10;
					randomize();
					s=210+rand()%150;
				}
				else
				{
					k+=5;
					l+=5;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==32) //space button
				{
					outtextxy(200,200,"GAME PAUSED");
					printf("Your Current Score is : %d :",a);
					outtextxy(200,250,"Press Space bar to Resume");
					while(getch()!=32) //to hold the screen till Space is pressed
					{
						getch();
					}
				}
				if(ch==75&&i>220)  //move left
				{
					if(i==220)
					{
						i=225;
					}
					i-=20;
				}

				if(ch==77&&i<337) //move right
				{
					if(i==345) //max value of x coordinate of car
					{
						i=345; // to remain on the track
					}
					i+=20;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	}
	getch();
}
void play3()
{
int i,j,k,l,r,s,ch;
	cleardevice();
	randomize();
	r=210+rand()%150; // generates a random number between 210 and 210+150
	s=210+rand()%150;
	for(k=0;k<433;k+=5)
	{
	for(l=-200;l<433;l+=5)
	{
		for(i=220;i<345;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			mycar3(i);

			rectangle(r,k,r+50,50+k);
			rectangle(s,l,s+50,50+l);
				if(i+55>=r&&i<=(r+50)&&k>=240&&k<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  a=0;     //resets score to 0.
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  kbhit();
				  while(getch()!=13)  //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(i+55>=s&&i<=(s+50)&&l>=240&&l<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  a=0;
				  kbhit();
				  while(getch()!=13) //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(k==430)
				{
					k=0;
					a=a+10;
					randomize();
					r=210+rand()%150;   // generates a random number between 210 and 210+150
				}
				else if(l==430)
				{
					l=0;
					a=a+10;
					randomize();
					s=210+rand()%150;
				}
				else
				{
					k+=5;
					l+=5;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==32) //space button
				{
					outtextxy(200,200,"GAME PAUSED");
					printf("Your Current Score is : %d :",a);
					outtextxy(200,250,"Press Space bar to Resume");
					while(getch()!=32) //to hold the screen till Space is pressed
					{
						getch();
					}
				}
				if(ch==75&&i>220)  //move left
				{
					if(i==220)
					{
						i=225;
					}
					i-=20;
				}

				if(ch==77&&i<337) //move right
				{
					if(i==345) //max value of x coordinate of car
					{
						i=345; // to remain on the track
					}
					i+=20;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	}
	getch();
}
void play4()
{
int i,j,k,l,r,s,ch;
	cleardevice();
	randomize();
	r=210+rand()%150; // generates a random number between 210 and 210+150
	s=210+rand()%150;
	for(k=0;k<433;k+=5)
	{
	for(l=-200;l<433;l+=5)
	{
		for(i=220;i<345;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			mycar4(i);

			rectangle(r,k,r+50,50+k);
			rectangle(s,l,s+50,50+l);
				if(i+55>=r&&i<=(r+50)&&k>=240&&k<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  a=0;     //resets score to 0.
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  kbhit();
				  while(getch()!=13)  //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(i+55>=s&&i<=(s+50)&&l>=240&&l<=370)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  gotoxy(240,200);
				  printf("Your Score is : %d : ",a);
				  outtextxy(200,360,"Press Enter to return to the main Menu.");
				  a=0;
				  kbhit();
				  while(getch()!=13) //to hold the screen till enter is pressed
				  {
				  getch();
				  }
				  menu();
				}
				if(k==430)
				{
					k=0;      //resets the value of k
					a=a+10;  //increment of score
					randomize();
					r=210+rand()%150;   // generates a random number between 210 and 210+150
				}
				else if(l==430)
				{
					l=0;
					a=a+10;
					randomize();
					s=210+rand()%150;
				}
				else
				{
					k+=5;
					l+=5;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==32) //space button
				{
					outtextxy(200,200,"GAME PAUSED");
					printf("Your Current Score is : %d :",a);
					outtextxy(200,250,"Press Space bar to Resume");
					while(getch()!=32) //to hold the screen till Space is pressed
					{
						getch();
					}
				}
				if(ch==75&&i>220)  //move left
				{
					if(i==220)
					{
						i=225;
					}
					i-=20;
				}

				if(ch==77&&i<337) //move right
				{
					if(i==345) //max value of x coordinate of car
					{
						i=345; // to remain on the track
					}
					i+=20;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	}
	getch();
}

int score()
{      //	int a=10;
		gotoxy(500,200);
		printf("%d",a);
}

void select_car()
{
	int x1=95,y1=50,x2=195,y2=391,z=120,c=0;
	cleardevice();
	while(1)
	{
	car_choice();
	car1();
	car2();
	car3();
	car4();
	rectangle(x1,y1,x2,y2);  //cursor

	if(kbhit())
	{
		c=getch();
		if(c==27)      //esc is pressed
		{
			exit(0);
		}
		else if(c==75) //left arrow key
			{
				cleardevice();
				car_choice();
				car1();
				car2();
				car3();
				car4();
				x1=x1-z;
				x2=x2-z;
				rectangle(x1,y1,x2,y2);
			}
			else if(c==77&&x1==455) //right arrow key and the cursor at the rightmost box
			{
				cleardevice();
				car_choice();
				car1();
				car2();
				car3();
				car4();
				x1=95;
				x2=195;
				rectangle(x1,y1,x2,y2);
			}
		else if(c==77)   //right arrow key
			{
				cleardevice();
				car_choice();
				car1();
				car2();
				car3();
				car4();
				x1=x1+z;
				x2=x2+z;
				rectangle(x1,y1,x2,y2);
			}

		else if(c==13)   // if Enter key is pressed.
			{
				if(x1==95)   //position of the cursor
				{
					play3();  //car to be selected
				}
				else if(x1==215)
				{
					play1();
				}
				else if(x1==335)
				{
					play2();
				}
				else if(x1==455)
				{
					play4();
				}
				else
				{
					play();
				}
			}
	}
}
}

void car_choice()
{
	int i=120;
	bar3d(325-i-i,45,325+i+i,45,2,1);
	bar3d(325-i-i,396,325+i+i,396,2,1);

	bar3d(325,45,327,396,2,1);
	bar3d(325-i,45,327-i,396,2,1);
	bar3d(325-i-i,45,327-i-i,396,2,1);
	bar3d(325+i,45,327+i,396,2,1);
	bar3d(325+i+i,45,327+i+i,396,2,1);

	settextstyle(7,0,5);//font_direction_fontsize
	outtextxy(265-i,80,"1");
	outtextxy(265,80,"2");
	outtextxy(265+i,80,"3");
	outtextxy(265+i+i,80,"4");

    setcolor(GREEN);
	settextstyle(7,0,4);
	outtextxy(200,410,"select your car");
	settextstyle(1,0,2);
	outtextxy(180,450,"Use arrow keys to navigate.");
}

void car1()
{
	int i=120;
	setcolor(RED);
	rectangle(250,250,280,290); //roof
	rectangle(245,290,285,300);
	setcolor(GREEN);
	rectangle(235,230,295,320);      //main outline of car
	arc(265,250,10,170,35);     //side mirror's
	arc(265,190,10,170,15);     //front light

	line(235,230,250,250); //top_right_corner
	line(295,230,280,250); //top_left_corner
	line(245,300,235,320); //bottom_left_corner
	line(285,300,295,320); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(265,185,250,210);
	line(250,210,265,200);
	line(265,185,280,210);
	line(280,210,265,200);

	setcolor(GREEN);
	ellipse(265,320,180,360,30,20);//trunk lid
	ellipse(265,230,0,180,30,55);//bonet
}

void mycar1(int i)
{
	setcolor(RED);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(GREEN);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,300);

	setcolor(GREEN);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonet
	delay(D);
	cleardevice();
}

void car2()
{
	int i=120;
	setcolor(BLUE);
	rectangle(250+i,250,280+i,290); //roof
	rectangle(245+i,290,285+i,300);
	setcolor(YELLOW);
	rectangle(235+i,230,295+i,320);      //main outline of car
	arc(265+i,250,10,170,35);     //side mirror's
	arc(265+i,190,10,170,15);     //front light

	line(235+i,230,250+i,250); //top_right_corner
	line(295+i,230,280+i,250); //top_left_corner
	line(245+i,300,235+i,320); //bottom_left_corner
	line(285+i,300,295+i,320); //bottom_right_corner

	//design on bonet
	setcolor(BLUE);
   /*	line(265+i,185,250+i,210);
	line(250+i,210,265+i,200);
	line(265+i,185,280+i,210);
	line(280+i,210,265+i,200); */
	ellipse(265+i,215,10,170,20,20);

	setcolor(YELLOW);
	ellipse(265+i,320,180,360,30,20);//trunk lid
	ellipse(265+i,230,0,180,30,55);//bonet
}

void mycar2(int i)
{
	setcolor(BLUE);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(YELLOW);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(BLUE);
   /*	line(265+i,185,250+i,210);
	line(250+i,210,265+i,200);
	line(265+i,185,280+i,210);
	line(280+i,210,265+i,200); */
	ellipse(30+i,315,10,170,20,20);

	setcolor(YELLOW);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonet
	delay(D);
	cleardevice();
}

void car3()
{
//car3
	int i=120;
	setcolor(RED);
	rectangle(250-i,250,280-i,290); //roof
      //	rectangle(245-i,290,285-i,300);
	setcolor(RED);
	rectangle(235-i,230,295-i,320);      //main outline of car
	arc(265-i,250,10,170,35);     //side mirror's
	arc(265-i,190,10,170,15);     //front light

	line(235-i,230,250-i,250); //top_right_corner
	line(295-i,230,280-i,250); //top_left_corner
	line(250-i,290,235-i,320); //bottom_left_corner
	line(280-i,290,295-i,320); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(265-i,185,250-i,210);
	line(250-i,210,265-i,200);
	line(265-i,185,280-i,210);
	line(280-i,210,265-i,200);

	setcolor(RED);
	ellipse(265-i,320,180,360,30,20);//trunk lid
	ellipse(265-i,230,0,180,30,55);//bonet
}
void mycar3(int i)
{
//car3
	setcolor(RED);
	rectangle(15+i,350,45+i,390); //roof
      //	rectangle(10+i,290,50+i,300);
	setcolor(RED);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(15+i,390,0+i,420); //bottom_left_corner
	line(45+i,390,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,300);

	setcolor(RED);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(D);
	cleardevice();
}

void car4()
{
	int i=120;
	setcolor(GREEN);
	rectangle(250+i+i,250,280+i+i,290); //roof
	rectangle(245+i+i,290,285+i+i,300);
	setcolor(WHITE);
	rectangle(235+i+i,230,295+i+i,320);      //main outline of car
	arc(265+i+i,250,10,170,35);     //side mirror's
	arc(265+i+i,190,10,170,15);     //front light

	line(235+i+i,230,250+i+i,250); //top_right_corner
	line(295+i+i,230,280+i+i,250); //top_left_corner
	line(245+i+i,300,235+i+i,320); //bottom_left_corner
	line(285+i+i,300,295+i+i,320); //bottom_right_corner

	//design on bonet
	setcolor(GREEN);
	line(265+i+i,185,250+i+i,210);
	line(250+i+i,210,265+i+i,200);
	line(265+i+i,185,280+i+i,210);
	line(280+i+i,210,265+i+i,200);

	setcolor(WHITE);
	ellipse(265+i+i,320,180,360,30,20);//trunk lid
	ellipse(265+i+i,230,0,180,30,55);//bonnet
}
void mycar4(int i)
{
	setcolor(GREEN);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(WHITE);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(GREEN);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,400);

	setcolor(WHITE);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(D);
	cleardevice();
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
	delay(D);
	cleardevice();
}

void track()
{
		setcolor(WHITE);
		bar3d(205,0,205,getmaxy(),5,3);//left boundary
		bar3d(405,0,405,getmaxy(),5,3);//right boundary
		line(280,0,280,getmaxy());  //lanes
		line(340,0,340,getmaxy());
	       //	line(400,0,400,getmaxy());
}

void loading() //loading screen
{
	int i;
	settextstyle(8,0,7);
	outtextxy(130,100,"Car Racing");
	settextstyle(6,0,2);
	outtextxy((getmaxx()/2)-30,getmaxy()-130,"LOADING");
	for(i=0;i<200;i++) //loading animation
	{
		setcolor(RED);
		rectangle((getmaxx()/2)-100+i,getmaxy()-100,(getmaxx()/2)+100,getmaxy()-80);
		delay(10);
	}
}
void menu()
{

int i,k,x1=210,y1=200,x2=435,y2=247,a;
	cleardevice();
	while(1)
	{
		h1();
		h2();
		rectangle(x1,y1,x2,y2);   //cursor

	if(kbhit()) // detects the pressing of key
	{
	   k=getch();
	   {
		if(k==72&&y1==200) //cursor at the top
		{
			y1=200+160;     //sends the cursor to bottom
			y2=247+160;
			cleardevice();
			h1();
			h2();
			rectangle(x1,y1,x2,y2);
		}
		else if(k==80&&y2==407) //cursor at the bottom and moves to the top
		{
			x1=210; //resets the cursor position to top
			y1=200;
			x2=435;
			y2=247;
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
			if(y1==200)  // cursor on the first option
			{
			   cleardevice();
			   select_car(); // opens the game
			}
			else
			{
				exit(0);  //Exits the game.
				closegraph();
			}
		}

		else if(k==27)
		{
			exit(0);
			closegraph();
		}
	   }
	}
	}
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
	outtextxy(220,200,"Play Game");
	outtextxy(220,240,"High Score");
	outtextxy(220,280,"Instructions");
	outtextxy(220,320,"About");
	outtextxy(220,360,"Exit");
}
