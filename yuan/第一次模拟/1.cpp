#include<stdio.h>
#include<math.h>
main()
{
	float x,y;
	scanf("%f",&x);
	if(x>0){
	y=x*x;}
	else 
	 if(x>=0 && x<10){
		y=-0.5*x+10;
	}else
	y=x-sqrt(x);
	printf("y=%f",y);
	return 0;
	} 
