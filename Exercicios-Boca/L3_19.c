#include <stdio.h>

float tempoChegada(float distancia,float velocidade)
{
  float tempo;
  tempo=distancia/velocidade;
  return tempo;
}

int main(void) {
  int contador,aux=0;
  char c,acidade;
  float distancia,velocidade,maisproxima=10000.0,tempo;
  scanf("%d ",&contador);
  while(aux<contador)
  {
    aux++;
    scanf("%c %f ",&c,&distancia);
    if(distancia<maisproxima) 
    {
      maisproxima=distancia;
      acidade=c;
    }
    if(aux==contador)
      scanf("%f",&velocidade);
  }
    tempo=tempoChegada(maisproxima,velocidade);
    printf("c:%c d:%.2f t:%.2f",acidade,maisproxima,tempo);
  return 0;
}