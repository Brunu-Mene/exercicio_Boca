#include <stdio.h>


int main(void) {
  int n,i,j;
  scanf("%d",&n);
  if(n!=0){
    int num[n];
    for(i=0;i<n;i++){
    scanf(" %d",&num[i]);
    }
    int temp;
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        if(num[i]>num[j]){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
        }
      }
    }
    printf("{");
    for(i=0;i<n-1;i++){
    printf("%d,",num[i]);
    }
    printf("%d}",num[n-1]);
  }
  if(n==0) printf("{}");
  return 0;
}