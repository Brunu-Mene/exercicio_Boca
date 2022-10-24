#include <stdio.h>

int main() {
 int n,m;
 scanf("%d%d",&n,&m);
 n = n + 1;
 //looping para percorrer os numero no intervalo m<Numero<m
 for(n; n<m ;n++)
 {
   int divisor = 2;
   //descobrindo primeiro divisor inteiro
   while(n%divisor !=0)
   {
     divisor++;
   }
   //verificando se eh primo
   if(n==divisor)
    {
      printf("%d\n",divisor);

      //verificando se o proximo multiplo do primo esta no intervalo
      if(n*2 >= m){
      printf("*\n");
      }
      else
      {
        int auxiliar;
        int proxMult;
        auxiliar=n;
        proxMult=n;

        //looping para pegar os multiplos dentro do intervalo
        while(proxMult + auxiliar < m)
        {
          proxMult = proxMult + auxiliar;
          printf("%d ",proxMult);
        }
        printf("\n");
      }
    }
 }
  return 0;
}