#include <stdio.h>
int main(void)
{

  int i;
  int n;
  n = 10;

  printf("for loop\n");

  for (i=0; i<=n; i++)
    printf("%d ", i);

  printf("\n");
  printf("while loop\n");

  i = 0;
  while(i<=n)
    {
      printf("%d ", i);
      i++;
    }

  printf("\n");
}
