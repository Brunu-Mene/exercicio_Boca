#include <stdio.h>
#include <string.h>

int aux=0;

void ImprimiInvertido(char *string){
  int tam=strlen(string);
  tam=tam-aux;
  printf("%c",string[tam-1]);
  aux++;
  if(tam>0){
    return ImprimiInvertido(string);  
  }
  else
    printf(" ");
}

int main(){
  char palavra[1001];
  while(scanf("%s",&*palavra)==1){
    ImprimiInvertido(palavra);
    aux=0;
  }
return 0;
}