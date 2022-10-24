#include <stdio.h>

int main(void) {
  int num,num2,menor,aux=0,ultpos=0,pripos=32001,aux2=0;
  char c;

  int id = 0;
  while(scanf("%d",&num))
  {
    if(id == 0){
      id = 1;
      menor=num;
    }
    if(num<=menor)
    {
      menor = num; 
    }
  }
  id = 0;
  scanf("%c",&c);
  while(scanf("%d",&num2))
  {
    if(num2==menor)
    {
      if(pripos == 32001) {
        pripos=aux;
      }

      if(aux2==aux)
      {
        ultpos=aux;
        id=1; 
      }
    }
    aux++;
    aux2++;
  } 
  if(id==1)
  {
    printf("%d %d %d",menor,pripos,ultpos);
  }
  else
  {
    printf("%d %d %d",menor,aux,aux);
  }
  return 0;
}