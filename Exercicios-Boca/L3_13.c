#include <stdio.h>

int CalculaValorPalavra(){
    char letra;
    int soma = 0;
    while(1){
        scanf("%c",&letra);
        if(letra == '\n' || letra == '\0') break;

        if(letra>='a' && letra<='z'){
            letra = letra - 'a' + 1;
            soma = soma + letra;
        }else{
            letra = letra - 'A' + 27;
            soma = soma + letra;
        }
    }
    return soma;
}

int EhPrimo(int n){
    if(n == 1) 
        return 0;
    int div = 2;
    while(n%div != 0 ){
        div++;
    }
    if(div == n)
        return 1;
    
    return 0;
}

int ProximoPrimo(int n){
    while(EhPrimo(n) == 0){
        n++;
    }

    return n;
}

int main(){
    int soma;
    while(1){
        soma = CalculaValorPalavra();
        if(soma == 0) break;

        if(EhPrimo(soma) == 1){
            printf("E primo\n");
        }else{
            int proxPri = ProximoPrimo(soma);
            printf("Nao e primo %d\n",proxPri);
        }
    }
    return 0;
}