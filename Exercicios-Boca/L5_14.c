#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int codigo;
char sobrenome[21];
char nome[21];
int nota;
int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);
int ComparaString(char * str1, char * str2);

int main(){
int qtdCand, i = 0,j,aux=0,condicao=0;
scanf("%d", &qtdCand);
int aux2[qtdCand],i2,quebra;
for(i2=0;i2<qtdCand;i2++){
  aux2[i2]=200000;
}
tCandidato candidatos[qtdCand];
for(i = 0; i < qtdCand; i++){
candidatos[i] = LeCandidato();
}
for(i=0;i<qtdCand;i++){
  for(j=0;j<qtdCand;j++){
    for(i2=0;i2<qtdCand;i2++){
      if(i==aux2[i2]){
        quebra=1;
        break;
      }
    }
    if(quebra==1){
      quebra=0;
      break;
    }
    if(j!=i){
      if(strcmp(candidatos[i].sobrenome,candidatos[j].sobrenome)==0){
        if(condicao==0){
          ImprimeCandidato(candidatos[i]);
        }
        ImprimeCandidato(candidatos[j]);
        aux2[aux]=j;
        aux++;
        condicao=1;
      }
    }
  }
  condicao=0;
}
return 0;
}

tCandidato LeCandidato(){
tCandidato candidato;
scanf("%*[^{]");
scanf("%*[{ ]");
scanf("%d", &candidato.codigo);
scanf("%*[, ]");
scanf("%[^,],", candidato.sobrenome);
scanf("%*[ ]");
scanf("%[^,],", candidato.nome);
scanf("%d", &candidato.nota);
scanf("%*[, ]");
scanf("%d", &candidato.idade);
scanf("%*[^\n]\n");
return candidato;
}

void ImprimeCandidato(tCandidato candidato){
printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
candidato.codigo, candidato.nome,
candidato.sobrenome, candidato.nota, candidato.idade);
}

int ComparaString(char * str1, char * str2){
  int i;
  i=strcmp(str1,str2);
  if(i==0) return 1;
  return 0;
}