#include <stdio.h>
main()
{
	int a[64]={1,1},i,sum=2;
	
	for(i=2;i<=63;i++){
		a[i]=a[i-1]+a[i-2];
		sum=sum+a[i];
	}
	
	printf("%d",sum);
}	
 
