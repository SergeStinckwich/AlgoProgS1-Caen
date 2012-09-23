#include <stdio.h>

int main(void){
  int jour,mois;
  printf("Entrez votre jour de naissance : ");
  scanf("%d",&jour);
  printf("Entrez votre mois de naissance : ");
  scanf("%d",&mois);
  printf("\nVous etes du signe du ");
  if((mois==3 && jour>=21) || (mois==4 && jour<=21)){
    printf("Belier");
  } 
  if((mois==4 && jour>=22) || (mois==5 && jour<=21)){
    printf("Taureau");
  }
  else{
    if((mois==5 && jour>=22) || (mois==6 && jour<=21)){
      printf("Gemzaux");
    }
    else{
      if((mois==6 && jour>=22) || (mois==7 && jour<=22)){
	printf("Cancer");
      }
      else{
	if((mois==7 && jour>=23) || (mois==8 && jour<=22)){
	  printf("Lion");
	}
	else{
	  if((mois==8 && jour>=23) || (mois==9 && jour<=22)){
	    printf("Vierge");
	  }
	  else{
	    if((mois==9 && jour>=23) || (mois==10 && jour<=22)){
	      printf("Balance");
	    }
	    else{
	      if((mois==10 && jour>=23) || (mois==11 && jour<=22)){
		printf("Scorpion");
	      }
	      else{
		if((mois==11 && jour>=23) || (mois==12 && jour<=21)){
		  printf("Sagittaire");
		}
		else{
		  if((mois==12 && jour>=22) || (mois==1 && jour<=20)){
		    printf("Capricorne");
		  }
		  else{
		    if((mois==1 && jour>=21) || (mois==2 && jour<=19)){
		      printf("Verseau");
		    }
		    else{
		      if((mois==2 && jour>=20) || (mois==3 && jour<=20)){
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
