#include<stdio.h>
int main() 
{
	int a,b,c;
	for(a=1;a<10;a++) {
			for(b=1;b<10;b++){
				if(a>3&&a<7){
					printf(" ");
				}else{
					printf("*");
				}
				if(b>3&&b<7){
					printf(" ");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
		return 0;
	}
