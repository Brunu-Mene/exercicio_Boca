#include <stdio.h>

int main(){
  //atribuindo valores de entrada
  int n,m;
  scanf("%d %d",&n,&m);

  //criando a funcao de repeticao com condicao de parada caso n seja menor que m - 1;
  while(n < m-1){
    //incrementando o valor de n;
    n = n + 1;

    //verificar se o numero n e multiplo de 3 ou 4 ou 7, caso seja imprimir seu valor
    if(n % 3 == 0 || n % 4 == 0 || n % 7 == 0){
      printf("%d ",n);
    }
  }

  return 0;
}