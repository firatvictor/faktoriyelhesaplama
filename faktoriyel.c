#include <stdio.h>

int main()
{
    int sayi, i;
    int faktoriyel = 1;

    printf("Pozitif bir sayi girin: \n");
    scanf("%d", &sayi);

    if (sayi < 0)
        printf("Faktoriyel negatif sayilar icin tanimli degildir!\n");
    else
    {
        for (i = 1; i <= sayi; i++)
        {
            faktoriyel *= i;
        }

        printf("%d! = %d", sayi, faktoriyel);
    }
    return 0;
}