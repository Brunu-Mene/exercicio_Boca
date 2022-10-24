#include <stdio.h>

int main(){
    int tam;
    scanf("%d",&tam);

    int num;
    if(tam > 0){
        scanf("%d",&num);
        if(num%2 == 0){
        int qtdPares = 1;

            while(tam - 1 > 0){
                tam--;
                scanf("%d",&num);
                if(num % 2 == 0) qtdPares++;
            }
        printf("QTD PARES:%d",qtdPares);
        }else{
        int qtdImpares = 1;
            while(tam - 1 > 0){
                tam--;
                scanf("%d",&num);
                if(num%2 != 0) qtdImpares++;
            }
        printf("QTD IMPARES:%d",qtdImpares);
        }
    }
    return 0;
}