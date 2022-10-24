#include <stdio.h>

int verificadordepH(float pH)
{
  if(pH>=0.0 && pH<7.0) 
    return 1;
  if(pH==7.0) 
    return 0;
  if(pH>7.0 && pH<=14.0) 
    return 2;
}

int VerificadorAcidez(float pH)
{
  if(pH<5.7){
    return 1;
  }
  return 0;
}

float porcentagem(float total,float valor)
{
  return (valor/total)*100;;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
  if(porcentagemGotasChuvaAcida>=75){
    printf("Chuva Acida %.2f%% %.2f%%",porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
  }else if(porcentagemGotasChuvaNormal>=75){
    printf("Chuva Normal %.2f%% %.2f%%",porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
  }else{
    printf("Chuva com indicios de chuva acida %.2f%% %.2f%%",porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
  }
}

int main(void){
  int area,densidade,tempo;
  int phA = 0,phB = 0,phN = 0;
  float maisA = 14.0, maisB = 0.0, maisN,dif = 14;
  int qtdAC = 0, qtdNAC = 0;
  scanf("%d %d %d",&area,&densidade,&tempo);
  if(area == 0 || densidade == 0 || tempo == 0){
    printf("Nenhuma gota foi avaliada");
  }
  else{
  int id;
  for(id=0; id < area*densidade*tempo ; id++){
      float p;
      scanf("%f",&p);
      if(verificadordepH(p) == 1){
        if(p < maisA){
        maisA = p;
        }
        phA++;
      }else if(verificadordepH(p) == 2){
        if(p > maisB){
        maisB = p;
        }
        phB++;
      }else if(verificadordepH(p) == 0){
        phN++;
      }
      if(p>7){
        if(dif > p-7){
          dif = p-7;
          maisN = p;
        }
      }else if(p<7){
        if(dif > 7-p){
          dif = 7-p;
          maisN = p;
        }
      }else{
        dif = 0;
        maisN = 7.00;
      }

      if(VerificadorAcidez(p) == 1){
        qtdAC++;
      }else{
        qtdNAC++;
      }

    }
    printf("%d %d %d %.2f %.2f %.2f\n",phA,phB,phN,maisA,maisB,maisN);
    float porcentagemGotasChuvaAcida = porcentagem(area*densidade*tempo,qtdAC);
    float porcentagemGotasChuvaNormal = porcentagem(area*densidade*tempo,qtdNAC);
    imprimeResultadosAnalise(porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
  }
  return 0;
}
