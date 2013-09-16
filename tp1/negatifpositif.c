#include <stdio.h>

int main(void)

{
	int nb1, nb2;

	int unPositifUnNegatif;
	unPositifUnNegatif = 0;
	while (!unPositifUnNegatif){
	// Lire les deux nombres
		printf("Entrer deux nombres (un positif et un négatif)\n");
		printf("Nombre1=?");
		scanf("%d", &nb1);
		printf("Nombre2=?");
		scanf("%d", &nb2);
		unPositifUnNegatif = (((nb1 < 0)&&(nb2 >= 0))||((nb1 >= 0)&&(nb2 < 0)));
		printf("%d\n",unPositifUnNegatif);
	}

	// Afficher le nombre négatif

	if (nb1 < 0 ) printf("Nombre négatif=%d\n", nb1);
			else printf("Nombre négatif=%d\n", nb2);
  return 0;
}
