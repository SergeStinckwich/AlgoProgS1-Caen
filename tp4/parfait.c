#include <stdio.h>

// Affichage des nombres parfaits inférieur à n

int main(void){
	int i, j;
	int n;
	int sommeDiviseurs;

	printf("n=?");
	scanf("%d", &n);
	for (i=1; i<n; i++){ // Pour tous les nombres entiers < n
		sommeDiviseurs = 0;
		j=1;
		while (j<=i/2){ // Pour tous les diviseurs de i
			if (i%j==0) sommeDiviseurs = sommeDiviseurs+j;
			j++;
		}
		if (i==sommeDiviseurs) printf("%d ", i);
	}
	printf("\n");
	return 0;
}