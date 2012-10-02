#include <stdio.h>
int main(void)
{
char previousChar, currentChar;
char stopChar = '.';
int nbDouble = 0;

printf("Entrer une phrase finie par un point.\n");
scanf("%c", &currentChar);

while (currentChar != stopChar)
{
	previousChar = currentChar;
	scanf("%c", &currentChar);
	if (currentChar == previousChar)
		nbDouble++;
}
printf("Nombre de lettres en double: %d\n", nbDouble);
}
