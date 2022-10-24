#include "stdio.h"

typedef struct
{
  int dia1,mes1,ano1;
  int dia2,mes2,ano2;
}tData;

int estabilizadorMes(int mes)
{
  if(mes>12) return 1;
  return 0;
}

int estabilizadorDia(int dia,int mes,int veri)
{
  if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
    if(dia>31) return 1;
   
  if(mes==4 || mes==6 || mes==9 || mes==11)
    if(dia>30) return 1;
 
  if(mes==2)
    if(dia>(28+veri)) return 1;
  return 0;
}

int Bisexto(int ano1)
{
  if(ano1%4==0 && ano1%100!=0) return 1;
  if(ano1%400==0) return 1;
  return 0;
}

int main(void) {
  tData est;
  int veri,aux;
  scanf("%d %d %d",&est.dia1,&est.mes1,&est.ano1);
  scanf("%d %d %d",&est.dia2,&est.mes2,&est.ano2);

  if(est.mes1==1 || est.mes1==3 || est.mes1==5 || est.mes1==7 || est.mes1==8 || est.mes1==10 || est.mes1==12)
    if(est.dia1>31) est.dia1=31;

  if(est.mes1==4 || est.mes1==6 || est.mes1==9 || est.mes1==11)
    if(est.dia1>30) est.dia1=30;

  veri=Bisexto(est.ano1);

  if(est.mes1==2)
    if(est.dia1>(28+veri)) est.dia1=28+veri;

  if(est.mes1>12)
    est.mes1=12;
  
  while(est.ano1<est.ano2 || est.mes1<est.mes2 || est.dia1<est.dia2)
  {
    if((veri=Bisexto(est.ano1))==1)
    {
      if(estabilizadorDia(est.dia1,est.mes1,veri)==1)
        {
          est.dia1=1;
          est.mes1=est.mes1+1;
          if(estabilizadorMes(est.mes1)==1)
          {
            est.mes1=1;
            est.ano1=est.ano1+1;
          }
        }
    }
    if((veri=Bisexto(est.ano1))==0)
    {
      if(estabilizadorDia(est.dia1,est.mes1,veri)==1)
        {
          est.dia1=1;
          est.mes1=est.mes1+1;
          if(estabilizadorMes(est.mes1)==1)
          {
            est.mes1=1;
            est.ano1=est.ano1+1;
          }
        }
    }
    if(est.dia1==est.dia2 && est.mes1==est.mes2 && est.ano1==est.ano2) break;
    if(est.dia1<10 && est.mes1<10)
      printf("'0%d/0%d/%d'\n",est.dia1,est.mes1,est.ano1);
    if(est.dia1<10 && est.mes1>=10)
      printf("'0%d/%d/%d'\n",est.dia1,est.mes1,est.ano1);
    if(est.dia1>=10 && est.mes1<10)
      printf("'%d/0%d/%d'\n",est.dia1,est.mes1,est.ano1);
    if(est.dia1>=10 && est.mes1>=10)
      printf("'%d/%d/%d'\n",est.dia1,est.mes1,est.ano1);
    est.dia1++;
  }
  return 0;
}