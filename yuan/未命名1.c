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




	
	//��ֹ�Զ��ر�
	int stop;
	printf("�������ּ��ɹرա�");
	scanf("%d",&stop); 
	return 0;
 } 
	

