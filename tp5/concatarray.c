#include <stdio.h>

int longueur_chaine(char t[]){
	char c;
	int l = 0;

	c = t[0];
	while (c!='\0'){
		l = l + 1;
		c = t[l];
		}
	return l;
}

int main(void) {
	char t1 [] = "Bonjour\0";
	char t2 [] = " World\0";
	int i;

	// Calcul de la longueur de t1 et t2
	int l1, l2;

	l1 = longueur_chaine(t1);
	l2 = longueur_chaine(t2);

	char t3 [l1+l2+1];
	
	for (i=0;i<l1+l2; i++)
		if (i<l1)
		t3[i]=t1[i];
		else t3[i]=t2[i-l1];		

	// Afficher t3
	t3[l1+l2] = '\0';
	printf("%s\n", t3);
	return 0;
}