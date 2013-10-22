#include <stdio.h>


int estUnChiffre(char c){
// Retourne vrai si c est un chiffre
// faux sinon
	return ((c>='0')&&(c<='9'));
}

int nombreChiffres(char a []){
	int i = 0;
	int nbChiffres=0;
	while (a[i]!='\0'){
		if (estUnChiffre(a[i])) nbChiffres++;
		i++;
	}
	return nbChiffres;
}

int main(int argc, char const *argv[])
{
	char ch1[6] = "Hello\0";
	char ch2[6] = "H1ll0\0";
	char ch3[11] = "0123456789\0";
	printf("%d\n", estUnChiffre('1')); // 1
	printf("%d\n", estUnChiffre('X')); // 0

	printf("%d\n", nombreChiffres(ch1)); // 0
	printf("%d\n", nombreChiffres(ch2)); // 2
	printf("%d\n", nombreChiffres(ch3)); // 10
	return 0;
}