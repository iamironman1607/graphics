#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int gd= DETECT,gm;
int n,x[10],y[10],i;
void draw(){
	
	for(i=0;i<n;i++){
		line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
	}
	
}
void shear(int fact){
	for(i=0;i<n;i++){
		
		x[i]=x[i]+y[i]*fact;
	}
	
}
int main(){
	printf("Enter the size of N: ");
	scanf("%d",&n);
	printf("Enter the sll coordinates: ");
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	printf("Enter shearing factor: ");
	int sh;
	scanf("%d",&sh);
	initgraph(&gd,&gm," ");
	setcolor(RED);
	draw();
	shear(sh);
	setcolor(YELLOW);
	draw();
	
	getch();
	closegraph();
}

