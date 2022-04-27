#include <stdio.h>

// ----- Percobaan Nampilin panjang array dan nyebutin isi per index array -----

int main()
{
    int nilai_saya[] = {90, 80, 75, 76, 70, 95, 67};
    int l = sizeof(nilai_saya)/sizeof(nilai_saya[0]);

    puts ("================================");

    for (int i = 0; i < l; i++){
        printf ("Indeks ke - %d",i);
        printf (" = %d \n",nilai_saya[i]);
    }

    puts ("================================");

    return 0;
}