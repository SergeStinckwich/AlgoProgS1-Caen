#include <stdio.h>
int main(void)
{
int nbLines, n;
printf("Entrer un nombre de lignes pour la pyramide\n");
scanf("%d", &nbLines);
n = nbLines;
int i,j;
for ( i=0; i<nbLines*2; i=i+2)
	{
		for ( j=0; j<=n; j++)
			printf(" ");
		n--;
		for( j=0; j<=i; j++)
			printf("%d", j%10);
		printf("\n");
	}
}