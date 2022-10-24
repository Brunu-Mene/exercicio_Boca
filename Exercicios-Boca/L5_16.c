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
  int i,j,trocando;
  char temp[21];
  for(i=0;i<qtd;i++){
    for(j=0;j<qtd-1;j++){
      if(vet[j].nota<vet[j+1].nota){
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
      }
      if(vet[j].nota==vet[j+1].nota){
        if(vet[j].idade>vet[j+1].idade){
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
        }
        if(vet[j].idade==vet[j+1].idade){
          if(vet[j].codigo>vet[j+1].codigo){
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
          }
        }
      }
    }
  }
}