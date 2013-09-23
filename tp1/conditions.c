#include <stdio.h>


int main(void){

	int estPlusGrandQueCinq = 0;
	int estPair = 0;
	int n = 4;

	estPlusGrandQueCinq = (n > 5);
	printf("%d\n", estPlusGrandQueCinq); // 0
	estPair = (n%2 == 0);
	printf("%d\n", estPair); // 1
	
	printf("%d\n", estPlusGrandQueCinq && estPair); // 0 
	printf("%d\n", !estPlusGrandQueCinq && estPair); // 1
	printf("%d\n", !estPair); // 0

	printf("%d\n", !0); // 1
	printf("%d\n", !!0); // 0

// Table de &&
	printf("%d\n", 0&&0); // 0
	printf("%d\n", 0&&1); // 0
	printf("%d\n", 1&&0); // 0
	printf("%d\n", 1&&1); // 1

// Table de ||
	printf("%d\n", 0||0); // 0
	printf("%d\n", 0||1); // 1
	printf("%d\n", 1||0); // 1
	printf("%d\n", 1||1); // 1

while (0)
 {
 	printf("Bonjour");
 }

	return 0;
}