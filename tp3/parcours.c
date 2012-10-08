#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int somme;
	int sommeIndice;
	int max;

	printf("Entrer une valeur pour n=\n");
	scanf("%d", &n);
	int t[n];

	for (int i=0; i <=n-1; i++)
		t[i] = rand()%1000;
	somme = 0;
	sommeIndice = 0;
	max = t[0];

	for (int i=0; i<=n-1; i++)
		{
			somme = somme + t[i];
			sommeIndice=sommeIndice+i;
			if (t[i]>max)
				max = t[i];
		}
	printf("Somme des éléments du tableau=%d\n", somme);
	printf("Somme des indice du tableau=%d\n", sommeIndice);
	printf("Maximum du tableau=%d\n", max);
}