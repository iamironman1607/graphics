#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int gd= DETECT, gm;
int n, x[20],y[20],i;
float sfx, sfy;
void draw();
void scale();

int main(){
	printf("Enter the number of n:");
	scanf("%d", &n);
	printf(" Enter Coordinate: ");
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	printf("scaling Coordinate: ");
	scanf("%f%f",&sfx,&sfy);
	initgraph(&gd, &gm," ");
	setcolor(CYAN);
	draw();
	scale();
	setcolor(YELLOW);
	draw();
	
	getch();
	closegraph();
}
void draw(){
	for(i=0;i<n;i++)
	{
		line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
	}
}
void scale(){
	for(i=0;i<n;i++)
	{
		x[i]=x[0]+(int)((float)(x[i]-x[0])*sfx);
		y[i]=y[0]+(int)((float)(y[i]-y[0])*sfy);
	}
	
}


