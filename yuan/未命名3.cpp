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
	//��ֹ3�����Զ��ر� 
	int stop;
	printf("��ظ�����~"); 
	scanf("%d",&stop);	
	return 0 ;
}
