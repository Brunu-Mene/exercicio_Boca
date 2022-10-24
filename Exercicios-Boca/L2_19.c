#include <stdio.h>
#include <stdlib.h>

typedef struct atleta
{
    int atleta;
    int notas[3];
} Atleta;

typedef struct delegacao
{
    int melhorMasc;
    int notasMM[3];
    int melhorFem;
    int notasMF[3];
    int piorMasc;
    int notasPM[3];
    int piorFem;
    int notasPF[3];
    int somaMasc;
    int somaFem;
} Delegacao;

//funcoes---------------------------------------------------------------------

void recebeAtletas(Delegacao *del, int qtdDel);
void preencheDelegacaoNulo(Delegacao *del, int qtdDel);
Delegacao comparaAtletasHomem(Delegacao del, Atleta atual);
Delegacao comparaAtletasMulher(Delegacao del, Atleta atual);
Atleta organizaNotas(Atleta atual);
void imprimeTela(Delegacao *del, int qtdDel);

//----------------------------------------------------------------------------

int main(void)
{
    int qtdDel, i;
    Delegacao *del;

    scanf("%d", &qtdDel);

    if (qtdDel <= 0)
    {
        printf("DELEGACAO CAMPEA:\nMASCULINO: Nenhum FEMININO: Nenhum\n");
        return 0;
    }

    del = malloc(qtdDel * sizeof(Delegacao));

    preencheDelegacaoNulo(del, qtdDel);
    recebeAtletas(del, qtdDel);
    imprimeTela(del, qtdDel);

    free(del);
    return 0;
}

void preencheDelegacaoNulo(Delegacao *del, int qtdDel)
{
    int i;

    for (i = 0; i < qtdDel; i++)
    {
        del[i].melhorMasc = -1;
        del[i].notasMM[0] = -1;
        del[i].notasMM[1] = -1;
        del[i].notasMM[2] = -1;
        del[i].melhorFem = -1;
        del[i].notasMF[0] = -1;
        del[i].notasMF[1] = -1;
        del[i].notasMF[2] = -1;
        del[i].piorMasc = -1;
        del[i].notasPM[0] = 11;
        del[i].notasPM[1] = 11;
        del[i].notasPM[2] = 11;
        del[i].piorFem = -1;
        del[i].notasPF[0] = 11;
        del[i].notasPF[1] = 11;
        del[i].notasPF[2] = 11;
        del[i].somaMasc = 0;
        del[i].somaFem = 0;
    }
}

void recebeAtletas(Delegacao *del, int qtdDel)
{
    int i, nota, pos;
    char sex;
    Atleta atual;

    atual.atleta = -1;
    atual.notas[0] = -1;
    atual.notas[1] = -1;
    atual.notas[2] = -1;
    for (i = 0; i < qtdDel; i++)
    {
        do
        {
            scanf("%d", &pos);
            if (pos != -1)
            {
                scanf(" %c %d %d %d", &sex, &atual.notas[0], &atual.notas[1], &atual.notas[2]);

                atual.atleta = pos;
                //printf("\nn1: %d, n2: %d, n3: %d\n", atual.notas[0], atual.notas[1], atual.notas[2]);
                atual = organizaNotas(atual);
                //printf("\nn1: %d, n2: %d, n3: %d\n", atual.notas[0], atual.notas[1], atual.notas[2]);
                if (sex == 'M')
                {
                    del[i] = comparaAtletasHomem(del[i], atual);
                }
                else if (sex == 'F')
                {
                    del[i] = comparaAtletasMulher(del[i], atual);
                }
            }
        } while (pos != -1);
    }
}

Atleta organizaNotas(Atleta atual)
{
    int a = atual.notas[0];
    int b = atual.notas[1];
    int c = atual.notas[2];
    int d, i = 0;

    if (a < b)
    {
        d = a;
        a = b;
        b = d;
        if (b < c)
        {
            d = b;
            b = c;
            c = d;
        }
    }
    if (a < c)
    {
        d = a;
        a = c;
        c = d;
        if (b < c)
        {
            d = c;
            c = b;
            b = d;
        }
    }
    if (b < c)
    {
        d = b;
        b = c;
        c = d;
    }
    if (a < b)
    {
        d = a;
        a = b;
        b = d;
    }

    atual.notas[0] = a;
    atual.notas[1] = b;
    atual.notas[2] = c;

    return atual;
}

Delegacao comparaAtletasHomem(Delegacao del, Atleta atual)
{
    if (atual.notas[0] > del.notasMM[0])
    {
        del.melhorMasc = atual.atleta;
        del.notasMM[0] = atual.notas[0];
        del.notasMM[1] = atual.notas[1];
        del.notasMM[2] = atual.notas[2];
    }
    else if (atual.notas[0] == del.notasMM[0])
    {
        if (atual.notas[1] > del.notasMM[1])
        {
            del.melhorMasc = atual.atleta;
            del.notasMM[0] = atual.notas[0];
            del.notasMM[1] = atual.notas[1];
            del.notasMM[2] = atual.notas[2];
        }
        else if (atual.notas[1] == del.notasMM[1])
        {
            if (atual.notas[2] > del.notasMM[2])
            {
                del.melhorMasc = atual.atleta;
                del.notasMM[0] = atual.notas[0];
                del.notasMM[1] = atual.notas[1];
                del.notasMM[2] = atual.notas[2];
            }
        }
    }
    if (atual.notas[0] < del.notasPM[0])
    {
        del.piorMasc = atual.atleta;
        del.notasPM[0] = atual.notas[0];
        del.notasPM[1] = atual.notas[1];
        del.notasPM[2] = atual.notas[2];
    }
    else if (atual.notas[0] == del.notasPM[0])
    {
        if (atual.notas[1] < del.notasPM[1])
        {
            del.piorMasc = atual.atleta;
            del.notasPM[0] = atual.notas[0];
            del.notasPM[1] = atual.notas[1];
            del.notasPM[2] = atual.notas[2];
        }
        else if (atual.notas[1] == del.notasPM[1])
        {
            if (atual.notas[2] < del.notasPM[2])
            {
                del.piorMasc = atual.atleta;
                del.notasPM[0] = atual.notas[0];
                del.notasPM[1] = atual.notas[1];
                del.notasPM[2] = atual.notas[2];
            }
            else if (atual.notas[2] == del.notasPM[2])
            {
                del.piorMasc = atual.atleta;
                del.notasPM[0] = atual.notas[0];
                del.notasPM[1] = atual.notas[1];
                del.notasPM[2] = atual.notas[2];
            }
        }
    }
    del.somaMasc += atual.notas[0];
    return del;
}

Delegacao comparaAtletasMulher(Delegacao del, Atleta atual)
{
    if (atual.notas[0] > del.notasMF[0])
    {
        del.melhorFem = atual.atleta;
        del.notasMF[0] = atual.notas[0];
        del.notasMF[1] = atual.notas[1];
        del.notasMF[2] = atual.notas[2];
    }
    else if (atual.notas[0] == del.notasMF[0])
    {
        if (atual.notas[1] > del.notasMF[1])
        {
            del.melhorFem = atual.atleta;
            del.notasMF[0] = atual.notas[0];
            del.notasMF[1] = atual.notas[1];
            del.notasMF[2] = atual.notas[2];
        }
        else if (atual.notas[1] == del.notasMF[1])
        {
            if (atual.notas[2] > del.notasMF[2])
            {
                del.melhorFem = atual.atleta;
                del.notasMF[0] = atual.notas[0];
                del.notasMF[1] = atual.notas[1];
                del.notasMF[2] = atual.notas[2];
            }
        }
    }

    if (atual.notas[0] < del.notasPF[0])
    {
        del.piorFem = atual.atleta;
        del.notasPF[0] = atual.notas[0];
        del.notasPF[1] = atual.notas[1];
        del.notasPF[2] = atual.notas[2];
    }
    else if (atual.notas[0] == del.notasPF[0])
    {
        if (atual.notas[1] < del.notasPF[1])
        {
            del.piorFem = atual.atleta;
            del.notasPF[0] = atual.notas[0];
            del.notasPF[1] = atual.notas[1];
            del.notasPF[2] = atual.notas[2];
        }
        else if (atual.notas[1] == del.notasPF[1])
        {
            if (atual.notas[2] < del.notasPF[2])
            {
                del.piorFem = atual.atleta;
                del.notasPF[0] = atual.notas[0];
                del.notasPF[1] = atual.notas[1];
                del.notasPF[2] = atual.notas[2];
            }
            else if (atual.notas[2] == del.notasPF[2])
            {
                del.piorFem = atual.atleta;
                del.notasPF[0] = atual.notas[0];
                del.notasPF[1] = atual.notas[1];
                del.notasPF[2] = atual.notas[2];
            }
        }
    }
    del.somaFem += atual.notas[0];
    return del;
}

void imprimeTela(Delegacao *del, int qtdDel)
{
    int i, campeaMasc[2] = {0, -1}, campeaFem[2] = {0, -1};

    for (i = 0; i < qtdDel; i++)
    {
        printf("MELHORES ATLETAS DA DELEGACAO %d\n", i + 1);

        if (del[i].melhorMasc == -1)
        {
            printf("MASCULINO: Nenhum ");
        }
        else
        {
            printf("MASCULINO: %d ", del[i].melhorMasc);
        }

        if (del[i].melhorFem == -1)
        {
            printf("FEMININO: Nenhum\n");
        }
        else
        {
            printf("FEMININO: %d\n", del[i].melhorFem);
        }

        printf("PIORES ATLETAS DA DELEGACAO %d\n", i + 1);

        if (del[i].piorMasc == -1)
        {
            printf("MASCULINO: Nenhum ");
        }
        else
        {
            printf("MASCULINO: %d ", del[i].piorMasc);
        }

        if (del[i].piorFem == -1)
        {
            printf("FEMININO: Nenhum\n\n");
        }
        else
        {
            printf("FEMININO: %d\n\n", del[i].piorFem);
        }

        if (del[i].somaMasc > campeaMasc[0])
        {
            campeaMasc[0] = del[i].somaMasc;
            campeaMasc[1] = i + 1;
        }

        if (del[i].somaFem > campeaFem[0])
        {
            campeaFem[0] = del[i].somaFem;
            campeaFem[1] = i + 1;
        }
    }
    printf("DELEGACAO CAMPEA:\n");
    if (campeaMasc[1] == -1)
    {
        printf("MASCULINO: Nenhum ");
    }
    else
    {
        printf("MASCULINO: %d ", campeaMasc[1]);
    }
    if (campeaFem[1] == -1)
    {
        printf("FEMININO: Nenhum\n");
    }
    else
    {
        printf("FEMININO: %d\n", campeaFem[1]);
    }
}