#include <stdio.h>

int main(){
  char texto,texto2,texto3;
  scanf("%c",&texto);

  printf("RESP:");
  while(texto!='.' && texto2!='.' && texto3!='.'){
    texto2 = 'a';
    if (texto=='('){
      while(texto2 != ')'){
        scanf("%c",&texto2);
        if(texto2!=')'){
        printf("%c",texto2);
        }
      }
      if(texto2==')'){
        scanf("%c",&texto);
        if(texto==')'){
          printf("%c",texto);
          while(texto==')'){
            scanf("%c",&texto);
            if(texto==')') 
              printf(")");
          }
        }
      }
    }
    else if(texto != '.')
      scanf("%c",&texto);
  }
  return 0;
}