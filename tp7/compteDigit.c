#include <stdio.h>


int nombreChiffres(char a []){

}

int main(int argc, char const *argv[])
{
	char ch1[6] = "Hello\0";
	char ch2[6] = "H1ll0\0";
	char ch3[10] = "0123456789\0"
	printf("%d", nombreChiffres(ch1)); // 0
	printf("%d", nombreChiffres(ch2)); // 2
	printf("%d", nombreChiffres(ch3)); // 10
	return 0;
}