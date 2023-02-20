
/*//walking man in rain
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int x=50,y=340,i,rx,ry, x0,y0,legs=0,d=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

while(!kbhit())//checks the console for recent keystroke
{
  cleardevice();

//man
x0=getmaxx();
y0=getmaxy();
circle(x,y,10);//head
circle(x+5,y,1);//eye
circle(x-5,y,1);//eye
line(x+2,y+4,x-2,y+4);//mouth
line(x,y+10,x,y+30);//neck
line(x,y+30,x,y+60);//body
//line(x,y+30,x,y+70);//body
line(x,y+20,x-20,y+40);//left hand
line(x,y+20,x+20,y+40);//right hand
line(0,430,639,430);//road
line(0,450,x0,450);
line(x+20,y+40,x+30,y+30);//umbrella
line(x+30,y+30,x+30,y-70);//umbrella body
pieslice(x+30,y-30,0,180,55);
	//tree
   arc(450,395,150,195,130);
   arc(150,405,350,30,130);
   arc(270,300,110,270,50);
   arc(330,300,270,100,40);
   arc(290,250,350,190,50);
 //house
   rectangle(390, 300, x0,430);
   rectangle(420,330,450,350);
   rectangle(600,330,630,350);
   rectangle(470,330,550,430);
   line(500,200,390,300);
   line(500,200,x0,300);
    for(i=0;i<500;i++)
	{
	//rain
	    rx=rand()%x0;
	    ry=rand()%y0-70;
	    if(rx>=(x-40)&&rx<=(x+110))
		if(ry>=(y-50)&&ry<=479)
		    continue;
	    line(rx-10,ry+10,rx,ry);
	}
//legs
	if(legs)
	{
	    if(d<20)
		d+=4;
	    else
		legs=0;
	    line(x,y+60,x-d,y+90);
	    line(x,y+60,x+d,y+90);
	}
	else
	{
	    if(d>0)
		d-=4;
	    else
		legs=1;
	    line(x,y+60,x-d,y+90);
	    line(x,y+60,x+d,y+90);
	}
	delay(200);
	x=(x+10)%500;//move to end of screen
       }

getch();
closegraph();
return 0;
}*/