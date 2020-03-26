/*
	Racing 8 changelog :
	1. Length of the code is hugely reduced. (Approx 400 lines has been removed), without changing anything in the gameplay.
	2. Car's horizontal position has been lowered.
	3. Loading animation slightly changed.
	4. All Warnings have been removed.
*/
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>    // for rand() function.
#include<stdlib.h>  // for rand() function.
#include<dos.h>      // for delay() and exit() function.
#define D 50   // Delay

int a=0; // for score
int cars=0;  // for car selection
void loading();
void car(int);
void track();
void play();
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

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	loading();  //loading screen
	menu();
	return 0;
}

void play()
{
	int i,j,k,l,r,s,ch;
	cleardevice();

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
			switch(cars)
			{
				case 1 : mycar1(i);
				break;
				case 2 : mycar2(i);
				break;
				case 3 : mycar3(i);
				break;
				case 4 : mycar4(i);
				break;
				default : car(i);
			}

		rectangle(r,k,r+50,50+k);
		rectangle(s,l,s+50,50+l);

			if(i+58>=r&&i<=(r+50)&&k>=270&&k<=420)
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
			if(i+58>=s&&i<=(s+50)&&l>=270&&l<=420)
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
				r=210+rand()%150;   // generates a random number between 210 and 210+150
			}
			else if(l==430)
			{
				l=0;
				a=a+10;
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
					cars=3;
					play();  //car to be selected
				}
				else if(x1==215)
				{
					cars=1;
					play();
				}
				else if(x1==335)
				{
					cars=2;
					play();
				}
				else if(x1==455)
				{
					cars=4;
					play();
				}
				else
				{
					cars=0;
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

	setcolor(GREEN);
	ellipse(265,320,180,360,30,20);//trunk lid
	ellipse(265,230,0,180,30,55);//bonet
}

void mycar1(int i)
{
	setcolor(RED);
	rectangle(20+i,250,40+i,280); //roof
	rectangle(15+i,280,45+i,285);
	setcolor(GREEN);
	rectangle(10+i,240,50+i,295);      //main outline of car
	arc(30+i,255,10,170,24);     //side mirror's
	arc(30+i,220,10,170,10);     //front light

	line(50+i,240,40+i,250); //top_right_corner
	line(10+i,240,20+i,250); //top_left_corner
	line(15+i,285,10+i,295); //bottom_left_corner
	line(45+i,285,50+i,295); //bottom_right_corner

	//design on bonet

	setcolor(GREEN);
	ellipse(30+i,295,180,360,20,10);//trunk lid
	ellipse(30+i,240,0,180,20,30);//bonet
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
	ellipse(265+i,215,10,170,20,20);

	setcolor(YELLOW);
	ellipse(265+i,320,180,360,30,20);//trunk lid
	ellipse(265+i,230,0,180,30,55);//bonet
}

void mycar2(int i)
{
	setcolor(BLUE);
	rectangle(20+i,250,40+i,280); //roof
	rectangle(15+i,280,45+i,285);
	setcolor(YELLOW);
	rectangle(10+i,240,50+i,295);      //main outline of car
	arc(30+i,255,10,170,24);     //side mirror's
	arc(30+i,220,10,170,10);     //front light

	line(50+i,240,40+i,250); //top_right_corner
	line(10+i,240,20+i,250); //top_left_corner
	line(15+i,285,10+i,295); //bottom_left_corner
	line(45+i,285,50+i,295); //bottom_right_corner

	//design on bonet
	setcolor(BLUE);
	arc(30+i,230,10,170,10);

	setcolor(YELLOW);
	ellipse(30+i,295,180,360,20,10);//trunk lid
	ellipse(30+i,240,0,180,20,30);//bonet
	delay(D);
	cleardevice();
}

void car3()
{
	int i=120;
	setcolor(RED);
	rectangle(250-i,250,280-i,290); //roof
	setcolor(RED);
	rectangle(235-i,230,295-i,320);      //main outline of car
	arc(265-i,250,10,170,35);     //side mirror's
	arc(265-i,190,10,170,15);     //front light

	line(235-i,230,250-i,250); //top_right_corner
	line(295-i,230,280-i,250); //top_left_corner
	line(250-i,290,235-i,320); //bottom_left_corner
	line(280-i,290,295-i,320); //bottom_right_corner

	setcolor(RED);
	ellipse(265-i,320,180,360,30,20);//trunk lid
	ellipse(265-i,230,0,180,30,55);//bonet
}
void mycar3(int i)
{
	setcolor(RED);
	rectangle(20+i,250,40+i,280); //roof
	setcolor(RED);
	rectangle(10+i,240,50+i,295);      //main outline of car
	arc(30+i,255,10,170,24);     //side mirror's
	arc(30+i,220,10,170,10);     //front light

	line(50+i,240,40+i,250); //top_right_corner
	line(10+i,240,20+i,250); //top_left_corner
	line(20+i,280,10+i,295); //bottom_left_corner
	line(40+i,280,50+i,295); //bottom_right_corner

	setcolor(RED);
	ellipse(30+i,295,180,360,20,10);//trunk lid
	ellipse(30+i,240,0,180,20,30);//bonnet
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

	setcolor(WHITE);
	ellipse(265+i+i,320,180,360,30,20);//trunk lid
	ellipse(265+i+i,230,0,180,30,55);//bonnet
}
void mycar4(int i)
{
	setcolor(GREEN);
	rectangle(20+i,250,40+i,280); //roof
	rectangle(15+i,280,45+i,285);
	setcolor(WHITE);
	rectangle(10+i,240,50+i,295);      //main outline of car
	arc(30+i,255,10,170,24);     //side mirror's
	arc(30+i,220,10,170,10);     //front light

	line(50+i,240,40+i,250); //top_right_corner
	line(10+i,240,20+i,250); //top_left_corner
	line(15+i,285,10+i,295); //bottom_left_corner
	line(45+i,285,50+i,295); //bottom_right_corner

	setcolor(WHITE);
	ellipse(30+i,295,180,360,20,10);//trunk lid
	ellipse(30+i,240,0,180,20,30);//bonnet
	delay(D);
	cleardevice();
}

void car(int i)
{
	rectangle(15+i,380,45+i,420); //roof
	rectangle(10+i,420,50+i,430);
	rectangle(0+i,360,60+i,450);      //main outline of car
	arc(30+i,380,10,170,35);     //side mirrors
	arc(30+i,320,10,170,15);     //front light
	ellipse(30+i,450,180,360,30,20);//trunk lid
	ellipse(30+i,360,0,180,30,55);//bonnet
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
}

void loading() //loading screen
{
	int i;
	settextstyle(8,0,7);
	outtextxy(130,100,"Car Racing");
	settextstyle(6,0,2);
	outtextxy((getmaxx()/2)-30,getmaxy()-130,"LOADING");
	for(i=0;i<400;i+=2) //loading animation
	{
		setcolor(RED);
		rectangle((getmaxx()/2)-200+i,getmaxy()-100,(getmaxx()/2)+200,getmaxy()-80);
		delay(10);
	}
}
void menu()
{
	int i,k,x1=210,y1=200,x2=435,y2=247;
	cleardevice();
	while(1)
	{
		h1();
		h2();
		rectangle(x1,y1,x2,y2);   //cursor

	if(kbhit()) // detects the pressing of key
	{
	   k=getch();
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
			else if(y1==240)
			{
				menu();   //High Score
			}
			else if(y1==280)
			{
				menu(); //Instructions
			}
			else if(y1==320)
			{
				menu(); //About
			}
			else if(y1==360)
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