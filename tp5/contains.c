#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Test 1
	//	char phrase1[]="ordinateur\0";
	//	char phrase2[]="dur notaire\0";
	// Test 2
	char phrase1[]="orxinateur\0";
	char phrase2[]="dur notaire\0";

	int i,j;
	char courant1, courant2;
	int trouve;

	// Retourner vrai si chacun des caractères de phrase1 apparait
	// au moins une fois dans phrase2

	i = 0;
	courant1 = phrase1[0];
	trouve=1;
	while ((courant1!='\0')&&(trouve)) {
		// Vérifier si courant1 est dans phrase 2
		j = 0;
		courant2 = phrase2[0];
		trouve = 0; // caractère courant1 trouvé dans phrase2
		while ((courant2!='\0')&(!trouve)) {
			trouve = (courant1 == courant2);
			printf("On compare %c ==? %c\n", courant1, courant2);
			if (!trouve) {
				j++;
				courant2 = phrase2[j];
			}
		}
		// si le caractère courant1 appartient à la phrase2
		// passer au caractère suivant
		if (!trouve) printf("%c n'est pas dans la phrase 2\n", courant1);
		if (trouve) {
			printf ("%c est dans la phrase 2\n", courant1);
			i++;
			courant1 = phrase1[i];
			}
	}

	if (trouve) printf("Les caractères de phrase1 apparaissent au moins une fois dans phrase2\n");
	if (!trouve) printf("Caractères de phrase1 qui n'apparaissent pas au moins dans phrase2\n");
	return 0;
}