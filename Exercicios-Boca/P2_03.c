#include <stdio.h>

int EhProduto(char prd){
    if(prd >= 'A' && prd <= 'Z') return 1;

    return 0;
}

int AcabaramOsProdutos(char prd){
    if(prd == '0') return 1;

    return 0;
}

int QtdDoProdutoMaisComprado(){
    char prd, prdAnt;
    int id = 1, id2 = 1, maior = 0, qtdPrd = 1;
    while(1){
        if(id != 1){
            prdAnt = prd;
        }
        scanf("%c",&prd);
        if(AcabaramOsProdutos(prd) == 1){
	    if(qtdPrd > maior) maior = qtdPrd;
            break;
        }
        if(EhProduto(prd) == 1){
            if(prdAnt == prd && id != 1){
                qtdPrd++;
            }else if(prdAnt != prd && id != 1){
                if(id2 == 1){
                    maior = qtdPrd;
                    id2 = 0;
                }else if(qtdPrd > maior){
                    maior = qtdPrd;
                }
                qtdPrd = 1;
            }
        }
	id = 0;
    }
    return maior;
}

int main(){
    int cliente, maiorQtd = 0, clienteGuloso = 0;
    int id = 1;
    while(1){
        char quebra;
        scanf("%d%c",&cliente,&quebra);
        if(cliente == -1){
            break;
        }else{
            int aux = QtdDoProdutoMaisComprado();
            if(id == 1){
                maiorQtd = aux;
                clienteGuloso = cliente;
                id = 0;
            }else if(aux > maiorQtd){
                maiorQtd = aux;
                clienteGuloso = cliente;
            }
        }
    }
    printf("CLIENT:%d QTD:%d",clienteGuloso,maiorQtd);
    return 0;
}