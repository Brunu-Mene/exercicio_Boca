#include <stdio.h>

int main(){
    //capturando quantidade de numeros
    int n;
    scanf("%d",&n);

    //criando as variaveis para guardar o maior e menor numeors encontrados, a quantidade de pares/impares e a soma para calcular a media;
    int menor, maior;
    int nPares = 0, nImpares = 0, soma = 0;
    int indice = 0;
    while(indice < n){
        //incrementando o indice para eventualmente quebrar o looping;
        indice = indice + 1;

        int numero;
        scanf("%d",&numero);
        //se o indice for 1 sera o primeiro numero da sequencia, entao sou obrigado a atribuilos ao maior e ao menor
        if(indice == 1){
            menor = numero;
            maior = numero;
        }
        //verifico se o numero em questao sera maior ou menor as variaveis salvas
        if(numero > maior){
            maior = numero;
        }
        else if(numero < menor){
            menor = numero;
        }
        
        //somando os numeros ao longo do looping
        soma = soma + numero;

        //verificando se e par
        if(numero%2 == 0){
            nPares = nPares + 1;
        }
        //verificando se e impar
        else if(numero%2 != 0){
            nImpares = nImpares + 1;
        }
    }
    float media;
    //multiplicando por 1.0 para forcar que media receba valor decimal
    media = soma/(n * 1.0);
    printf("%d %d %d %d %.6f",maior,menor,nPares,nImpares,media);

    return 0;
}