#include "stdio.h"
#include "math.h"

typedef struct{
  int x,y;
}tPonto;

int quadrante(int x,int y)
{
  if(x>0 && y>0) return 1;
  if(x<0 && y>0) return 2;
  if(x<0 && y<0) return 3;
  if(x>0 && y<0) return 4;
  return 0;
}

int main(void) {
  int n,aux=0,Qp1,Qp2;
  scanf("%d",&n);
  tPonto p1,p2;
  while(aux<n)
  {
    aux++;
    scanf("%d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
    Qp1=quadrante(p1.x,p1.y);
    Qp2=quadrante(p2.x,p2.y);
    if(Qp1==Qp2 && Qp1!=0)
      printf("MESMO\n");
    else
      printf("DIFERENTE\n");
  }
  return 0;
}