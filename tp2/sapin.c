#include <stdio.h>
int main(void)
{
int nbLines, n;
int length;
printf("Entrer un nombre de lignes pour la pyramide=");
scanf("%d", &nbLines);
n = nbLines;
for (int i=0; i<nbLines*2; i=i+2)
	{
		for (int j=0; j<=n; j++)
			printf(" ");
		n --;
		for(int j=0; j<=i; j++)
			printf("X");
		printf("\n");
	}
length = (nbLines*2)/3;
for (int j=0; j<=nbLines; j++)
{
	for (int i=0;i<=length+1; i++)
		printf (" ");
	for (int i=0;i<=length; i++)
		printf ("O");
	printf("\n");
}
}