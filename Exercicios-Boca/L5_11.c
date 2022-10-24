#include <stdio.h>
#include <stdlib.h>
void OrdenaVetor(int vet[],int qtd){
  int i,j,temp;
  for(i=0;i<qtd;i++){
    for(j=0;j<qtd-1;j++){
      if(vet[j]>vet[j+1]){
        temp=vet[j];
        vet[j]=vet[j+1];
        vet[j+1]=temp;  
      }
    }
  }
}

int main(){
 int a,i=0,j=0;
 scanf("%d",&a);
 int vetA[a];
 for(i=0;i<a;i++){
   scanf(" %d",&vetA[i]);
 }
 int b;
 scanf("%d",&b);
 int vetB[b];
 for(i=0;i<b;i++){
   scanf(" %d",&vetB[i]);
 }
if(a>1) 
  OrdenaVetor(vetA,a);
if(b>1) 
  OrdenaVetor(vetB,b);

for(i=j;;){
  if(i == a){
    printf("B");
    j++;
  }
  else if(j == b){
    printf("A");
    i++;
  }
  else{
    if(vetA[i] < vetB[j]){
      printf("A");
      i++;
    }
    else if(vetB[j] < vetA[i]){
      printf("B");
      j++;
    }
    else{
      printf("A");
      i++;
    }
  }
    
if(i>=a && j>=b) break;
}
return 0;
}