#include <stdio.h>

int main(void){

int n1, n2, n3;
int m; // maximum de n1 et n2

// Lecture de n1, n2, n3
printf("n1=?");
scanf("%d", &n1);
printf("n2=?");
scanf("%d", &n2);
printf("n3=?");
scanf("%d", &n3);

// Déterminer le plus grand de n1 et n2 que l'on appelle m
if (n2>n1) m = n2;
else m = n1;

// Déterminer le plus grand de m et de n3

if (n3>m) m = n3;

printf("Le plus grand est=%d\n", m);
return 0;
}