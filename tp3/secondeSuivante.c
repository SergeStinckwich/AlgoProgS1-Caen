#include <stdio.h>

int main(void){
	int heures, minutes, secondes;

	heures = 0;
	minutes = 0;
	secondes = 0;
	int i,j,k;

	while(1){
		printf("%02d:%02d:%02d\n", heures, minutes, secondes);
		// Temporisation
		for (i = 0; i <= 1000; i++)
			for (j = 0; j <= 1000; j++)
				for (k = 0; k <= 1000; k++);
		secondes++;
		if (secondes > 59) {secondes = 0; minutes++;}
		if (minutes > 59) {minutes = 0; heures++;}
		if (heures > 23) heures = 0;
	}

	return 0;
}