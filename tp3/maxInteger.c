#include <stdio.h>

int main(void)

{
	int maxIntValue;
	int long maxLongValue;
	int x,y;

	printf("Nombre d'octets pour int =%d\n", (int)sizeof(int));

	x = 256;
	y = (int)sizeof(int)-1;
	maxIntValue = 1;
	for (int i=1; i<=y; i++)
		maxIntValue = maxIntValue*x;

	printf("Valeur maximale pour int =%d\n",maxIntValue);

	printf("Nombre d'octets pour long =%d\n", (int)sizeof(long));

	x = 256;
	y = (int)sizeof(long)-1;
	maxLongValue = 1;
	for (int i=1; i<=y; i++)
		maxIntValue = maxLongValue*x;

	printf("Valeur maximale pour long =%ld\n",maxLongValue);

}