#include <stdio.h>

int SomaElementosPares(int* v, int n){
  if(n==1){
    if(v[0]%2==0) return v[0];
    else return 0;
  }
  else if((v[n-1]%2)==0){
    return SomaElementosPares(v,(n-1)) + v[n-1];
  }
  else{
    return SomaElementosPares(v,(n-1));
  }
}

int main(){
  int qant,i;
  scanf("%d",&qant);
  for(i=0;i<qant;i++){
    int TAM;
    scanf("%d",&TAM);
    int v[TAM],j,soma=0;
    for(j=0;j<TAM;j++){
      scanf("%d",&v[j]);
    }
    soma=SomaElementosPares(v,TAM);
    printf("%d\n",soma);
  }
return 0;
}