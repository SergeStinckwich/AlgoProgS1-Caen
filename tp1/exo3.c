#include <stdio.h>

int main(void){
  int age;
  printf("Quel est votre age  ?  ");
  scanf("%d",&age);
  printf("\nVous etes ");
  if (age<11){
    printf("un enfant");
  }
  else if (age<18){
    printf("un adolescent");
  }
  else if (age<60){
    printf("un adulte");
  }
  else{
    printf("une personne agee");
  }
  printf(". \n");
}
