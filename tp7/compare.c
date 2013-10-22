#include <stdio.h>

int compare(char a[], char b[]){
	// Retourne 0 si a == b
	// Retourne +1 si a > b
	// Retourne -1 si a < b
	int i = 0; // indique le caractère courant

	while ((a[i]!=0)&&(b[i]!=0)){
		if (a[i] == b[i]) i++;
		if (a[i] > b[i]) return 1;
		if (a[i] < b[i]) return -1;}
	return 0;
}

int main(int argc, char const *argv[])
{
	char ch1[6]="Hello\0";
	char ch2[8]="Bonjour\0";
	char ch3[6]="Hello\0";
	char ch4[5]="Hell\0";
	printf("%d\n", compare(ch1, ch2)); // 1
	printf("%d\n", compare(ch1, ch3)); // 0
	printf("%d\n", compare(ch2, ch1)); // -1
	printf("%d\n", compare(ch3, ch4));; // 1
	return 0;
}