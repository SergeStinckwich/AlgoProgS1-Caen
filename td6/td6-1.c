#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Personne
{
char nom[20];
char numeroTelephone[20];
} personne_t ;


void saisir_personne(personne_t * p)
{
	char nom[20];
	char numero[20];

	printf("Nom=");
	fgets(nom, sizeof(nom), stdin);
	if ((strlen(nom)>0) && (nom[strlen (nom) - 1] == '\n'))
        nom[strlen (nom) - 1] = '\0';
	strcpy(p->nom, nom); // Idem que: (*p).nom
	printf("Numero de telephone=");
	fgets(numero, sizeof(numero), stdin);
		if ((strlen(numero)>0) && (numero[strlen (numero) - 1] == '\n'))
        numero[strlen (numero) - 1] = '\0';
	strcpy(p->numeroTelephone, numero); // Idem que: (*p).numeroTelephone = numero
}

void saisir_repertoire(personne_t repertoire[], int nb)
{
	int i;
	personne_t p;
	for (i=0; i<nb; ++i)
	{
		printf("Saisie de %d sur %d\n", i+1, nb);
		saisir_personne(&repertoire[i]);
	}
}

void afficher_repertoire(personne_t repertoire[], int nb)
{
	int i;
	for (i=0; i<nb; ++i)
	{
		printf("Personne %d sur %d\n", i, nb);
		printf("Nom=%s\n", repertoire[i].nom);
		printf("Numero de telephone=%s\n", repertoire[i].numeroTelephone);
	}
}

char *chercher_personne(personne_t repertoire[], int nb, char *nom)
{
	int trouve = false;
	int i = 0;
	while ((!trouve)&&(i<nb))
	{
		if (strcmp(repertoire[i].nom, nom) == 0) trouve = 1;  
	}
	if (trouve) return (repertoire[i].numeroTelephone);
}

int main(void)
{

	personne_t repertoire[3];
	saisir_repertoire(repertoire, 3);

	int fin = false;
	int reponse;
	char nom[20];
	while (!fin)
	{
		printf("1> Afficher le repertoire\n");
		printf("2> Chercher une personne dans le repertoire\n");
		printf("3> Quitter le programme\n");

		scanf("%d", &reponse);
		if (reponse == 1) afficher_repertoire(repertoire, 3);
		if (reponse == 2) {
			printf("Nom de la personne a chercher=?");
			fgets(nom, sizeof(nom), stdin);
			if ((strlen(nom)>0) && (nom[strlen (nom) - 1] == '\n'))
        nom[strlen (nom) - 1] = '\0';
    	printf("Numero de la personne=%s", chercher_personne(repertoire, 3, nom));
		}
		if (reponse == 3) fin=true;
	}
}
