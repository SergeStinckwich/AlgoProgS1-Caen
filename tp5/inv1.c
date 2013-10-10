#include <stdio.h>

int main(void) {
	int nbCaracteres = 20;
	char phrase[21] = "ESOPERESTEETSEREPOSE\0";
	char inverse[21];
	inverse[20]='\0';
	int i;

	printf("Phrase initiale: %s\n", phrase);

	for (i=0; i<nbCaracteres;i++)
		inverse[nbCaracteres-i-1]=phrase[i];

	printf("Phrase inversée: %s\n", inverse);
	return 0;
}