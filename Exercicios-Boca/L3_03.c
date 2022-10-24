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

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    n++;
    while(n<m){
        int ehPrimo = EhPrimo(n);
        if(ehPrimo == 1){
            printf("%d ",n);
        }
        n++;
    }
    return 0;
}