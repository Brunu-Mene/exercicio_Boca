#include <stdio.h>
#include <ctype.h>

int main(void) {
  int x,y,z,a,b,c,soma,aux;
  scanf("%d%d%d",&x,&y,&z);
  scanf("%d%d%d",&a,&b,&c);
  if(a==x && b==y && c==z)
  printf("IGUAIS");
  if(x>a)
  {
    soma=x+y+z;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=(soma)-(aux*100);
      soma=soma/10;
    } 
    printf("RESP:%d",soma); 
  }
  if(x==a && y>b)
  {
    soma=x+y+z;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=(soma)-(aux*100);
      soma=soma/10;
    } 
    printf("RESP:%d",soma); 
  }
  if(x==a && y==b && z>c)
  {
    soma=x+y+z;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=(soma)-(aux*100);
      soma=soma/10;
    }  
    printf("RESP:%d",soma);
  }
  if(a>x)
  {
    soma=a+b+c;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=soma-(aux*100);
      soma=soma/10;
    }  
    printf("RESP:%d",soma);
  }
  if(x==a && b>y)
  {
    soma=a+b+c;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=soma-(aux*100);
      soma=soma/10;
    } 
    printf("RESP:%d",soma); 
  }
  if(x==a && b==y && c>z)
  {
    soma=a+b+c;
    if(soma<100) soma=soma/10;
    if(soma>=100)
    {
      aux=soma/100;
      soma=soma-(aux*100);
      soma=soma/10;
    } 
    printf("RESP:%d",soma); 
  }
  return 0;
}