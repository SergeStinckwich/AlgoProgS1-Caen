#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, occurences;
	int n;

	printf("Entrer le nb d'éléments du tableau=\n");
	scanf("%d", &n);
	int t[n];

	srand( time(NULL) );
	for (int i=0; i <=n-1; i++)
		t[i] = rand()%1000;

	printf("Entier=\n");
	scanf("%d", &i);

	occurences = 0;
	for (int i=0; i <=n-1; i++)
		if (t[i] == i)
			occurences++;

	printf("L'entier %d a %d occurences\n", i, occurences);
}