#include <stdio.h>
#include <math.h>

int main() {
  int opcao,auxb=50;
  scanf("%d",&opcao);

  //declarando variaveis do tipo double para maior precisao decimal
  double S=0,a=1,b=1;
  if(opcao==1)
  { 
    //looping para a soma de S1
    for(a,b;(a<=99 && b<=50);a=a+2,b++)
    {
      //incrementando a sequencia de fracoes
      S=S+(a/b);
    }
    printf("%.6f",S);
  }
  else if(opcao==2)
  {
    //looping para a soma de S2
    for(a;a<=50;a++)
    {
      S=S+(pow(2,a)/auxb);
      auxb=auxb-1;  
    }
    printf("%.6f",S);
  }
  else if(opcao==3)
  {
    //looping para a soma de S3
    for(a;a<=10;a++)
    {
      b=a*a;
      S=S+(a/b);
    }
    printf("%.6f",S);
  }
  return 0;
}