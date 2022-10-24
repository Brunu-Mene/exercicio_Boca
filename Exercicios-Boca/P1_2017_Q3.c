#include <stdio.h>
#include <ctype.h>

int main(void) {
  char x,y,espaco,a,b;
  scanf("%c%c%c%c%c",&x,&a,&espaco,&y,&b);
  char z=toupper(x);
  char w=toupper(y);  
  char k=toupper(a);
  char l=toupper(b);
    if((z>='0' && z<='9')||(z>='A' && z<='Z')) 
    {
      if((k>='0' && k<='9')||(k>='A' && k<='Z'))
      {
        if((w>='0' && w<='9')||(w>='A' && w<='Z'))
        {
          if((l>='0' && l<='9')||(l>='A' && l<='Z'))
          {
            if((z==w)&&(k==l))
              printf("IGUAIS");
            else
              printf("DIFERENTES");
          }
        }
      }
    }
    else
    printf("INVALIDO");
  return 0;
}