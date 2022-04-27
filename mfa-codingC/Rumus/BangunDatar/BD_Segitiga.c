#include <stdio.h>

void segitiga_luas(float a,float t){
    float h = a*t/2;
    printf("Jwb : L = 1/2 x Alas x Tinggi\n");
    printf("        = 1/2 x %d x %d\n",a,t);
    printf("        = %.1f\n",h);
}

int main(){

    segitiga_luas(5,3);


    return 0;
}