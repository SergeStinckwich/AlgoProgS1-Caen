#include <stdio.h>

int main(void){
	int x,y;
	int entreeValide;

	entreeValide = 0; // faux
// Lire les deux nombres x et y jusqu'à validité
	while(!entreeValide){
		printf("x=?");
		scanf("%d", &x);
		printf("y=?");
		scanf("%d", &y);
		entreeValide = (((x>=0)&&(y<0))||((x<0)&&(y>=0)));
	}

// Afficher le nombre négatif
	if (x<0) printf("Nombre négatif=%d\n", x);
	else printf("Nombre négatif=%d\n", y);

return 0;
}