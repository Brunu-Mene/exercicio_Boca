#include <stdio.h>
#include <math.h>
int ehletra(char c)
{
  if(c>='a' && c<='z') return 1;
  if(c>='A' && c<='Z') return 1;
  return 0;
}

int main(void) {
  char c;
  int id=0;
  while(1)
  {
    scanf("%c",&c);
    if(c=='.') break;
    if(ehletra(c)==1) id++;
  }
  printf("RESP:%d",id);
  return 0;
}