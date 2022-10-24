#include <stdio.h>

int somadosdigitos(int n){
    int soma=0;
    while(n>0){
        soma = soma + n%10;
        n = n/10;
    }
    return soma;
}

void parImpar(int n){
    if(n%2==0)
        printf("Par ");
    else 
        printf("Impar ");
}

void valorPrimo(int n){
    int div=2;
    if(n == 1)
        printf("Nao e primo");
    else{
        while(n%div != 0){
            div++;
        }
        if(div == n) 
            printf("Primo");
        else
            printf("Nao e primo");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    do{
        n = somadosdigitos(n);
        printf("%d ",n);
        parImpar(n);
        valorPrimo(n);
        printf("\n");
    }while(n>9);
    return 0;
}