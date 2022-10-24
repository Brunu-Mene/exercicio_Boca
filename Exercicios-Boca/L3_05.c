#include <stdio.h>

int Propriedade(int num){
    int ab,cd,ef;
    ab = num/100;
    cd = num%100;
    ef = ab+cd;
    if(ef*ef == num){
        return 1;
    }
    return 0;  
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    n++;
    while(n<m){
        if(Propriedade(n) == 1){
            printf("%d\n",n);
        }
        n++;
    }
    return 0;
}