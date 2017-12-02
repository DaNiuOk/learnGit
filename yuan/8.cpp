# include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=9;a++){
		for(b=1;b<=9-a;b++){
			printf(" ");
		}
		for(c=1;c<=9;c++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
