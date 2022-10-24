#include "stdio.h"
#include "math.h"

typedef struct{
  int matricula;
  float p1,p2,p3;
}tAluno;

float CalMedia(float p1,float p2,float p3){
  float media;
  media=(p1+p2+p3)/3;
  return media;
}

int main(void) {
  tAluno A,AMaior;
  int n,aux=0;
  scanf("%d",&n);
  float mediaSingular,mediaGeral=0.0,maiorMedia=0.0;
  while(aux<n)
  {
    aux++;
    scanf("%d %f %f %f",&A.matricula,&A.p1,&A.p2,&A.p3);
    mediaSingular=CalMedia(A.p1,A.p2,A.p3);
    if(mediaSingular>maiorMedia)
    {
      maiorMedia=mediaSingular;
      AMaior=A;
    }
    mediaGeral+=mediaSingular;
  }
  if(n!=0)
  {
  printf("Maior Media: mat:%d n1:%.2f n2:%.2f n3:%.2f\n",AMaior.matricula,AMaior.p1,AMaior.p2,AMaior.p3);
  printf("Media geral:%.2f",mediaGeral/n);
  }
  return 0;
}