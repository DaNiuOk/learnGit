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
	printf("\n");
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
	printf("\n");
	int i,j;
	for (i=1;i<10;i++){
		for (j=1;j<=i;j++){
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
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
printf("\n");
int n,o;
for (n=1;n<10;n++){
	for (o=1;o<10;o++){
		if (n>3&&n<7&&o>3&&o<7){
			printf(" ");
		}else {
			printf("*");
		}
	}
	printf("\n");
}
printf("\n");
int p,q;
for (p=1;p<10;p++){
	for (q=1;q<10;q++){
		if (p>1&&p<9&&q>1&&q<9){
			printf(" ");
		}else {
			printf("*");
		}
	}
	printf("\n");
}
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
