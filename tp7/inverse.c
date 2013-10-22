#include <stdio.h>
#include <string.h>

void inverse(char a[], char b[]) {
	int i=0;
	int n = strlen(a);
	while (a[i]!='\0') {
		b[i] = a[n-1-i];
		i++;}
}

int main(void)
{
	char ch1[6]="Hello\0";
	char ch2[6];
	inverse(ch1, ch2);
	printf("Inverse de \"%s\" = \"%s\"\n", ch1, ch2);	
	return 0;
}