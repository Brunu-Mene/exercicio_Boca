#include <stdio.h>

int EhPalindromo(int num){
    int num1 = num, pot = 1;
    int num2Int;
    float num2=0.0;
    while(num > 0){
        num2 = num2 + (num%10*1.0)/pot;
        pot = pot*10;
        num = num/10;
    }
    num2 = num2*(pot/10);
    num2Int = num2;
    if(num1==num2Int){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(EhPalindromo(n) == 1){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}