#include <stdio.h>
#include <math.h>

float sacar(float valor,float saldo)
{
  float saldofinal;
  saldofinal=saldo-valor;
  return saldofinal;
}

float depositar(float valor,float saldo)
{
  float saldofinal;
  saldofinal=saldo+valor;
  return saldofinal;
}

int main(void) {
  int ope,aux=0;
  char c;
  float valor,saldo;
  scanf("%f %d",&saldo,&ope);
  while(aux<ope)
  {
    aux++;
    scanf(" %c %f",&c,&valor);
    if(c=='S')
      saldo=sacar(valor,saldo);
    
    if(c=='D')
      saldo=depositar(valor,saldo);
  }
  if(saldo>0)
    printf("Positivo:%.2f",saldo);
  if(saldo==0)
    printf("Zerado:0.00");
  if(saldo<0)
    printf("Negativo:%.2f",saldo);
  return 0;
}