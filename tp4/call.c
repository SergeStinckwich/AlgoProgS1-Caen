#include <stdio.h>

void callByValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
 
    printf("Valeur de x = %d et y = %d à l'intérieur de la fonction callByValue.\n", x,y);
}

void callByReference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x=10, y=20;

    printf("Valeur de x = %d et y = %d.\n", x,y);
 
    printf("Appel de fonction callByValue avec passage des paramètres par valeur.\n");
    callByValue(x, y);
    printf("Valeur de x = %d et y = %d.\n", x,y);

    printf("Appel de fonction callByReference avec passage des paramètres par référence.\n");
    callByReference(&x, &y);
    printf("Valeur de x = %d et y = %d.\n", x,y);

    return 0;
}