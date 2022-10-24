#include <stdio.h>
#include <string.h>

int aux=0;

int palindro(char *string,int n){
  if(n==1){
    return 1;
  }
  else{
    if(string[n-1]==string[aux]){
      aux++;
      return palindro(string,n-1);
    }
    else if(aux==n) return 1;
    else return 0;
  }
}

int main(){
  char palavra[30];
  int tam,veri;
  while(scanf("%s",&*palavra)==1){
  tam=strlen(palavra);
  veri=palindro(palavra,tam);
  if(veri==1)
    printf("SIM\n");
  else 
    printf("NAO\n");
   aux=0;
  }
return 0;
}