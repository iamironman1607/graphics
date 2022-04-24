#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//DDA Line Drawing Algo
int main()
{
	int gd=DETECT, gm;
int x0, y0, x1,y1,i, step,xn,yn, dx, dy;
//clrscr();
initgraph(&gd, &gm, " ");
printf("Enter the starting co:");
scanf("%d%d%d%d", &x0,&y0,&x1,&y1);
dx= x1-x0;
dy= y1-y0;
if(abs(dx)>abs(dy)) step=abs(dx);
else step=abs(dy);

xn= dx/step;
yn=dy/step;

for(i=0;i<=step;i++)
{
	putpixel(x0,y0,BLUE);
	delay(60);
	x0=x0+xn;
	y0=y0+yn;
}
getch();
closegraph();

}



