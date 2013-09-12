#include <stdio.h>

int main(void)
{
  int x;
  int y;

  printf("x=?");
  scanf("%d", &x);
  printf("y=?");
  scanf("%d", &y);
  
  printf("%d + %d = %d\n", x, y, x+y);
  printf("%d - %d = %d\n", x, y, x-y);
  printf("%d * %d = %d\n", x, y, x*y);
  return 0;
}
