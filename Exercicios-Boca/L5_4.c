#include <stdio.h>

int main(void) {
  int n,i,dentro=0,fora=0;
  scanf("%d",&n);
  if(n>0)
  {
  int numeros[n];
  for(i=0;i<n;i++)
    scanf("%d",&numeros[i]);
  int a,b;
  scanf("%d %d",&a,&b);
  for(i=0;i<n;i++)
  {
    if(numeros[i]>=a && numeros[i]<=b)
      dentro++;
    else fora++;
  }
  printf("%d %d",dentro,fora);
  }
  return 0;
}