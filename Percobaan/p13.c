#include <stdio.h>

void main(){
    int angka[] = {1,4,2,6,8,3,5};
    int l = sizeof(angka)/sizeof(angka[0]);

    printf ("panjang : %d",l);

}