#include <stdio.h>

int main(void)
{
	int nbValue;
	int value;
	int i;
	int max, positionMax;
	int min, positionMin;
	int entreeValide;

	entreeValide = 0;
	while (!entreeValide){
		printf("Nb de valeurs (>=1) =?");
		scanf("%d", &nbValue);
		entreeValide = (nbValue >=1);
		if (!entreeValide) printf("Entree invalide !\n");
	}

	scanf("%d", &value);
	max = value; positionMax = 1;
	min = value; positionMin = 1;
	for (i=2; i<=nbValue;i++){
		scanf("%d", &value);
		if (value>max) {
			max = value;
			positionMax = i;}
		if (value<min) {
			min = value;
			positionMin = i;}
		}

	printf("%d est la valeur max à la position %d\n", max, positionMax);
	printf("%d est la valeur min à la position %d\n", min, positionMin);

	return 0;
}