#include <stdio.h>

float areacirculo(float raio)
{
  float a;
  a=3.141592*(raio*raio);
  return a;
}

float volumeCaixa(float raio,float altura)
{
  float a,volume;
  a=areacirculo(raio);
  volume=a*altura;
  return volume;
}

int main(void) {
  float casas,dias,raio,altura,gastosdia;
  float total,volume;
  scanf("%f %f %f %f %f",&casas,&raio,&altura,&gastosdia,&dias);
  if(casas>=0 && raio>=0 && altura>=0 && gastosdia>=0 && dias>=0)
  {
  volume=volumeCaixa(raio,altura);
  total=dias*volume*casas*gastosdia;
  printf("Resp:%.2f L",total);
  }
  return 0;
}