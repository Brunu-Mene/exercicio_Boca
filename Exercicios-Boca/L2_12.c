#include <stdio.h>

int main() {
  char x;
  int pri = 0;
  while(1)
  {
    scanf("%c",&x);
    //verificando se eh a primeira vez no looping
    if(pri == 0){
      pri = 1;
      printf("RESP:");
    }
     //substituindo o " " por "_"
     if(x==' '){
      x = '_';
     }
     //verificando se nao eh o caracter de quebra do looping
     else if((x=='.')||(x=='?')||(x=='!')){
      printf("%c",x);
      break;
     }

    printf("%c",x);
  }
  return 0;
}