#include <stdio.h>

int main(void){
  int day;
  printf("Quel jour voulez-vous tester ? ");
  scanf("%d",&day);
  printf("\nCe jour est un ");
  if (day%7==1){
    printf("Lundi");
  }
  else{
    if (day%7==2){
      printf("Mardi");
    }
    else{
      if (day%7==3){
	printf("Mecredi");
      }
      else{
	if (day%7==4){
	  printf("Jeudi");
	}
	else{
	  if (day%7==5){
	    printf("Vendredi");
	  }
	  else{
	    if (day%7==6){
		printf("Samedi");
	    }
	    else{
	      if (day%7==0){
		printf("Dimanche");
	      }
	    }
	  }
	}
      }
    }
  }
  printf("\n");
}
