#include <stdio.h>

int main(void) {
  int x,y;
  scanf("%d%d",&x,&y);
  if(x==y)
  {
    if(x<=5 && x>=1)
    printf("Um homem");
    if(x>=6 && x<=10)
    printf("Uma mulher");
  }
  if(x!=y)
  {
  if((x<=5 && x>=1)&&(y<=5 && y>=1))
    printf("Par de homens");
  if((((x<=5 && x>=1)&&(y>=6 && y<=10)))||((x>=6 && x<=10)&&(y>=1 && y<=5)))
  printf("Um casal");
  if((x>=6 && x<=10)&&(y>=6 && y<=10))
  printf("Par de mulheres");
  }
  if((x<1 || x>10)||(y>10 || y<1))
  printf("Invalido");
  return 0;
}