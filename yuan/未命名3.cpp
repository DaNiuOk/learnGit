#include<stdio.h>
main()

{   
	int a,b,c;
	for(a=1;a<10;a++){
		for(b=1;b<10;b++){
				if(a>3&&a<7)
			printf(" ");
			else
			printf("*");  
			if(b>3&&b<7)
			printf(" ");
			else
			printf("*");
			
		}
	printf("\n");
	
	}
	//阻止3程序自动关闭 
	int stop;
	printf("你关个看看~"); 
	scanf("%d",&stop);	
	return 0 ;
}
