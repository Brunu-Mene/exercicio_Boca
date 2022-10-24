#include <stdio.h>
#include <stdlib.h>

int main(){
  int aux,n;
  scanf("%d",&n);
  for(aux=0;aux<n;aux++){
    int C1,C2,L1,L2,i,j;
    scanf("%d %d",&C1,&L1);
    int Matriz1[L1][C1];
    for(i=0;i<L1;i++){
      for(j=0;j<C1;j++){
        scanf("%d ",&Matriz1[i][j]);
      }
    }
    scanf("%d %d",&C2,&L2);
    int Matriz2[L2][C2];
    for(i=0;i<L2;i++){
      for(j=0;j<C2;j++){
        scanf("%d ",&Matriz2[i][j]);
      }
    }
    if(C1==L2){
      int MatrizResult[L1][C2],x,total=0;
      for(i=0;i<L1;i++){
        for(j=0;j<C2;j++){
          MatrizResult[i][j]=0;
          for(x=0;x<L2;x++){
            total+=Matriz1[i][x]*Matriz2[x][j];
          }
          MatrizResult[i][j]=total;
          total=0;
        }
      }
      for(i=0;i<L1;i++){
        for(j=0;j<C2;j++){
          printf("%d ",MatrizResult[i][j]);
        }
        printf("\n");
      }
    }
    else printf("\nIMPOSSIVEL\n");

    printf("\n");
  }
return 0;
}