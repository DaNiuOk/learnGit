#include<stdio.h>
int main() 
{
	int x,y;
   for (x=1;x<12;x++){
   	for (y=1;y<12;y++){
   		if (y>5-x&&y>x-5&&y<x+5&&y<15-x){
   			printf("*");
		   } else {
		   	printf(" ");
		   }
	   }
	   printf("\n");
   } 




	
	//防止自动关闭
	int stop;
	printf("输入数字即可关闭。");
	scanf("%d",&stop); 
	return 0;
 } 
	

