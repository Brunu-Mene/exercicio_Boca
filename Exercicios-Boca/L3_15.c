#include <stdio.h>
#include <math.h>
float calculardistancia(int x,int y)
{
  float dist,x1,y2;
  x1=x;
  y2=y;
  dist=sqrt((x1*x1)+(y2*y2));
  return dist;
}

int main(void) {
int aux=0,x,y,maiorx,maiory;
float dist,maiordist=0.0;
 while(aux<5)
 {
   aux++;
   scanf("%d %d",&x,&y);
   dist=calculardistancia(x,y);
   printf("%.2f ",dist);
   if(dist>maiordist)
   {
     maiordist=dist;
     maiorx=x;
     maiory=y;
   }
 }
 printf("Maior:%.2f p:(%d,%d)",maiordist,maiorx,maiory);
  return 0;
}