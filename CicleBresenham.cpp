#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int gd= DETECT, gm;

int main(){
	int xc, yc, x,y, r,d;
	initgraph(&gd, &gm," ");
	printf("Enter the inial coordinates");
	scanf("%d%d",&xc,&yc);
	printf("Radius: ");
	scanf("%d",&r);
	d=3-2*r;
	x=0;
	y=r;
	while(x<=y){
		putpixel(xc+x,yc+y,5);
		delay(50);
		putpixel(xc-x,yc+y,5);
		delay(50);
		putpixel(xc-x,yc-y,5);
		delay(50);
		putpixel(xc+x,yc-y,5);
		delay(50);
			putpixel(xc+y,yc+x,5);
			delay(50);
		putpixel(xc-y,yc+x,5);
		delay(50);
		putpixel(xc-y,yc-x,5);
		delay(50);
		putpixel(xc+y,yc-x,5);
		delay(50);
		
		if(d<0){
			d+=4*x+6;
			x=x+1;
		}
		else{
			d+=4*x-4*y+10;
			x=x+1;
			y=y-1;
		}
		
		
		
	}
	
	getch();
	closegraph();
	return 0;
	
	
}
