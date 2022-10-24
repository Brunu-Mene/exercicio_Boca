#include <stdio.h>

int main(){
    //declarando inteiros para receber o numero e a casa decial a ser analisada;
    int num;
    int casaDec;
    scanf("%d %d",&num,&casaDec);

    //condicionais a julgar pela casa casa decial que sera analisada
    if(casaDec == 3){
        //declarando um auxlicar para receber o valor contido na casa 3
        int aux;
        //selecionado o terceiro digito ao dividirmos o numero por 100
        aux = num/100;
        //verificando se o numero em aux e par ou impar
        if(aux%2 == 0){
            printf("PAR");
        }
        else{
            printf("IMPAR");
        }
    }
    else if(casaDec == 2){
        //mesmo processo so que agora dividindo por um numero menor
        int aux;
        //selecionado o terceiro digito ao dividirmos o numero por 10
        aux = num/10;
        if(aux%2 == 0){
            printf("PAR");
        }
        else{
            printf("IMPAR");
        }
    }
    else if(casaDec == 1){
        int aux;
        //agora por 1;
        aux = num;
        if(aux%2 == 0){
            printf("PAR");
        }
        else{
            printf("IMPAR");
        }
    }

    return 0;
}