#include <stdio.h>

int main(void){
  int n1, n2, n3, n4, max;
  printf("Entrez quatres nombres separes par des espaces : ");
  scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
  max=n1;
  if(n2>max){
    max=n2;
  }
  if(n3>max){
    max=n3;
  }
  if(n4>max){
    max=n4;
  }
  printf("\nLe plus grand nombre est %d\n",max);
}
