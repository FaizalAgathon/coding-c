#include <stdio.h>

void p_panjang_luas(int p,int l){
    printf("Jwb : L = Panjang x Lebar\n");
    printf("        = %d x %d\n",p,l);
    printf("        = %d\n",p*l);
}

void p_panjang_keliling(int p,int l){
    printf("Jwb : L = 2 x (Panjang + Lebar)\n");
    printf("        = 2 x (%d + %d)\n",p,l);
    printf("        = %d\n",2*(p+l));
}

int main(){

    p_panjang_luas(3,2);
    p_panjang_keliling(5,6);

    return 0;
}