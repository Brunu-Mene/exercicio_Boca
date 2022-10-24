#include "stdio.h"
#include "math.h"

typedef struct{
  float a,b,c;
}tFormas;

int main(void) {
  int n,aux=0;
  int quadrados=0,retangulos=0,circulos=0;
  float AreaCirculo=0.0,AreaQuadrado=0.0,AreaRetangulo=0.0;
  tFormas f;
  scanf("%d",&n);
  while(aux<n)
  {
    aux++;
    scanf("%f %f %f",&f.a,&f.b,&f.c);
    if(f.c>0) 
    {
      circulos++;
      AreaCirculo+=(3.14159265359*(f.c*f.c));
    }
    if(f.a>0 && f.b>0)
    {
      if(f.a==f.b)
      {
        quadrados++;
        AreaQuadrado+=(f.a*f.a);
      }
      if(f.a!=f.b) 
      {
        retangulos ++;
        AreaRetangulo+=(f.a*f.b);
      }
    }
  }
  printf("Circulos:%d Area:%.2f\nQuadrados:%d Area:%.2f\nRetangulos:%d Area:%.2f",circulos,AreaCirculo,quadrados,AreaQuadrado,retangulos,AreaRetangulo);
  return 0;
}