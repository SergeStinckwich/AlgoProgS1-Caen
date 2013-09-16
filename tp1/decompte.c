#include <stdio.h>


int main(void)
{
	int n;
	int nEstPositif, finDecompte; // Variables booléennes

	nEstPositif = 0; // false

	// Lecture de n
	while (!nEstPositif){
		printf("n=?");
		scanf("%d", &n);
		nEstPositif = (n > 0);
	}

	finDecompte = 0;
	while (!finDecompte){
		printf("%d\n", n);
		n = n - 1;
		finDecompte = (n == 0);
	}
	printf("BOUM !\n");

	return 0;
}