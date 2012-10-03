#include <stdio.h>
int main(void)
{
int nbLines;

printf("Entrer un nombre de lignes pour la pyramide\n");
scanf("%d", &nbLines);

for (int i=0; i<=nbLines; i++)
	{
		for (int j=0; j<=nbLines-i; j++)
			printf(" ");
		for(int j=0; j<=i; j++)
			printf("%d", j%10);
		printf("\n");
	}
}