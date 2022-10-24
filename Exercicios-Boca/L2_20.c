#include <stdio.h>

int main() {
  float a,b,c,d;
  int e,f,pico,vale,aux=0,aux1=0;
  double solu,solu1,solu2;
  scanf("%f%f%f%f%d%d",&a,&b,&c,&d,&e,&f);
  while(e<=f)
  {
    solu=(a*e*e*e)+(b*e*e)+(c*e)+d;
    e=e-1;
    solu1=(a*e*e*e)+(b*e*e)+(c*e)+d;
    e=e+2;
    solu2=(a*e*e*e)+(b*e*e)+(c*e)+d;
    e=e-1;
    if(solu1<solu && solu>solu2)
    {
      pico=e;
      aux1=1;
    }
    if(solu1>solu && solu2>solu)
    {
      vale=e;
      aux=1;
    } 
    e++;
  }
  if(aux==0 && aux1==0)
  {
    printf("Nao ha pico\n");
    printf("Nao ha vale");
  }
  if(aux==1 && aux1==1 && pico<vale)
  {
  printf("Pico em x=%d\n",pico);
  printf("Vale em x=%d",vale);
  }
  if(aux==0 && aux1==1)
  {
    printf("Pico em x=%d\n",pico);
    printf("Nao ha vale");
  }
  if(aux==1 && aux1==0)
  {
    printf("Vale em x=%d\n",vale);
    printf("Nao ha pico");
  }
  if(aux==1 && aux1==1 && pico>vale)
  {
  printf("Vale em x=%d\n",vale);
  printf("Pico em x=%d",pico);
  }
  return 0;
}