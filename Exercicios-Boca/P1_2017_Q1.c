#include <stdio.h>

int main(void) {
  int x,y,aux;
  char c,espaco;
  scanf("%d%d%c%c",&x,&y,&espaco,&c);
  if(c=='+' || c=='/' || c=='*' || c=='-')
  {
  if(c=='+') aux=x+y;
  if(c=='-') aux=x-y;
  if(c=='*') aux=x*y;
  if(c=='/') aux=x/y;
  printf("RESP:%d",aux);
  }
  else
  printf("Invalido");
  
  return 0;
}