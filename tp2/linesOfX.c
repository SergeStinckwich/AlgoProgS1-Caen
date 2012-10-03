#include <stdio.h>

int main(void)

{
	int numberOfX;
	int i;
	printf("Entrer nombre de X?");
	scanf("%d", &numberOfX);
  
  for (i=1; i<=numberOfX; i++)
  	printf("X");
}
