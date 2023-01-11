#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string.h>
int main()
{
  	int driver=0, mode = 0, maloi;
  	initgraph(&driver,&mode,"C:/TC/BGI");
  	if ( (maloi=graphresult()) !=0 )
  	{
  	printf("khong the khoi dong do hoa \n");
    printf("ma loi : &d \n",maloi, grapherrormsg(maloi) );
    getch();
    exit(1);
  	}
  	
  	setcolor(5);
   	int dinh[14] = {300, 100, 350, 186, 350, 286, 300, 372, 250, 286, 250, 183, 300, 100};
	setcolor(3); 
	setfillstyle(1, 11); 
	fillpoly(7,dinh);
	
	setcolor(15);
	settextstyle(4, 0, 1);
	outtextxy(260, 220, "THUY");
  	getch();
  	closegraph();
 }
