# include <stdio.h>
int main ()
{
    int line = 15;
    int i, j;
    for (i = 1; i < line; i++){
        for (j = 1; j < line; j++){
            if (i < line - j) {
                printf(" ");
            } else {
                printf("%d", line - j);
            }
        }
        printf("\n");
    }

    
    //��ֹ�Զ��ر�
    int stop;
    printf("�������ּ��ɹرա�");
    scanf("%d",&stop); 
    return 0;
} 
