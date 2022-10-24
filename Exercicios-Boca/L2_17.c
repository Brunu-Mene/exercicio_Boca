#include <stdio.h>

int main(void) {
  int x,n,aux=0;
  char texto;

  scanf("%d%d ",&x,&n);
  while(1)
  {
    scanf("%c",&texto);
    //sai do looping se o caractere for um "."
    if(texto=='.'){
      break;
    } 

    if(x==1){ 
      if(texto >= 'a' && texto <= 'z'){
        texto=texto+(n%26);
        if(texto>'z'){
        texto=texto-26;
        }
      }
      printf("%c",texto);
    }
    else if(x==2){
      if(texto >='a' && texto <= 'z'){
        texto=texto-(n%26);
        if(texto <'a'){
        texto=texto+26;
        }
      }
      printf("%c",texto);
     }

    else{
      aux=1;
      break;
    }
  }

  if(aux==1){
    printf("Operacao invalida");
  }
  printf(".");
  
  return 0;
}