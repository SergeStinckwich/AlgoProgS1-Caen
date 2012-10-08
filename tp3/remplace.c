#include <stdio.h>

int main(void)
{
	int size = 3;
	char destination[11] = "ABCDEFGHIJ";
	int indiceDestination = 4;
	char source[9] = "MNOPQRST";
	int indiceSource = 5;
	for (int i = 0; i<size; i++)
		destination[indiceDestination+i-1] = source[indiceSource+i-1];

	for (int i = 0; i<10; i++)
		printf("%c", destination[i]);
	printf("\n");
}
