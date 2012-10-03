#include <stdio.h>

int main(void)
{
  char stopCharacter='.';
  char currentChar;

  int numberOfChar;
  int numberOfSpace;
  const int maximumNumberCharacter = 100;
  const char* askASentence = "Entrer votre phrase";

  numberOfChar = 0;
  numberOfSpace = 0;
  printf("%s\n", askASentence);
  scanf("%c", &currentChar);
  while ((currentChar != stopCharacter)&&(numberOfChar<maximumNumberCharacter))
    {
      if (currentChar == ' ')
        numberOfSpace ++;
      else
        numberOfChar++;
      scanf("%c", &currentChar);
    }
  printf("Le nombre de caractères est %d\n", numberOfChar);
  printf("Le nombre d'espace est %d\n", numberOfSpace);
}
