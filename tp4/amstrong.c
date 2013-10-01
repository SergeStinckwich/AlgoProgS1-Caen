#include <stdio.h>

// Affichage des nombres d'Amstrong (ou narcissique) inférieur à 100000
// Voir définition: http://fr.wikipedia.org/wiki/Nombre_narcissique

int main(void){
	int unites, dizaines, centaines, milliers;
	int i;

	printf("Nombres d'Amstrong inférieurs à 10000:");

	for (i=1; i<=9; i++){
		unites = i%10;
		if (unites == i) printf ("%4d\n", i);
	}
	for (i=10; i<=99; i++){
		unites = i%10;
		dizaines = (i/10)%10;
		if (unites*unites+dizaines*dizaines == i)
			printf ("%4d\n", i);
	}
	for (i=100; i<=999; i++){
		unites = i%10;
		dizaines = (i/10)%10;
		centaines = i/100;
		if (unites*unites*unites+
			dizaines*dizaines*dizaines+
			centaines*centaines*centaines == i)
			printf ("%4d\n", i);
	}
	for (i=1000; i<=9999; i++){
		unites = i%10;
		dizaines = (i/10)%10;
		centaines = (i/100)%10;
		milliers = i/1000;
		if (unites*unites*unites*unites+
			dizaines*dizaines*dizaines*dizaines+
			centaines*centaines*centaines*centaines+
			milliers*milliers*milliers*milliers
			== i) printf("%4d\n", i);
	}
printf("\n");
return 0;
}