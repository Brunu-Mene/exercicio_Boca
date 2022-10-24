#include <stdio.h>

int main(){
  int numero, divisor = 2;
  scanf("%d",&numero);

  if(numero == 1){
    printf("Primo");
  }
  else{
    //procurando o primeiro divisor(que deixe resto nulo) do numero no intervalo de 2 <= divisor <= numero
    while(numero%divisor != 0){
      divisor = divisor + 1;
    }

    if(divisor == numero){
      printf("Primo");
    }
    else{
      printf("Nao primo");
    }
  }
  return 0;
}