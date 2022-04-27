#include <stdio.h>
int main()
{
    int nilai_saya[10] = {90, 80, 75, 76, 70, 95, 67};
    int l = sizeof(nilai_saya)/sizeof(*nilai_saya);

    puts ("================================");

    for (int i = 0; i < l; i++){
        printf ("Indeks ke - %d",i);
        printf (" = %d \n",nilai_saya[i]);
    }

    puts ("================================");

    return 0;
}