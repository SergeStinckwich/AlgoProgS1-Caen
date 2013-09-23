#include <stdio.h>

int main(void)
{
  int a, b;
  int pgcd;
  
  printf("a=?");
  scanf("%d", &a);
  printf("b=?");
  scanf("%d", &b);
  
  printf("pgcd(%d, %d) =", a, b);
  while(a != b)
    {
      if (a>b)
	{ int t;
	  t = b; b = a-b; a = t;
	}
      else b = b-a;
    }
  pgcd = a;
  printf("%d\n", pgcd);
}
