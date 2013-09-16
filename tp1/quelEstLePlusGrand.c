#include <stdio.h>

int main(void){

	int n;
	int max;
	int finLecture;

	finLecture = 0;
	max = 0;
	while (!finLecture){
		int entreeValide = 0;
		while(!entreeValide){
			printf("n=?");
			scanf("%d", &n);
			entreeValide = (n>0)||(n== -1);
		}
		if (n > max) max = n;
		finLecture = (n == -1);
	}
	printf("Maximum=%d\n", max);
	return 0;
}