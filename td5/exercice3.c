#include <stdio.h>

// L'opérateur d'indicage [] est une abréviation : a[i] est la même chose que  *(a+i)
// Comme l'addition est commutative : *(a+i) est la même chose que *(i+a)
// Donc a[i] est la même chose que i[a]

int main(void)
{
  char c1[] = "Un";
  char c2[] = "Deux";
  char c3[] = "Trois";
  char *tab[] = {c1, c2, c3};

// 140734623505232
  printf("%ld\n", (long int)&tab[0]);

// Un
  printf("%s\n", *tab);

// Un
  printf("%s\n", tab[0]);
  
// Deux  
  printf("%s\n", tab[1]);

// Deux
  printf("%s\n", *(tab+1));

// 85
  printf("%d\n", **tab);

// 85
  printf("%d\n", *tab[0]);

// 68
  printf("%d\n", **(tab+1));

// 68
  printf("%d\n", **(tab+1));

// 68
  printf("%d\n", *tab[1]);

// 114
  printf("%d\n", *(tab[2] +1));

// 114
  printf("%d\n", tab[2][1]);
}
