#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    printf("RESP:");
    //criando o looping com a condicao de parada quando n deixar de ser menor que m -1
    while(n < m - 1){
        //incrementando o valor de n para percorrer o intervalo
        n = n + 1;
        //verifico se n e par, caso seja imprimo seu valor
        if(n % 2 == 0){
            printf("%d ",n);
        }
    }

    return 0;
}