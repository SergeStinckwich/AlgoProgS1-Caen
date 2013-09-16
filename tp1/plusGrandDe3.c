#include <stdio.h>

int main(void){

int n1, n2, n3;

// Lecture de n1, n2, n3
printf("n1=?");
scanf("%d", &n1);
printf("n2=?");
scanf("%d", &n2);
printf("n3=?");
scanf("%d", &n3);


int max; // maximum de n1 et n2

// Déterminer le plus grand de n1 et n2 que l'on appelle max
if (n2>n1) max = n2;
else max = n1;

// Déterminer le plus grand de max et de n3

if (n3>max) max = n3;

printf("Le plus grand est=%d\n", max);
return 0;
}