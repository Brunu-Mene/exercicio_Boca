#include <stdio.h>

int Ehigual(int a, int b)
{
  if (a==b) return 1;
  else return 0;
}
int contrario(int x)
{
  int aux=0,n1,soma=0;

  while(x!=0)
  {
   n1=x%10;
   x=x/10;
   soma=n1*10+soma*10; 
  }

  return soma/10;
}
int main(void){
  int x,aux,y,contagem=0;
  char espaco=' ';
  while(1)
  {
    scanf("%d%c",&x,&espaco);
    y=contrario(x);
    if(x==y && contagem!=0) contagem++;
    if(x==y && contagem==0)
    {
       contagem=1;
    }
    if(espaco!=' ') break;
  }
  printf("COUNT:%d",contagem);
  return 0;
}
