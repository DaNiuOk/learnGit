#include <stdio.h>
main()
{
	int a,b,c,sum,p;
	printf("请输入语文，数学，英语成绩："); 
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	p=sum/3;
	printf("总成绩为%d,平均成绩为%d",sum,p);
}
