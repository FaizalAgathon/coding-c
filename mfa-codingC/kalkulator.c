#include <stdio.h>

void tambah(int a,int b){
    printf("%d",a+b);
}

void kurang(int a,int b){
    printf("%d",a-b);
}

void kali(int a,int b){
    printf("%d",a*b);
}

void bagi(float a,float b){
    printf("%.2f",a/b);
}

int main(){
    int n1,n2;
    char o;

    printf("Operasi : ");
    scanf("%d%c%d",&n1,&o,&n2);

    if (o == '+'){
        printf("Hasil : ");
        tambah(n1,n2);
    }

    else if (o == '-'){
        printf("Hasil : ");
        kurang(n1,n2);
    }

    else if (o == '*'){
        printf("Hasil : ");
        kali(n1,n2);
    }

    else if (o == '/'){
        printf("Hasil : ");
        bagi(n1,n2);
    }

    return 0;
}


