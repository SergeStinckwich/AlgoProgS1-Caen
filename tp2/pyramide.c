#include <stdio.h>
int main(void)
{
int nbLines, n;
printf("Entrer un nombre de lignes pour la pyramide\n");
scanf("%d", &nbLines);
n = nbLines;
for (int i=0; i<nbLines*2; i=i+2)
	{
		for (int j=0; j<=n; j++)
			printf(" ");
		n--;
		for(int j=0; j<=i; j++)
			printf("%d", j%10);
		printf("\n");
	}
}