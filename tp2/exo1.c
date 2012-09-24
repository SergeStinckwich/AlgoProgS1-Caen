#include <stdio.h>

int main(void)

{
  int value;
  int STOP = 99999;

  printf("Entrer le nombre %d pour finir\n", STOP);
  scanf("%d", &value);
  while (value != STOP)
    {
      if ((value >= 10)&&(value < 100))
        {
          printf("%d est un nombre à 2 chiffres\n", value);
        }
      printf("Entrer le nombre %d pour finir\n", STOP);
      scanf("%d", &value);
    }
  printf("Fin de l'algorithme\n");
}
