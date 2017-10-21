# include <stdio.h>
int main ()
{
	int a,b;
	for (a=1;a<4;a++){
		for (b=1;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
	int c,d;
	for (c=3;c>0;c--) {
		for (d=1;d<=c;d++){
			printf("*");
		}
		printf("\n");
	}
	int e,f;
	for (e=3;e>0;e--){
		for (f=3;f>=e;f--){
			printf("%d",e);
		}
		printf("\n");
	} 
	int g,h;
	for (g=1;g<4;g++){
		for (h=3;h>=g;h--){
			printf("%d",h);
		}
		printf("\n");
	}
	int i,j;
	for (i=1;i<10;i++){
		for (j=1;j<=i;j++){
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
	 int k,l;
int m=10;
for (k=1;k<m;k++){
	for (l=1;l<m;l++){
		if (k<m-l){
			printf("       ");
		}else {
			printf ("%d*%d=%2d ",(m-l),k,(m-l)*k);
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
