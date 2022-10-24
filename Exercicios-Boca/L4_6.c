#include "stdio.h"
#include "math.h"

typedef struct{
  float x,y;
}tPonto;

float Dist(float xp,float yp,float xr,float yr)
{
  float dist,deltax,deltay;
  deltax=xp-xr;
  deltay=yp-yr;
  dist=sqrt((deltax*deltax)+(deltay*deltay));
  return dist;
}

int main(void) {
  int n,aux=0;
  float dist1,dist2;
  scanf("%d",&n);
  tPonto p;
  tPonto pi,pf;
  while(aux<n)
  {
    aux++;
    scanf("%f %f %f %f %f %f",&p.x,&p.y,&pi.x,&pi.y,&pf.x,&pf.y);
    dist1=Dist(p.x,p.y,pi.x,pi.y);
    dist2=Dist(p.x,p.y,pf.x,pf.y);;
    if(dist1<dist2)
      printf("INICIO\n");
    if(dist2<dist1)
      printf("FIM\n");
    if(dist1==dist2)
      printf("EQUIDISTANTE\n");
  }

  return 0;
}