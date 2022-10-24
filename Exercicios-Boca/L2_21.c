#include <stdio.h>

int main() {
  int x,aux=0,a,b,c,d,e,f,g,h,i,num;
  char texto,espaco,aux2;
  scanf("%d",&x);
  if(x==1)
    scanf("%d",&a);
  if(x==2)
    scanf("%d %d",&a,&b);
  if(x==3)
    scanf("%d %d %d",&a,&b,&c);
  if(x==4)
    scanf("%d %d %d %d",&a,&b,&c,&d);
  if(x==5)
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  if(x==6)
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
  if(x==7)
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
  if(x==8)
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
  if(x==9)
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
  while(aux2!='"')
  {
    scanf("%c",&aux2);
  }
  while(aux==0)
  {
    scanf("%c",&texto);
    if(texto=='%')  
    {
      scanf("%d",&num);
      if(num>x || num<1)
        printf("ERRO");
      if(num<=x)
      {
        if(num==1) printf("%d",a);
        if(num==2) printf("%d",b);
        if(num==3) printf("%d",c);
        if(num==4) printf("%d",d);
        if(num==5) printf("%d",e);
        if(num==6) printf("%d",f);
        if(num==7) printf("%d",g);
        if(num==8) printf("%d",h);
        if(num==9) printf("%d",i);
      }
    }
    if(texto=='"') aux++;
    if(texto!='%' && texto!='"') printf("%c",texto);
  }
  return 0;
}