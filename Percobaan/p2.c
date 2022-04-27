#include <stdio.h>
int main()
{
    int x,y,z;

    printf("==============================\n");
    printf("Masukkan nilai x : ");
    scanf("%d",&x);
    printf("Masukkan nilai y : ");
    scanf("%d",&y);
    printf("Masukkan nilai z : ");
    scanf("%d",&z);

    if ((x>y)&&(x>z))
    {
        printf("x paling besar");
    }
    else if ((y>z)&&(y>x))
    {
        printf("y paling besar");
    }
    else if ((z>y)&&(z>x))
    {
        printf("z paling besar");
    }
    else
    {
        printf("ketiganya bernilai sama");
    }
    printf("\n==============================");
    return 0;
}




























