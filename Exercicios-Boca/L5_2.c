#include <stdio.h>
#include <math.h>

int main(void) {
  int n,i,iguais=0,crescente=0,decrescente=0;
  scanf("%d",&n);
  if(n>0)
  {
  int nota[n];
  for(i=0;i<n;i++)
    scanf("%d",&nota[i]);  

  if(nota[0]==nota[1])
    iguais++;
  if(nota[0]<=nota[1])
    crescente++;
  if(nota[0]>=nota[1])
    decrescente++; 

  for(i=2;i<n;i++)
   {
   if(nota[i-1]==nota[i])
          iguais++;
    if(nota[i-1]<=nota[i])
          crescente++;
   if(nota[i-1]>=nota[i])
     decrescente++;
   }
  }
  if(n==1)
    printf("CRESCENTE&DECRESCENTE");
  else if(iguais==n-1)
    printf("CRESCENTE&DECRESCENTE");
  else if(crescente==n-1 && iguais!=n)
    printf("CRESCENTE");
  else if(decrescente==n-1 && iguais!=n)
    printf("DECRESCENTE");
  else printf("DESORDENADO");
  return 0;
}