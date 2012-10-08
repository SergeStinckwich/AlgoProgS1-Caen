#include <stdio.h>

int main(void)
{
	int x,y;
	int power;
	printf("Entrer une valeur pour x=\n");
	scanf("%d",&x);
	printf("Entrer une valeur pour y=\n");
	scanf("%d",&y);

	power = 1;
	for (int i=1; i<=y; i++)
		power = power*x;

	printf("%d ^ %d = %d\n", x, y, power); 
}