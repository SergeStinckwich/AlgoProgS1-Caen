#include <stdio.h>

int pgcd(int a, int b) {
  while(a != b)
    {
      if (a>b)
  { int t;
    t = b; b = a-b; a = t;
  }
      else b = b-a;
    }
   return a;
}

int main(void)
{
  int a, b;
  
  printf("a=?");
  scanf("%d", &a);
  printf("b=?");
  scanf("%d", &b);
  
  printf("pgcd(%d, %d) = %d\n", 
    a, b, pgcd(a,b));
  printf("a = %d, b= %d\n", a, b);
}
