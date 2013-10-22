#include <stdio.h>

int longueur(char c[]) {
	int i = 0;
	while (c[i]!='\0') i++;
	return i;
}

int main(void) {
	
	char ch1[6] = "Hello\0";
	char ch2[1]= "\0";
	char ch3[11] = "0123456789\0";


	printf("%d\n", longueur(ch1)); //5
	printf("%d\n", longueur(ch2)); // 0
	printf("%d\n", longueur(ch3)); // 10

	return 0;
}