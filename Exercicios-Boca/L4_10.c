#include "stdio.h"
#include "math.h"

typedef struct{
  int x,y;
}tPontos;

float CalculaDist(int x1,int y1,int x2,int y2)
{
  float dist,deltax,deltay;
  deltax=x1-x2;
  deltay=y1-y2;
  dist=sqrt((deltax*deltax)+(deltay*deltay));
  return dist;
}

int main(void) {
  int n,aux=1,xMaisPro,yMaisPro;
  float dist,menordist=100000000;
  tPontos p1,p2;
  scanf("%d",&n);
  if(n!=0 && n!=1)
  {
  scanf("%d %d",&p1.x,&p1.y);
  while(aux<n)
  {
    aux++;
    scanf("%d %d",&p2.x,&p2.y);
    dist=CalculaDist(p1.x,p1.y,p2.x,p2.y);
    if(dist<menordist)
    {
      menordist=dist;
      xMaisPro=p2.x;
      yMaisPro=p2.y;
    }
  }
  printf("Mais proximo:(%d,%d)",xMaisPro,yMaisPro);
  }
  return 0;
}