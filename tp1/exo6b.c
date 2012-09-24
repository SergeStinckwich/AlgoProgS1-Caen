#include <stdio.h>

int main(void){
  int n1, n2, negate;
  printf("Entrez un premier nombre : ");
  scanf("%d",&n1);
  printf("Entrez un deuxième nombre (de signe contraire au premier) : ");
  scanf("%d", &n2);
  if(n1*n2>=0){
    printf("Les nombres %d et %d ne respectent pas la regle.\n", n1, n2);
  }
  else{
    if(n1<n2){
      negate=n1;
    }
    else{
      negate=b;
    }
    printf("Le nombre negatif est %d.\n",negate);
  }
}
 
