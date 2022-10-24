#include <stdio.h>

int main(void) {
  int n,i,x,aux=0,ocorrencia;
  scanf("%d %d",&x,&n);
  ocorrencia=n;
  if(n>0)
  {
    int numeros[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&numeros[i]);
      if(numeros[i]==x && aux==0)
      {
        aux++;
        ocorrencia=i;
      }
    }
    printf("RESP:%d",ocorrencia);
  }
  return 0;
}