#include <stdio.h>

int main(void)
{
  char STOP='.';
  char c;

  int numberOfChar;
  
  printf("Entrer votre phrase>");
  scanf("%c", &c);
  while (c != '.')
    {
      numberOfChar = numberOfChar+1;
      scanf("%c", &c);
    }
  printf("Le nombre de caractères est %d\n", numberOfChar);
}
