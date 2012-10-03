#include <stdio.h>
int main(void)
{
char previousChar, currentChar;
char stopChar = '.';
int nbDouble = 0;
const char* askToEnterASentence = "Entrer une phrase finie par un point.";

printf("%s\n", askToEnterASentence);
scanf("%c", &currentChar);

while (currentChar != stopChar)
{
	previousChar = currentChar;
	scanf("%c", &currentChar);
	if (currentChar == previousChar)
		nbDouble++;
	// for lower and uppercase
	if (currentChar-32 == previousChar)
		nbDouble++;
}
printf("Nombre de lettres en double: %d\n", nbDouble);
}
