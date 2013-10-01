#include <stdio.h>

int main(void)
{
// Entrer les bornes inf et sup d'un intervalle
// Déterminer si une valeur n est comprise dans cet intervalle

	int inf, sup; // bornes inf et supérieure d'un intervalle
	int n;
	int intervalleOk;

	intervalleOk = 0;
	while(!intervalleOk){
		printf("Borne inf=?");
		scanf("%d", &inf);
		printf("Borne sup=?");
		scanf("%d", &sup);
		intervalleOk = (inf<=sup);
		if (!intervalleOk) printf("Intervalle incorrect\n");
	}

	printf("n=?");
	scanf("%d", &n);
	if ((n>=inf)&&(n<=sup))
		printf("%d est compris dans l'intervalle [%d, %d]\n",
			n, inf, sup);
		else printf("%d n'est pas compris dans l'intervalle [%d, %d]\n",
			n, inf, sup);

// Entrer deux intervalles: i1, i2
// Déterminer si i1 est avant i2, ou i1 est après i2 ou 
// les deux intervalles se chevauchent

	int inf1, inf2, sup1, sup2;

	printf("Entrer deux intervalles\n");

	intervalleOk = 0;
	while(!intervalleOk){
		printf("Borne inf=?");
		scanf("%d", &inf1);
		printf("Borne sup=?");
		scanf("%d", &sup1);
		intervalleOk = (inf1<=sup1);
		if (!intervalleOk) printf("Intervalle incorrect\n");
	}

	intervalleOk = 0;
	while(!intervalleOk){
		printf("Borne inf=?");
		scanf("%d", &inf2);
		printf("Borne sup=?");
		scanf("%d", &sup2);
		intervalleOk = (inf2<=sup2);
		if (!intervalleOk) printf("Intervalle incorrect\n");
	}

	if (sup1 <= inf2)
			printf("L'intervalle [%d, %d] est avant [%d, %d].",
				inf1, sup1, inf2, sup2);
	if (sup2 <= inf1)
			printf("L'intervalle [%d, %d] est apres [%d, %d].",
				inf1, sup1, inf2, sup2);
	if (((inf2>=inf1)&&(sup2<=sup1)))
		printf("L'intervalle [%d, %d] est inclue dans [%d, %d].",
			inf2, sup2, inf1, sup1);
	else
		if (((inf1>=inf2))&&(sup1<=sup2))
		printf("L'intervalle [%d, %d] est inclue dans [%d, %d].",
			inf1, sup1, inf2, sup2);
		else
			if (((inf2>=inf1)&&(inf2<=sup1))||((sup1>=inf2)&&(sup1<=sup2)))
			printf("L'intervalle [%d, %d] et [%d, %d] se chevauchent.", 
				inf1, sup1, inf2, sup2);
	printf("\n");
	return 0;
}