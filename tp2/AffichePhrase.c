#include <stdio.h>

int main(void){
  const char STOP='.';
  char c;
  int numberOfChar=-1;
  
  printf("Entrer votre phrase (finir par .)=");
  
  do {
    numberOfChar = numberOfChar+1;
    scanf("%c", &c);
    } while (c!= STOP);
  printf("Le nombre de caractères est %d\n",
    numberOfChar);
}
