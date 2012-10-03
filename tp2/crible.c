#include <stdio.h>

int main(void)
{
int max = 10000;
int crible [10000];
int i;

// Crible initialization

for (i=0; i<max; i++)
	crible[i] = 1;

int j=2;

while (j < max)
{
	if (crible[j] == 1)
// Put 0 in all cells multiple of j: 2j, 3j, ...
		for (i=2; i*j <max; i++)
			crible[i*j] = 0;
	j++;
}

// Print prime numbers after the end of algorithm
for (i=0; i < max; i++)
	if (crible[i] == 1) printf("%d ", i);

return 0;
}