#include <stdio.h>
#include "math.h"

int main (void)
{
  float a, b, c;
  float delta;

  // Lecture de a,b,c
  printf("a=?");
  scanf("%f", &a);
  printf("b=?");
  scanf("%f", &b);
  printf("c=?");
  scanf("%f", &c);

  // Est-ce que l'on a une equation du premier degré ?

  if (a==0) {
    printf("Equation du premier degré\n");
    if (b==0) 
      if (c == 0) printf("Une infinité de solutions\n");
      else printf("Pas de solution\n");
    else
      printf("Une solution x = %f\n", -c/b);
  }
  else {
    printf("Equation du second degré\n");
    
    // Calcul de delta
    delta = b*b-4*a*c;
    
    if (delta == 0)
      printf("Une solution x = %f\n", -b/(2*a));
    if (delta < 0)
      printf("Pas de solutions\n");
    if (delta > 0)
      printf("Deux solutions x1 = %f et x2 = %f\n",
	     (- b + sqrt(delta))/(2*a),
	     (- b - sqrt(delta))/(2*a));
  }

  return 0;
}
