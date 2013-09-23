#include <stdio.h>

int main(void)
{
  const char stopCharacter='.';
  char currentChar;

  int numberOfChar;
  int numberOfSpace;
  const int maximumNumberCharacter = 100;

  numberOfChar = 0;
  numberOfSpace = 0;
  printf("Entrer votre phrase (finir par .)=");
  scanf("%c", &currentChar);
  while ((currentChar != stopCharacter)&&
      (numberOfChar<maximumNumberCharacter)){
      if (currentChar == ' ') numberOfSpace ++;
      numberOfChar ++;
      scanf("%c", &currentChar);
    }
  printf("Le nombre de caractères est %d.\n", numberOfChar);
  printf("Le nombre d'espace est %d.\n", numberOfSpace);
}
