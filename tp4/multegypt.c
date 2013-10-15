#include <stdio.h>

// (1001)bin >> 1 = (100)bin (/2)
// (1001)bin << 1 = (10010)bin (*2)

// 4 >> 1 = 2
// 4 << 1 = 8
// 3 >> 1 = 2
// 3 << 1 = 6

int main(void)
{
	int x, y, t;
	int r;

	printf("x=?");
	scanf("%d", &x);
	printf("y=?");
	scanf("%d", &y);
	printf("%d*%d", x, y);
	if (x>y){t=x;x=y;y=t;} // Pour que x < y
	r = 0;
	while (x!=0){
	// x pair
	if (x%2==0) {x=x>>1;y=y<<1;}
	// x impair
	else {x--; r=r+y;}
	printf(" = %d*%d+%d", x, y, r);
}
	printf(" = %d\n", r);
	return 0;
}