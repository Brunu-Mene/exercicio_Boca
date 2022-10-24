#include <stdio.h>
#include <math.h>
float delta(float a,float b,float c)
{
  float delta;
  delta=(b*b)-(4*a*c);
  return delta;
}

int main(void) {
  float a,b,c,result,result2,deltaaux;
  scanf("%f %f %f",&a,&b,&c);
  deltaaux=delta(a,b,c);
  if(deltaaux<0)
    printf("Nao ha raizes reais");
  if(deltaaux==0)
  {
    result=((-b)+sqrt(deltaaux))/(2*a);
    printf("x1:%.2f x2:%.2f",result,result);
  }
  if(deltaaux>0)
  {
    result=((-b)+sqrt(deltaaux))/(2*a);
    result2=((-b)-sqrt(deltaaux))/(2*a);
    printf("x1:%.2f x2:%.2f",result,result2);
  }
  return 0;
}