#include <stdio.h>

void tambah2(int a,int b){
    printf("%d",a+b);
}

void kali2(int a,int b){
    printf("%d",a*b);
}

int main(){
    int n1,n2;

    printf("angka 1 : ");
    scanf("%d",&n1);
    printf("angka 2 : ");
    scanf("\n%d",&n2);

    printf("Hasil = ");
    tambah2(n1,n2);
    printf("\nHasil = ");
    kali2(n1,n2);

    return 0;
}

