#include <stdio.h>

int main(){
    //declarando e atribuindo os pontos
    int xP1,yP1;
    int xP2,yP2;
    int xP3,yP3;
    scanf("%d %d %d %d %d %d",&xP1,&yP1,&xP2,&yP2,&xP3,&yP3);

    //temos que analisar as diferentes possibilidades para elaborar suas intervencoes especificas;

    //verificando se o P1 corresponde ao extremo esquerdo inferior
    if(xP1 < xP2 && yP1 < yP2){
        //verificando se a coordenada xP3 esta dentro dos limites de comprimento do retangulo;
        //ou seja, xP3 deve ser maior ou igual a xP1 e menor ou igual a xP2
        if(xP3 >= xP1 && xP3 <= xP2){
            //temos agora que verificar se a coordenada yP3 esta dentro da mesmo forma que foi feito com xP1
            if(yP3 <= yP2 && yP3 >= yP1){
                printf("Dentro");
            }
            else{
                printf("Fora");
            }
        }
        //Se a coordenada de xP3 estiver fora do intervalo, ja podemos concluindo que o ponto esta fora;
        else{
            printf("Fora");
        }
    }
    //verificamos agora se o P1 corresponde ao extremo esquerdo superior
    else if(xP1 < xP2 && yP1 > yP2){
        //verificando se o ponto esta dentro da nova configuracao de retangulo
        if(xP3 >= xP1 && xP3<=xP2 ){
            if(yP3 <= yP1 && yP3>= yP2){
                printf("Dentro");
            }
            else{
                printf("Fora");
            }
        }
        else{
            printf("Fora");
        }
    }
    //da mesma forma temos que verificar as configuracoes onde o P2 estao no extremo esquerdo
    //caso P2 esteja no extremo esquerdo inferior temos:
    else if(xP1 > xP2 && yP1 > yP2){
        //verificando se P3 esta dentro da nova margem
        if(xP3 <= xP1 && xP3 >= xP2){
            if(yP3 >= yP2 && yP3 <= yP1){
                printf("Dentro");
            }
            else{
                printf("Fora");
            }
        }
        else{
            printf("Fora");
        }
    }
    //agora caso P2 esteja no extremo esquerdo superior temos?
    else if(xP1 > xP2 && yP1 < yP2){
        //verificando se P3 esta dentro da nova margem
        if(xP3 >= xP2 && xP3 <= xP1){
            if(yP3 <= yP2 && yP3 >= yP1){
                printf("Dentro");
            }
            else{
                printf("Fora");
            }
        }
        else{
            printf("Fora");
        }
    }
    return 0;
}