#include <stdio.h>
int main()
{
    printf("==============================\n");
    int a;
    for (a=6;a>=0;a--){
        printf("%d ",a);
    }

    printf ("\n-----------------------------\n");

    int b;
    for (b=0;b<=3;b++){
        printf("%d \n",b);
    }

    printf ("-----------------------------\n");

    int c;
    for (c=0;c<=10;c+=2){
        printf("%d ",c);
    }

    printf("\n==============================");
    return 0;
}