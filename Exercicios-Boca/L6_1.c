#include <stdio.h>
#include <stdlib.h>
//Defina e implemente TrocaInterios

int TrocaInterios(int *n1,int *n2){
  int c;
  if(*n1>*n2){
    int c = *n1;
    *n1 = *n2;
    *n2 = c;
    return 1;
  }
  return 0;
}


int main(){
int n1, n2;
while ( scanf("%d %d", &n1, &n2) == 2 ){
  if (TrocaInterios(&n1,&n2) == 1 ){
    printf("TROCADO: %d %d\n", n1, n2);
  } 
  else {
    printf("ORIGINAL: %d %d\n", n1, n2);
  }
}
return 0;
}