#include <stdio.h>

int main(){

    int n;
    int arr[n];
    int a,i,j;

    printf("jumlah isi : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("isi ke-%d : ",i);
        scanf("%d",&arr[n]);
    }

    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

/**
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            if (arr [j+1] < arr[j]){
                a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
            }
        }
    }

    for (int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
**/
    return 0;
}