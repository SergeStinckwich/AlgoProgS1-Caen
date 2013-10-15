#include <stdio.h>

int f(int a, int b)

{
  int c;
  // a = 1, b = 2, r = r0
  c = a + b;
  b = c;
  return(c);
  // a = 1, b = 3, r = r0}

int main(void)
{
  int a=1, b = 2, r;
  // Avant appel de f : a = 1, b = 2, r = r0
  r = f(a,b);
  // Après appel de f : a = 1, b = 2, r = 3

  return 0;
}
