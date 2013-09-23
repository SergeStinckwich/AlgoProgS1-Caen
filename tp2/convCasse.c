#include <stdio.h>


int main(void)
{

	char c;
	char result;

	do{
		scanf("%c", &c);
		if ((c>='A')&&(c<='Z')) result = (char) ((int)c+32);
		if ((c>='a')&&(c<='z')) result = (char) ((int)c-32);
		if (c==' ') result=' ';
		if (c=='.') result='.';
		printf("%c", result);
	}while(c!='.');

	printf("\n");
	return 0;
}