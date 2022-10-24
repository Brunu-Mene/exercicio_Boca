#include "stdio.h"
#include "math.h"

typedef struct{
  char nome;
  float altura;
  float peso;
}tPessoa;

float IMC(float altura,float peso){
  float IMC1;
  IMC1=peso/(altura*altura);
  return IMC1;
}

int main(void) {
  tPessoa P;
  int n,aux=0;
  float IMCf,maisalta=0.0,maisbaixa=1000.0,pMaisAlta,IMCMaisAlta,pMaisBaixa,IMCMaisBaixa;
  char nMaisAlta,nMaisBaixa,quebra;
  scanf("%d",&n);
  while(aux<n)
  { 
    aux++;
    scanf("%c%c,%f,%f",&quebra,&P.nome,&P.altura,&P.peso);
    IMCf=IMC(P.altura,P.peso);
    if(P.altura>maisalta) 
    {
      maisalta=P.altura;
      nMaisAlta=P.nome;
      pMaisAlta=P.peso;
      IMCMaisAlta=IMCf;
    }
    if(P.altura<maisbaixa)
    {
      maisbaixa=P.altura;
      nMaisBaixa=P.nome;
      pMaisBaixa=P.peso;
      IMCMaisBaixa=IMCf;
    }
  }
  if(n!=0)
  {
  printf("Alta: N:%c A:%.2f P:%.2f I:%.2f\n",nMaisAlta,maisalta,pMaisAlta,IMCMaisAlta);
  printf("Baixa: N:%c A:%.2f P:%.2f I:%.2f\n",nMaisBaixa,maisbaixa,pMaisBaixa,IMCMaisBaixa);
  }
  return 0;
}