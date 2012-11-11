#include <stdio.h>

int main(void)

{
	int maxIntValue;
	int x,y;

	printf("Nombre d'octets pour int =%d\n", (int)sizeof(int));

	x = 2;
	y = (int)sizeof(int)*8 - 1;
	maxIntValue = 1;
	for (int i=1; i<=y; i++)
		maxIntValue = maxIntValue*x;

	printf("Valeur maximale pour int =%d\n",maxIntValue-1);

	printf("Nombre d'octets pour long =%d\n", (int)sizeof(long));

	long maxLongValue;
	x = 2;
	y = (int)sizeof(long)*8 - 1;
	maxLongValue = 1;
	for (int i=1; i<=y; i++)
		maxLongValue = maxLongValue*x;

	printf("Valeur maximale pour int =%ld\n",maxLongValue-1);

}