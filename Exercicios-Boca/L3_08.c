#include <stdio.h>
int EhPrimo(int num){
    if(num == 1){
        return 0;
    }
    
    int div = 2;
    while(num%div != 0){
        div++;
    }
    if(num == div){
        return 1;
    }
    else{
        return 0;
    }
}

int verificaNegativo(int n){
    if(n>=0) return 0;
    return 1;
}

int transformaPrimo(int n){
    if(verificaNegativo(n) == 0){
        if(n == 0){
            return 2;
        }
        while(EhPrimo(n)==0){
            n++;
        }
        return n;
    }else{
        n = n*(-1);
        while(EhPrimo(n)==0){
            n++;
        }
        return n*(-1);
    }
}

int main(){
    int l,c,num;
    scanf("%d %d",&l,&c);
    int i,j;
    for(i=0; i<l; i++){
        for(j=0; j<c ;j++){
            scanf("%d",&num);
            int aux = num;
            num = transformaPrimo(num);
            if(num > 32000 || num < -32000){
                num = aux;
            }
            printf("%d ",num);
        }
        printf("\n");
    }
    return 0;
}