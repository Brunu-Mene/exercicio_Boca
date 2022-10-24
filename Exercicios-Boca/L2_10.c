#include <stdio.h>

int main() {
  int n,m;
  scanf("%d%d",&n,&m);

  //looping para percorrer o intervalo n<=NUMERO<=m
  for(n; n<=m ;n++)
  {
    int multiplicador = 1;
    multiplicador = 1 ;
    while(multiplicador <= 10)
    {
    int resultado;
    resultado = n * multiplicador;
    printf("%d x %d = %d\n",n, multiplicador ,resultado);

    multiplicador = multiplicador + 1;
    }
  }
  return 0;
}