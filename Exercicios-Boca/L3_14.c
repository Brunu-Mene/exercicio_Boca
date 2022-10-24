#include <stdio.h>

void fib(int n)
{
  int x=0,controle=0,aux=1,fibaux=1,aux2=0;
  int fator,quant;
  while(controle<n)
  {
    controle++;
    x=aux+fibaux;
    aux=fibaux;
    fibaux=x;
    fator=2;
    aux2=0;
    printf("%d:",x);
    while(x>1)
    {
      quant=0;
      while(x%fator==0)
      {
        quant++;
        x=x/fator;
      }
      if(quant!=0)
      {
        printf("(%d,%d)",fator,quant);
        aux2++;
      }
      fator++;
    }
    printf("[%d]\n",aux2);
  }
}
int main(void){
  int n;
  scanf("%d",&n);
  if(n>=2 && n<=40)
    fib(n);
  if(n==1)
    printf("Nao ha fatores primos.");
  return 0;
}