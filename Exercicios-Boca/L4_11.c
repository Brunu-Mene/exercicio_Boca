#include "stdio.h"
#include "math.h"

typedef struct{
  int cod;
  float preco;
}tBoleto;

int main(void) {
  int n,aux=0,CodMaior,CodMenor;
  float MaiorPreco=0.0,MenorPreco=100000,soma=0;
  tBoleto b;
  scanf("%d",&n);
  while(aux<n)
  {
    aux++;
    scanf("%d %f",&b.cod,&b.preco);
    if(b.preco>MaiorPreco)
    {
      MaiorPreco=b.preco;
      CodMaior=b.cod;
    }
    if(b.preco<MenorPreco)
    {
      MenorPreco=b.preco;
      CodMenor=b.cod;
    }
    soma+=b.preco;
  }
  printf("Mais caro: Cod:%d valor:%.2f\n",CodMaior,MaiorPreco);
  printf("Mais barato: Cod:%d valor:%.2f\n",CodMenor,MenorPreco);
  printf("Soma:%.2f",soma);
  return 0;
}