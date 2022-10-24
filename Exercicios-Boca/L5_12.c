
#include <stdio.h>
#include <stdlib.h>
int conta(char *str){
  int tamanho=0;
  while(str[tamanho]!='\0')
   tamanho++;
  return tamanho;
}
void ConcatenaString(char * str1, char * str2, char * strOut){
  int tamanho1,tamanho2,i,j;
  tamanho1=conta(str1);
  tamanho2=conta(str2);
  for(i=0;i<tamanho1;i++){
    strOut[i]=str1[i];
  }
  i=tamanho1;
  for(j=0;j<tamanho2;j++){
    strOut[i]=str2[j];
    i++;
  }
}

int main(){
int i;
char nome[1000];
char sobrenome[1000];
char nomeCompleto[2000];
while ( scanf("%s", *&sobrenome) == 1 && scanf("%s", *&nome) == 1){
ConcatenaString(nome, sobrenome, nomeCompleto);
printf("%s\n", nomeCompleto);
for(i=0;i<2000;i++)
  nomeCompleto[i]='\0';
}
return 0;
}