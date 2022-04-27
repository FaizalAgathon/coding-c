#include <stdio.h>

// ----- Percobaan Kalkulator perkalian 3 angka -----

void kali (int a,int b,int c){
    int hsl;
    hsl = a * b * c;
    printf ("Hasil = %d * %d * %d\n",a,b,c);
    printf ("Hasil = %d",hsl);
}

int main(){
    puts("===========================");

    int n1,n2,n3;

    printf ("Nomor Pertama : ");
    scanf ("%d",&n1);
    printf ("Nomor Kedua : ");
    scanf ("%d",&n2);
    printf ("Nomor Ketiga : ");
    scanf ("%d",&n3);

    puts("---------------------------");

    kali (n1,n2,n3);

    puts("\n===========================");
}


























