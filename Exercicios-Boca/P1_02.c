#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int xP1,yP1,xP2,yP2,xP3,yP3;
    scanf("%d %d %d %d %d %d",&xP1,&yP1,&xP2,&yP2,&xP3,&yP3);

    int aux = 0;
    int resp = a*xP1 + b;
    if(resp == yP1){
        aux++;
    }
    resp = a*xP2 + b;
    if(resp == yP2){
        aux++;
    }
    resp = a*xP3 + b;
    if(resp == yP3){
        aux++;
    }

    if(aux == 0){
        printf("Nenhum");
    }else if(aux == 1){
        printf("Um");
    }else if(aux == 2){
        printf("Dois");
    }else{
        printf("Todos");
    }
    return 0;
}