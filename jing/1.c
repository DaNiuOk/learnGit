# include <stdio.h>
int main ()
{
	int a,b,c;
	printf("输入两个数：");
	scanf("%d,%d",&a,&b);
	c=a*b;
	printf("两数的乘积为%d\n",c);
	int d;
    printf("输入一个数：");
	scanf("%d",&a);
	if (d>=0)
	{
	printf("d为正数\n");
	} 
	else {
		if  (d<=0)
		{
	printf("d为负数。\n");
	} 
}
    int weekday;
    weekday=2;
    switch(weekday)
    {
    case 1:
    	printf("Today is Monday!\n");
    	break;
    case 2:
    	printf("Today is Tuesday!\n");
    	break;
    case 3:
    	printf("Today is Wednesday!\n");
    	break;
	}
//阻止程序自动关闭 
int stop;
printf("就不让你关~"); 
	scanf("%d",&stop);
	return 0 ;
}
