#include <stdio.h>

int main(){
    int n, i, maiorNota = -1, menorNota = 6, media = 0, id = 0;
    int maiorNotaGeral = -1, menorNotaGeral = 6, maiorId = 0, qtdCri = 0;
    char fMaiorGeral1,fMaiorGeral2,fMaiorGeral3;
    char fMenorGeral1,fMenorGeral2,fMenorGeral3;
    char fMaisC1,fMaisC2,fMaisC3;
    int maiorQtdC = 0;
    char gMaisP1,gMaisP2,gMaisP3;
    int maiorMedia = 0;
    char gMaiorMedia1,gMaiorMedia2,gMaiorMedia3;
    int maiorNotaPopular;
    char maiorNotaPop1,maiorNotaPop2,maiorNotaPop3;
    
    char limpa;
    scanf("%d%c",&n,&limpa);
    if(n!= 0){
        int semNota = 0;
        char fMaior1,fMaior2,fMaior3;
        char fMenor1,fMenor2,fMenor3;

        for(i=0; i<n ;i++){
            char g1,g2,g3;
            scanf("#%c%c%c\n",&g1,&g2,&g3);

            char f1,f2,f3;
            do{
                scanf("%c%c%c",&f1,&f2,&f3);
                if(f1 == 'F' && f2=='I' && f3 == 'M') break;

                char quebra;
                scanf(" [%c",&quebra);
                if(quebra != ']'){
                    do{
                        if(quebra != ',' ){
                            int nota = quebra - 48;
                            media += nota;
                            id++;
                            qtdCri++;
                            if(qtdCri > maiorId){
                                maiorId = qtdCri;
                                fMaisC1 = f1;
                                fMaisC2 = f2;
                                fMaisC3 = f3;
                            }
                            if(nota > maiorNota){
                                maiorNota = nota;
                                fMaior1 = f1;
                                fMaior2 = f2;
                                fMaior3 = f3;
                            }
                            if(nota < menorNota){
                                menorNota = nota;
                                fMenor1 = f1;
                                fMenor2 = f2;
                                fMenor3 = f3;
                            }
                            if(nota > maiorNotaGeral){
                                maiorNotaGeral = nota;
                                fMaiorGeral1 = f1;
                                fMaiorGeral2 = f2;
                                fMaiorGeral3 = f3;
                            }
                            if(nota < menorNotaGeral){
                                menorNotaGeral = nota;
                                fMenorGeral1 = f1;
                                fMenorGeral2 = f2;
                                fMenorGeral3 = f3;
                            }
                        }
                        scanf("%c",&quebra);
                    }while(quebra != ']');
                }else{
                    semNota++;
                }
                char limpa;
                scanf("%c",&limpa);
                qtdCri = 0;
            }while(1);
            if(i != n-1){
                char limpa;
                scanf("%c%c",&limpa,&limpa);
            }

            printf("FILME DO GENERO %c%c%c COM MAIOR NOTA: %c%c%c (%d)\n",g1,g2,g3,fMaior1,fMaior2,fMaior3,maiorNota);
            printf("FILME DO GENERO %c%c%c COM MENOR NOTA: %c%c%c (%d)\n",g1,g2,g3,fMenor1,fMenor2,fMenor3,menorNota);
            printf("MEDIA DO GENERO %c%c%c: %d\n\n",g1,g2,g3,media/id);

            if(id > maiorQtdC){
                maiorQtdC = id;
                gMaisP1 = g1;
                gMaisP2 = g2;
                gMaisP3 = g3;

                maiorNotaPopular = maiorNota;
                maiorNotaPop1 = fMaior1,
                maiorNotaPop2 = fMaior2;
                maiorNotaPop3 = fMaior3;        
            }
            media = media/id;
            if(media > maiorMedia){
                maiorMedia = media;
                gMaiorMedia1 = g1;
                gMaiorMedia2 = g2;
                gMaiorMedia3 = g3;
            }
            maiorNota = -1;
            menorNota = 6;
            media = 0;
            id = 0;
        }
        printf("FILME GERAL COM MAIOR NOTA: %c%c%c (%d)\n",fMaiorGeral1,fMaiorGeral2,fMaiorGeral3,maiorNotaGeral);
        printf("FILME GERAL COM MENOR NOTA: %c%c%c (%d)\n",fMenorGeral1,fMenorGeral2,fMenorGeral3,menorNotaGeral);
        printf("FILME MAIS POPULAR: %c%c%c (%d CRITICAS)\n",fMaisC1,fMaisC2,fMaisC3,maiorId);
        printf("GENERO MAIS POPULAR: %c%c%c (%d CRITICAS)\n",gMaisP1,gMaisP2,gMaisP3,maiorQtdC);
        printf("GENERO COM MAIOR MEDIA TRUNCADA: %c%c%c (%d)\n",gMaiorMedia1,gMaiorMedia2,gMaiorMedia3,maiorMedia);
        printf("FILME COM MAIOR NOTA DO GENERO MAIS POPULAR: %c%c%c (%d)\n",maiorNotaPop1,maiorNotaPop2,maiorNotaPop3,maiorNotaPopular);
        printf("FILMES QUE NAO POSSUEM CRITICAS: %d\n",semNota);
    }

    return 0;
}