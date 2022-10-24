#include <stdio.h>

int ContaOcorrencias(int *v, int TAM, int n){
  if(TAM==1){
    if(v[0]==n) return 1;
    else return 0;
  }
  else if(v[TAM-1]==n){
    return ContaOcorrencias(v,TAM-1,n) + 1;
  }
  else
    return ContaOcorrencias(v,TAM-1,n);
}

int main(){
  int qtd,i;
  scanf("%d",&qtd);
  for(i=0;i<qtd;i++){
    int num,TAM;
    scanf("%d %d",&num,&TAM);
    int v[TAM],j,deco=0;
    for(j=0;j<TAM;j++){
      scanf("%d",&v[j]);
    }
    deco=ContaOcorrencias(v,TAM,num);
    printf("%d\n",deco);
  }
return 0;
}