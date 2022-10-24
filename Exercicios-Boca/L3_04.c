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

void ImprimeMultiplos(int num, int max){
    int aux = 2;
    if(num*aux >= max){
        printf("*");
    }
    while(num*aux < max){
        int result = num*aux;
        printf("%d ",result);

        aux++;
    }
    printf("\n");
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    n++;
    while(n<m){
        if(EhPrimo(n) == 1){
            printf("%d\n",n);
            ImprimeMultiplos(n,m);
        }

        n++;
    }
    return 0;
}