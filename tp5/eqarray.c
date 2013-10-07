#include <stdio.h>

int main(void)
{

	const int taille1=10;
	const int taille2=10;
	int t1[10]={1,2,3,4,5,3,7,8,9,10};
	int t2[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int tableauxIdentiques=0;

	// Tester si taille1 == taille 2

	tableauxIdentiques = (taille1 == taille2);

	// Tester si quelque soit i, t1[i] == t2[i]

	if (tableauxIdentiques)
		for (i=0; i<taille1; i++)
			if (t1[i] != t2[i]) tableauxIdentiques=0;

	if (tableauxIdentiques) printf("Tableau t1 et t2 identiques\n");
		else printf("Tableau t1 et t2 non identiques\n");
	return 0;
}