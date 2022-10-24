#include <stdio.h>

int EhPrimo(int num){
    int divisor = 2;
    if(num == 1){
        return 0;
    }else{
        while(num%divisor !=0){
            divisor++;
        }
        if(divisor == num) return 1;
    }
    return 0;
}

int MaiorDigitoPrimo(int num){
    int maior = 0, id = 1, aux;
    while(num > 0){
        aux = num%10;
        num = num/10;
        if(EhPrimo(aux) == 1){
            if(id == 1){
                maior = aux;
                id = 0;
            }else if(aux > maior){
                maior = aux;
            }
        }   
    }
    return maior;
}

int main(){
    int num, soma=0;

    while(scanf("%d",&num) == 1){
        soma = soma + MaiorDigitoPrimo(num);
    }
    printf("SOMA:%d",soma);

    return 0;
}