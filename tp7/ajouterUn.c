#include <stdio.h>

void ajouterUn(int *a){
	(*a)++;
}

void echanger(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(void) {
	int x=2, y = 1;
	ajouterUn(&x); // ajout de 1 à x
	ajouterUn(&x); // ajout de 1 à x
	ajouterUn(&y); // ajout de 1 à y

	echanger(&x,&y); // échange des valeurs de x et y
	printf("x = %d, y = %d\n", x, y);
	// x = 2, y = 4
}