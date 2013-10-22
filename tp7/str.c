#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char ch1[] = "\0";
	char ch2[] = "Hello\0";
	char ch3[] = " World\0";
	char ch4[15];

	// int strlen(char [])

	printf("strlen(\"%s\") = %d\n", ch1, (int)strlen(ch1));
	printf("strlen(\"%s\") = %d\n", ch2, (int)strlen(ch2));
	printf("strlen(\"%s\") = %d\n", ch3, (int)strlen(ch3));

	// int strcmp(char [], char[])
	printf("strcmp(\"%s\", \"%s\") = %d\n", ch1, ch2, (int)strcmp(ch1, ch2)); // <0
	printf("strcmp(\"%s\", \"%s\") = %d\n", ch2, ch2, (int)strcmp(ch2, ch2)); //0
	printf("strcmp(\"%s\", \"%s\") = %d\n", ch2, ch3, (int)strcmp(ch2, ch3)); // >0

	// int strcat(char [], char[])
	strcat(ch4, ch2);
	strcat(ch4, ch3);
	printf("%s\n", ch4);
	return 0;
}