#include <stdio.h>

int main(void)

{
	int numberOfX;
	printf("Entrer nombre de X?");
	scanf("%d", &numberOfX);
  
  for (int i=1; i<=numberOfX; i++)
  	printf("X");
}
