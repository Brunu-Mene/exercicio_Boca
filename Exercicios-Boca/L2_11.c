#include <stdio.h>

int main() {
  int n,m;
  scanf("%d%d",&n,&m);

  n = n + 1;
  while(n<m)
  {
    int ab,cd,ef;
    //capturando 2 primeiros digitos
    cd = n/100;
    //capturnado 2 ultimos digitos
    ab = n-((n/100)*100);

    ef = ab + cd;
    if(ef*ef == n){
      printf("%d\n",n);
    }

    n = n + 1;
  }

  return 0;
}