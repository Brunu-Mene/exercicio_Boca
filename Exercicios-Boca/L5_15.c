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
void OrdenaCrescente(tCandidato * vet, int qtd);

int main(){
int qtdCand, i = 0, j;
scanf("%d", &qtdCand);
tCandidato candidatos[qtdCand];
for(i = 0; i < qtdCand; i++){
candidatos[i] = LeCandidato();
}
OrdenaCrescente(candidatos, qtdCand);
for(i = 0; i < qtdCand; i++){
ImprimeCandidato(candidatos[i]);
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

void OrdenaCrescente(tCandidato * vet, int qtd){
  int i,j,aux,trocando;
  char temp[21];
  for(i=0;i<qtd;i++){
    for(j=0;j<qtd-1;j++){
      if(strcmp(vet[j].nome,vet[j+1].nome)==0){
         for(aux=0;aux<21;aux++){
         if(vet[j].sobrenome[aux]>vet[j+1].sobrenome[aux]){
           strcpy(temp,vet[j].nome);
           strcpy(vet[j].nome,vet[j+1].nome);
           strcpy(vet[j+1].nome,temp);

            strcpy(temp,vet[j].sobrenome);
            strcpy(vet[j].sobrenome,vet[j+1].sobrenome);
            strcpy(vet[j+1].sobrenome,temp);
            
            trocando=vet[j].codigo;
            vet[j].codigo=vet[j+1].codigo;
            vet[j+1].codigo=trocando;

            trocando=vet[j].nota;
            vet[j].nota=vet[j+1].nota;
            vet[j+1].nota=trocando;

            trocando=vet[j].idade;
            vet[j].idade=vet[j+1].idade;
            vet[j+1].idade=trocando;
            break;
          }
          if(vet[j].sobrenome[aux]<vet[j+1].sobrenome[aux])
            break;
        }
      }
      else{
        for(aux=0;aux<21;aux++){
         if(vet[j].nome[aux]>vet[j+1].nome[aux]){
           strcpy(temp,vet[j].nome);
           strcpy(vet[j].nome,vet[j+1].nome);
           strcpy(vet[j+1].nome,temp);

            strcpy(temp,vet[j].sobrenome);
            strcpy(vet[j].sobrenome,vet[j+1].sobrenome);
            strcpy(vet[j+1].sobrenome,temp);

            trocando=vet[j].codigo;
            vet[j].codigo=vet[j+1].codigo;
            vet[j+1].codigo=trocando;

            trocando=vet[j].nota;
            vet[j].nota=vet[j+1].nota;
            vet[j+1].nota=trocando;

            trocando=vet[j].idade;
            vet[j].idade=vet[j+1].idade;
            vet[j+1].idade=trocando;
            break;
          }
          if(vet[j].nome[aux]<vet[j+1].nome[aux])
            break;
        }
      }
    }
  }
}