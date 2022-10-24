#include <stdio.h>
#include <math.h>

int main() {
  //declarando as variaveis da formula;
  float soma=0,pi;
  int n,k=1;
  scanf("%d",&n);
  
  //aplicando o looping de repeticao enquando k for menor ou igual ao valor de entrada n;
  for(k;k<=n;k++)
  {
    //usando funcao pow da math.h para fazer k^2(k elevado ao quadrado);
    soma = (6/ (pow(k,2)) + soma);
    //usando funcao sqrt da math.h para fazer a raiz quadrado da soma;
    pi=sqrt(soma);
  }

  printf("%.6f",pi);
  return 0;
}