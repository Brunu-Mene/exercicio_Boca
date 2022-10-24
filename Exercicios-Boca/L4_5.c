#include "stdio.h"
#include "math.h"

typedef struct{
  float x,y;
}tPonto;

float Dist(float x1,float y1,float x2,float y2)
{
  float dx,dy,dist;
  dx=x2-x1;
  dy=y2-y1;
  dist=sqrt((dx*dx)+(dy*dy));
  return dist;
}

int main(void) {
  int n,aux=1;
  float distancia;
  tPonto p1;
  tPonto p2;
  scanf("%d",&n);
  scanf("%f %f",&p1.x,&p1.y);
  printf("-\n");
  while(aux<n)
  {
    p2=p1;
    aux++;
    scanf("%f %f",&p1.x,&p1.y);
    distancia=Dist(p1.x,p1.y,p2.x,p2.y);
    printf("%.2f\n",distancia);
  }

  return 0;
}