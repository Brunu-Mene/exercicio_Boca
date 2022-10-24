#include "stdio.h"
#include "math.h"

typedef struct{
  float peso;
  float QtdAnimais;
  float preco;
  float QtdRacao;
}tAnimal;

int main(void) {
  int n,aux=0;
  float QtdRacao,precof=0;
  scanf("%d",&n);
  tAnimal A;
  while(aux<n)
  {
    aux++;
    scanf("%f %f %f %f",&A.QtdAnimais,&A.QtdRacao,&A.peso,&A.preco);
    QtdRacao=A.peso*(A.QtdRacao*A.QtdAnimais/100);
    precof=precof+(QtdRacao*A.preco);
  }
  printf("Valor total:%.2f reais\n",precof);
  return 0;
}