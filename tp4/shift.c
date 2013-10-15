#include <stdio.h>

int main(void)
{
	int i;
	// Shift à droite (>>) = division par 2
	printf("%d\n", 8 >> 1); // 4

	// Shift à droite (>>) = division par 4
	printf("%d\n", 8 >> 2); // 2

	// Shift à gauche (<<) = multiplication par 2
	printf("%d\n", 8 << 1); // 16

	// Shift à gauche (<<) = multiplication par 4
	printf("%d\n", 8 << 2); // 32

	return 0;
}