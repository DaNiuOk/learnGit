/*# include <stdio.h>
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
# include <stdio.h>
   # include <math.h> 
   main()
   {
   	float x,y;
   	printf("请输入一个数：");
   	scanf("%f",&x);
//or
   	if (x<0){
   		y=x*x;
	   } else if (x>=0&&x<10){
	   y=-0.5*x+10;	
	   } else {
	   	y=x-sqrt(x);
	   }
	   if (x>=0){
	   	if (x>=10){
	   		y=x-sqrt(x);
		   } else {
		   	y=-0.5*x+10;
		   }
	   } else {
	   	y=x*x;
	   }
   	printf("y=%f",y);
   	# include <stdio.h>
   	int main()
   	{
   		int C,M,E,sum=0;
   		printf("请依次输入语文、数学、英语成绩：");
   		scanf("%d%d%d",&C,&M,&E);
   		sum=C+M+E;
   		printf("总成绩为：%d",sum);
   		# include <stdio.h>
   		int main()
   		{
   			long x=0,y=1,z=1,i,t;
   			for (i=2;i<65;i++){
   				t=x+y;
   				z=z+t;
   				x=y;
   				y=t;
			   }
			   printf("一共要放%ld个谷粒。",z);
			  # include <stdio.h>
			   int main()
			   {
			   	int i,sum=1,n;
			   	printf("求2的n次方，请输入n：");
			   	scanf("%d",&n);
			   	for (i=1;i<=n;i++){
			   		sum=sum*2;
				   }
				   printf("2的n次方为：%d",sum);
 //冒泡排序法 
	# include <stdio.h>
	int main()
	{
		int i,j,t;
		int a[8]={38,49,65,76,13,27,97,30};
		printf("The array before sorted:");
		for (i=0;i<8;i++)
		printf("%-3d",a[i]);
		for (i=0;i<7;i++){
			for (j=i+1;j<8;j++){
				if (a[i]>a[j]){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		printf("The array after sorted:");
		for (i=0;i<8;i++)
		printf("%-3d",a[i]);*/
//简单选择排序法
    # include <stdio.h>
	int main()
	{
		int i,j,t;
		int a[8]={38,49,65,76,13,27,97,30};
		printf("The array before sorted:");
		for (i=0;i<8;i++)
		printf("%3d",a[i]);
		for (i=0;i<7;i++){
			int temp=0;
			int min=i;
			for (j=i+1;j<8;j++)	{
				if (a[min]>a[j]){
					min=j;
				}
			}
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;	
	 }
	 printf("The array after sorted:");
		for (i=0;i<8;i++)
		printf("%3d",a[i]); 
		 
	




	
	//防止自动关闭
	int stop;
	printf("输入数字即可关闭。");
	scanf("%d",&stop); 
	return 0;
 } 
