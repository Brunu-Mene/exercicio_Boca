#include <stdio.h>


int main(void) {
  int n,i,j;
  scanf("%d",&n);
  if(n!=0){
    int num[n];
    for(i=0;i<n;i++){
    scanf(" %d",&num[i]);
    }
    printf("{");
    int temp;
    for(i=0;i<n-1;i++){
      if(i%2==0){
        temp=num[i];
        num[i]=num[i+1];
        num[i+1]=temp;
      } 
    }
    for(i=0;i<n-1;i++)
    printf("%d,",num[i]);
    printf("%d}",num[n-1]);
  }
  if(n==0) printf("{}");
  return 0;
}