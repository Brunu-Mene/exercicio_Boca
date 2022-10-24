#include <stdio.h>

int main(){
    int numPessoas, numItens;
    scanf("%d %d",&numPessoas,&numItens);

    //se o numeros de pessoas for maior que o numero de itens
    if(numPessoas > numItens){
        int ultimo;
        //a posicao da ultima pessoa a receber vai ser a diferenca do total de pessoas e a diferenca entre o total de pessoas e total de itens;
        ultimo = numPessoas - (numPessoas - numItens);
        printf("RESP:%d",ultimo);
    }
    //se o numero de itens for maior que o numero de pessoas
    else if(numItens > numPessoas){
        //verifico se o resto da divisao entre itens e pessoas for diferente de zero;
        if(numItens%numPessoas != 0){
            //caso seja diferente de zero a ultima pessoa a receber o item sera o resto da divisao;
            int ultimo = numItens%numPessoas;
            printf("RESP:%d",ultimo);
        }
        else{
            //caso o resto seja igual a zero a ultima pessoa a receber o item tera a logica repetida do caso anterior;
            int ultimo;
            ultimo = numItens - (numItens - numPessoas);
            printf("RESP:%d",ultimo);
        }
    }
    //se o numero de itens for igual ao numero de pessoas;
    else if(numItens == numPessoas){
        //entao a pessoa na ultima posicao sera a ultima a receber o item;
        printf("RESP:%d",numPessoas);
    }

    return 0;
}