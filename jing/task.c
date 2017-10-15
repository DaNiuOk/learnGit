# include <stdio.h>
int main()
{
	int a,b;
	for (a=1;a<7;a++){
		for (b=1;b<=a;b++){
			printf("%d",b);
		}
		printf("\n");
	}
	
	//防止自动关闭
	int stop;
	printf("输入数字即可关闭。");
	scanf("%d",&stop); 
	return 0;
 } 
