#include <stdio.h>

int main(){
  int n,m;
  scanf("%d %d",&n,&m);

  printf("RESP:");

  n = n+1;
  //looping para percorrer os numero do intervalo n< NUMERO < m
  while(n < m){
    int numero;
    int divisor = 2;
    numero = n;

    if(numero != 1){  
    //looping para descobrir o primeiro divisor do numero em questao
      while(numero % divisor != 0){
        divisor = divisor + 1;
      }
      if(divisor == numero){
        printf("%d ",numero);
      }
    }
    //caso onde numero == 1
    else{
      printf("%d ",numero);
    }
    
    n = n + 1;
  }
  return 0;
}