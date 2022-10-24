#include <stdio.h>

int main(){
    int n, soma = 0, indice = 0, maior;
    float media;
    //criando looping "infinito"
    while(1){
        scanf("%d",&n);
        //condicao para atribuir a maior o primeiro valor lido;
        if(indice == 0){
            maior = n;
        }

        //faco a condicao de parada que caso n seja igual a 0
        if(n == 0){
            //saio do looping
            break;
        }
        //incrimentando indice
        indice = indice + 1;
        //calculando a media momentanea
        soma = soma + n;
        media = soma/(indice * 1.0);
        //verificando se o valor atual e maior do que o contido em maior
        if(n > maior){
            maior = n;
        }
        //exibindo os valores
        printf("%d %.6f\n",maior,media);

    }
    return 0;
}