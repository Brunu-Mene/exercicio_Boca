#include <stdio.h>

int EhPar (int x){
    if(x%2!=0) return 0;

    return 1;
}

void PrintaPares (int N){
    int aux=0,pares=2;
    while(aux<N){
        if(EhPar(pares) == 1){
            printf("%d ",pares);
            aux++;
        }
        pares++;
    }
}

void PrintaImpares (int N){
    int aux=0,impares=1;
    while(aux<N){
        if(EhPar(impares) == 0){
            printf("%d ",impares);
            aux++;
        }
        impares++;
    }
}

int main(){
    int tipo,n;
    scanf("%d %d",&tipo,&n);
    if(tipo == 0){
        PrintaPares(n);
    }else if(tipo == 1){
        PrintaImpares(n);
    }
    return 0;
}