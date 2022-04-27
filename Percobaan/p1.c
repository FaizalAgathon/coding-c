#include <stdio.h>

// ----- Percobaan Volume Balok -----

int main()
{
    printf("===============================\n");

    int v,p,l,t;

    printf("-----DIKETAHUI-----\n");
    printf ("Panjang : ");
    scanf ("%d",&p);
    printf ("Lebar : ");
    scanf ("%d",&l);
    printf ("Tinggi : ");
    scanf ("%d",&t);

    printf ("-----DITANYAKAN-----\n");
    printf ("Volume Balok?\n");

    printf ("-----JAWABAN-----\n");
    v = p * l * t;
    printf ("Volume = Panjang x Lebar x Tinggi\n");
    printf ("Volume = %d x ",p);
    printf ("%d x ",l);
    printf ("%d \n",t);
    printf ("Volume = %d",v);

    printf("\n===============================");
    return 0;
}
















