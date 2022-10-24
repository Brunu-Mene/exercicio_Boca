#include <stdio.h>
typedef struct{
int dia;
int mes;
int ano;
}tData;

int verificadobi(int ano){
  if(ano%4==0 && ano%100!=0) return 1;
  if(ano%400==0) return 1;
  return 0;
}

int correcaoMes(int mes)
{
  if(mes>12) mes=12;
  if(mes<1) mes=01;
  return mes;
}

int correcaoDia(int dia,int mes,int veri)
{
  if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
  {
    if(dia>31) dia=31;
    if(dia<1) dia=1;
  }
  
  if(mes==4 || mes==6 || mes==9 || mes==11)
  {
    if(dia>30) dia=30;
    if(dia<1) dia=1;
  }
  
  if(mes==2)
  { 
    if(dia>(28+veri)) dia=28+veri;
    if(dia<1) dia=1;
  }
  return dia;
}
int main(void) {
  int aux=0,n,veri,id;
  tData est;
  scanf("%d",&n);
  while(aux<n)
  {
    aux++;
    scanf("%d %d %d",&est.dia,&est.mes,&est.ano);
    if((veri=verificadobi(est.ano))==1)
    {
      est.mes=correcaoMes(est.mes);
      est.dia=correcaoDia(est.dia,est.mes,veri);
      id=1;
    }
    if((veri=verificadobi(est.ano))==0)
    {
      est.mes=correcaoMes(est.mes);
      est.dia=correcaoDia(est.dia,est.mes,veri);
      id=0;
    }
    if(id==0)
    {
      if(est.dia<10 && est.mes<10)
        printf("'0%d/0%d/%d':Normal\n",est.dia,est.mes,est.ano);
      if(est.dia<10 && est.mes>=10)
        printf("'0%d/%d/%d':Normal\n",est.dia,est.mes,est.ano);
      if(est.dia>=10 && est.mes<10)
      printf("'%d/0%d/%d':Normal\n",est.dia,est.mes,est.ano);
      if(est.dia>=10 && est.mes>=10)
      printf("'%d/%d/%d':Normal\n",est.dia,est.mes,est.ano);
    }
    if(id==1)
    {
     if(est.dia<10 && est.mes<10)
        printf("'0%d/0%d/%d':Bisexto\n",est.dia,est.mes,est.ano);
      if(est.dia<10 && est.mes>=10)
        printf("'0%d/%d/%d':Bisexto\n",est.dia,est.mes,est.ano);
      if(est.dia>=10 && est.mes<10)
      printf("'%d/0%d/%d':Bisexto\n",est.dia,est.mes,est.ano);
      if(est.dia>=10 && est.mes>=10)
      printf("'%d/%d/%d':Bisexto\n",est.dia,est.mes,est.ano);
    }
  }
  return 0;
}