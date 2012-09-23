#include <stdio.h>

int main(void){
  int a,b,neg;
  printf("Entrez un premier nombre : ");
  scanf("%d",&a);
  printf("Entrez un deuxième nombre (de signe contraire au premier) : ");
  scanf("%d",&b);
  if(a*b>=0){
    printf("Les nombres %d et %d ne respectent pas la regle.\n",a,b);
  }
  else{
    if(a<b){
      neg=a;
    }
    else{
      neg=b;
    }
    printf("Le nombre negatif est %d.\n",neg);
  }
}
 
