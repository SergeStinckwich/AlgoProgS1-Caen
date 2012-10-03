#include <stdio.h>

int main(void)

{
	int valueMax, valueMin;
	int value;

	printf("Entrer la valeur min de l'intervalle\n");
	scanf("%d", &valueMin);

	do
	{
		printf("Entrer la valeur max de l'intervalle (inférieure à la valeur min)\n");
		scanf("%d", &valueMax);
	}
	while (valueMax < valueMin);

	do
	{
		printf("Entrer une valeur comprise entre %d et %d\n", valueMin, valueMax);
		scanf("%d", &value);

	}
	while ((value > valueMax)||(value < valueMin));

printf("La valeur %d est bien comprise entre %d et %d\n", value, valueMin, valueMax);
}