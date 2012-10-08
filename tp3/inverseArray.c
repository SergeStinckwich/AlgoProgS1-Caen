#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
	int n;

	printf("Entrer le nb d'éléments du tableau=\n");
	scanf("%d", &n);
	int t[n], inverse[n];

	srand( time(NULL) );
	for (int i=0; i <=n-1; i++)
		t[i] = rand()%1000;

	for (int i=0; i<=n-1; i++)
		inverse[n-i-1] = inverse[i];

	for (int i=0; i<=n-1; i++)
		inverse[n-i-1] = inverse[i];

	int i=0;
	bool isOk = false;
	while (i<=n-1)
	{
		if (t[i] == inverse[i]) isOk = true;
			else isOk = false;
		i++;
	}

	if (isOk) printf("Ok");
		else printf("Error");
}