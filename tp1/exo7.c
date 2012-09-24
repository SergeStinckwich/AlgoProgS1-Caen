#include <stdio.h>

int main(void){
  int day, month;
  printf("Entrez votre jour de naissance : ");
  scanf("%d", &day);
  printf("Entrez votre mois de naissance : ");
  scanf("%d", &month);
  printf("\nVous etes du signe du ");
  if((month==3 && day>=21) || (month==4 && day<=21)){
    printf("Belier");
  } 
  if((month==4 && day>=22) || (month==5 && day<=21)){
    printf("Taureau");
  }
  else{
    if((month==5 && day>=22) || (month==6 && day<=21)){
      printf("Gemeaux");
    }
    else{
      if((month==6 && day>=22) || (month==7 && day<=22)){
	printf("Cancer");
      }
      else{
	if((month==7 && day>=23) || (month==8 && day<=22)){
	  printf("Lion");
	}
	else{
	  if((month==8 && day>=23) || (month==9 && day<=22)){
	    printf("Vierge");
	  }
	  else{
	    if((month==9 && day>=23) || (month==10 && day<=22)){
	      printf("Balance");
	    }
	    else{
	      if((month==10 && day>=23) || (month==11 && day<=22)){
		printf("Scorpion");
	      }
	      else{
		if((month==11 && day>=23) || (month==12 && day<=21)){
		  printf("Sagittaire");
		}
		else{
		  if((month==12 && day>=22) || (month==1 && day<=20)){
		    printf("Capricorne");
		  }
		  else{
		    if((month==1 && day>=21) || (month==2 && day<=19)){
		      printf("Verseau");
		    }
		    else{
		      if((month==2 && day>=20) || (month==3 && day<=20)){
			printf("Poissons");
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
  printf("\n");
}
