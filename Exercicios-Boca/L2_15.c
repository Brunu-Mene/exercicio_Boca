#include <stdio.h>

int main(void) {
  int num;
  
  int numPosi = 0, numNeg = 0;
  int somaPosi = 0, somaNeg = 0;

  //looping que captura numeros ate a entrada de um nao numero
  while(scanf("%d",&num) == 1){
    //verifica se eh positivo e atribui os valores aos somadores
    if(num > 0){
      numPosi = numPosi + 1;
      somaPosi = somaPosi + num;
    }
    //se nao eh positivo, entao eh negativo e soma aqui
    else if(num < 0){
      numNeg = numNeg + 1;
      somaNeg = somaNeg + num;
    }
  }
  printf("%d %d %d %d",numNeg,numPosi,somaNeg,somaPosi);
  return 0;
}