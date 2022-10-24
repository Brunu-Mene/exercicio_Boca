#include <stdio.h>

int main(){
  int num;
  scanf("%d",&num);

  int soma;
  while(1){
    //redefinindo o valor da soma
    soma = 0;
    //looping para decrementar o valor de "num", somando seus digitos separadamente
    while(num > 0){
      soma = soma + num%10;
      num = num/10;
    }
    //se resultado da soma dos digitos for menor que 10, esta pronto, e sai do looping inicial
    if(soma < 10){
      break;
    }
    //condicao para continuar o looping caso o numero ainda nao esteje pronto
    else{
      num = soma;
    }
  }

  printf("RESP:%d",soma);
  return 0;
}