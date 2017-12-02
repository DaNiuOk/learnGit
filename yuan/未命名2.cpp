#include<stdio.h>
main()
{int a,b;
for(a=1;a<10;a++){
for(b=1;b<a;b++);{if(a<b){printf(" ");
}else{printf("*");
}printf("");
}printf("\n");
}	


}
