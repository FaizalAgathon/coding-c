#include <stdio.h>

void persegi_luas(int s){
    printf("Jwb : L = Sisi x Sisi\n");
    printf("        = %d x %d\n",s,s);
    printf("        = %d\n",s*s);
}

void persegi_keliling(int s){
    printf("Jwb : L = 4 x Sisi\n");
    printf("        = 4 x %d\n",s);
    printf("        = %d\n",4*s);
}

int main(){

    persegi_luas(3);
    persegi_keliling(6);

    return 0;
}