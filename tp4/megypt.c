#include <stdio.h>


int main(void)
{
	int x,y;
	int reste;

	reste = 0;

	printf("x=?");
	scanf("%d", &x);
	printf("y=?");
	scanf("%d", &y);

	// Mets la valeur la plus petite dans x

	if (x>=y) {
		int tmp;
		tmp = x;
		x = y;
		y = tmp;
	}

	while(x!=0){
		printf("%d * %d + %d = ", x, y, reste);
		// cas ou x est pair
		if (x%2==0) {
			x = x>>1; // x = x/2
			y = y<<1; // y = y*2
		}
			else
		// cas ou x est impair
			{
				if (x>0) {
				x--; // x = x - 1
				reste = reste + y;}
				else {
					x++;
					reste = reste-y;}
			}
	}
	printf("%d\n", reste);
	return 0;
}