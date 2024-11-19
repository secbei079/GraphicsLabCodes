#include <iostream>
#include <graphics.h>
#include <math.h>
#include<dos.h>
#include <conio.h>

using namespace std;

int main(){
	int  x1,y1,x2,y2,dx,dy;
	float Xinc,Yinc,x,y,steps;
	cout<<"enter the values for x1,y1,x2,y2"<<endl;
	cin>>x1>>y1>>x2>>y2;
	
	dx = x2-x1;
	dy = y2-y1;
	
	if(abs(dx)>abs(dy)){
	    steps = abs(dx);
	}
	else{
	    steps = abs(dy);
	}
	Xinc = (dx/steps);
	Yinc = (dy/steps);
	
	x = x1;
	y=y1;

	putpixel(x,y,5);
	delay(100);
	getch();
	return 0;
	
	
	
	
}
