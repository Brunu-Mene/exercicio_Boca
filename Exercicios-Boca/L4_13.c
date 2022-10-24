#include "stdio.h"
#include "math.h"

typedef struct{
  float a,b,c;
}tFormas;

int main(void) {
  int n,aux=0;
  int quadrados=0,retangulos=0,circulos=0;
  tFormas f;
  scanf("%d",&n);
  while(aux<n)
  {
    aux++;
    scanf("%f %f %f",&f.a,&f.b,&f.c);
    if(f.c>0) circulos++;
    if(f.a>0 && f.b>0)
    {
      if(f.a==f.b) quadrados++;
      if(f.a!=f.b) retangulos ++;
    }
  }
  printf("Circulos:%d\nQuadrados:%d\nRetangulos:%d",circulos,quadrados,retangulos);
  return 0;
}