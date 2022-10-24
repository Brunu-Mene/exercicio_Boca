#include <stdio.h>

int main(){
  int linhas,colunas;
  scanf("%d%d",&linhas,&colunas);

  int maior, condicional = 0;
  int posiLinha,posiColuna;
  int i,j;
  //looping para andar pelas linhas onde i representa a linha atual
  for(i=1; i<=linhas ;i++){
    //looping para andar pelas colunas onde j representa a coluna atual
    for(j=1; j<=colunas ;j++){
      int num;
      scanf("%d",&num);

      //condicao para a primeira execucao para a variavel "maior" receber um valor inicial a ser comparado
      if(condicional == 0){
        condicional = 1;
        maior = num;
        posiLinha = i;
        posiColuna = j;
      }
      //condicao geral que compara o "num" lido com a variavel "maior"
      else if(num > maior){
        maior = num;
        posiLinha = i;
        posiColuna = j;
      }
    }
  }

  printf("%d (%d,%d)",maior,posiLinha,posiColuna);
  return 0;
}