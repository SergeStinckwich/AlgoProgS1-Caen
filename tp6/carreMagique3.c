#include <stdio.h>

int main()
{
	int c[3][3] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
	int diagonale1 = c[0][0]+c[1][1]+c[2][2];
	int diagonale2 = c[2][0]+c[1][1]+c[0][2];
	int ligne1 	   = c[1][0]+c[1][1]+c[1][2];
	int ligne2 	   = c[2][0]+c[2][1]+c[2][2];
	int ligne3     = c[2][0]+c[2][1]+c[2][2];
	int col1       = c[0][0]+c[1][0]+c[2][0];
	int col2       = c[0][1]+c[1][1]+c[2][1];
	int col3       = c[0][2]+c[1][2]+c[2][2];
	if ((diagonale1 == ligne1)&&
		(diagonale1 == ligne2)&&
		(diagonale1 == ligne3)&&
		(diagonale1 == col1)&&
		(diagonale1 == col2)&&
		(diagonale1 == col3)&&
		(diagonale1 == diagonale2))
		printf("Carre magique\n");
	return 0;
}