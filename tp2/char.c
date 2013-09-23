#include <stdio.h>

int main(void){
	printf("%d\n", (int)'A'); //65 dans la table ASCII
	printf("%d\n", (int)'a'); //97 dans la table ASCII

	printf("%c\n", (char)65); //A
	printf("%c\n", (char)66); //B
	return 0;
}