#include <stdio.h>
#include <stdlib.h>
int conta(char *str){
  int tamanho=0;
  while(str[tamanho]!='\0')
   tamanho++;
  return tamanho;
}
int ComparaString(char * str1, char * str2){
  int tamanho1,tamanho2,i,contador=0;
  tamanho1=conta(str1);
  tamanho2=conta(str2);
  if(tamanho1!=tamanho2) return 0;

  for(i=0;i<tamanho1;i++){
    if(str1[i]==str2[i]) contador++;
  }
  if (contador==tamanho1) return 1;
  else return 0;
}


int main(){
char str1[1000];
char str2[1000];
while ( scanf("%s", *&str1) == 1 && scanf("%s", *&str2) == 1){
if ( ComparaString(str1, str2) ==1 )
printf("IGUAL\n");
else
printf("DIFERENTE\n");
}
return 0;
}