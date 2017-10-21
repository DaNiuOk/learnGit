#include<stdio.h>
int main() 
{ 
    int line =10;
    int i, j;
    for (i = 1; i < line; i++){
        for (j = 1; j < line; j++){
            if (i < line - j) {
                printf("      ");
            } else {
                printf("%dx%d=%d",i,j ,i*j);
             
		    }
        }
        printf("\n");
       
    } 
} 
