#include "stdio.h"

typedef struct{
  int x,y;
}tPonto;

int VerificaQuadrante(int x,int y)
{
  if(x>0 && y>0) return 1;
  if(x<0 && y>0) return 2;
  if(x<0 && y<0) return 3;
  if(x>0 && y<0) return 4;
  return 0;
}

int main(void) {
  int n,aux=0,quadrante1;
  tPonto p,p2;
  scanf("%d",&n);
  while(aux<n)
  {
    aux++;
    scanf("%d %d",&p.x,&p.y);
    printf("(%d,%d)",p.x,p.y);
    quadrante1=VerificaQuadrante(p.x,p.y);
    printf("%d",quadrante1);
    p2.x=-p.x;
    p2.y=-p.y;
    quadrante1=VerificaQuadrante(p2.x,p2.y);
    printf("(%d,%d)%d\n",p2.x,p2.y,quadrante1);
  }

  return 0;
}