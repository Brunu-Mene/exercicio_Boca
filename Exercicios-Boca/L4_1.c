#include "stdio.h"

typedef struct{
  int codigo;
  float preco;
  int qes;
}tProdutos;

float ProdutoMaior(float preco,float precoant)
{
  float maior;
  if(precoant<preco)
  {
    precoant=preco;
    maior=preco;
    return maior;
  }
  return 0;
}

float ProdutoMenor(float preco,float precoant)
{
  float menor;
  if(precoant>preco && precoant!=0)
  {
    precoant=preco;
    menor=preco;
    return menor;
  }
  if(precoant==0) return preco;
  return 10000;
}

int TemProdutoEmEstoque(int qes)
{
  if(qes!=0) return 1;
  return 0;
}
int main(void) {
  int n,aux=0,verificador;
  int codmaior,qtdmaior;
  int codmenor,qtdmenor;
  float maior=0.0,menor=100000.0,menoraux,maioraux,precoant;;
  tProdutos est = {0,0.0,0};
  scanf("%d",&n);
  while(n>aux)
  {
    precoant=est.preco;
    aux++;
    scanf("%d;%f;%d",&est.codigo,&est.preco,&est.qes);

    maioraux=ProdutoMaior(est.preco,precoant);
    if(maioraux>maior)
    {
      maior=maioraux;
      codmaior=est.codigo;
      qtdmaior=est.qes;
    }
    menoraux=ProdutoMenor(est.preco,precoant);
    if(menoraux<menor)
    {
      menor=menoraux;
      codmenor=est.codigo;
      qtdmenor=est.qes;
    } 

    if((verificador=TemProdutoEmEstoque(est.qes))==0)
      printf("FALTA:COD %d,PRE %.2f, QTD 0\n",est.codigo,est.preco);  
  }
  printf("MAIOR:COD %d,PRE %.2f, QTD %d\n",codmaior,maior,qtdmaior);
  printf("MENOR:COD %d,PRE %.2f, QTD %d\n",codmenor,menor,qtdmenor);
  return 0;
}