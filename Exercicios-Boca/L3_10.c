#include <stdio.h>

int EhLetra (char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        return 1;

    return 0;
}

int EhLetraMaiuscula (char c){
    if(c>='A' && c<='Z') 
        return 1;

    return 0;
}

int EhLetraMinuscula (char c){
    if(c>='a' && c<='z')
        return 1;

    return 0;
}

char Codifica(char letra, int n){
    if(EhLetra(letra) == 0) 
        return letra;

    if(EhLetraMinuscula(letra) == 1){
        letra = letra+(n%26);
        if(letra > 'z'){
            letra = letra-26;
        }
    }else if(EhLetraMaiuscula(letra) == 1){
        letra = letra+2*(n%26);
        if(letra > 'Z'){
            letra = letra-26;
        }
    }
    return letra;
}

char Decodifica (char letra, int n){
    if(EhLetra(letra) == 0) 
        return letra;

    if(EhLetraMinuscula(letra) == 1){
        letra = letra-(n%26);
        if(letra < 'a'){
            letra = letra+26;
        }
    }else if(EhLetraMaiuscula(letra) == 1){
        letra = letra-2*(n%26);
        if(letra < 'A'){
            letra = letra+26;
        }
    }
    return letra;
}

int main(){
    int mod,chave;
    char letra;
    scanf("%d %d ",&mod,&chave);

    if(mod == 1){
        while(1){
            scanf("%c",&letra);
            if(letra == '.'){
                break;
            }
            letra = Codifica(letra,chave);
            printf("%c",letra);
        }
        printf(".");
    }else if(mod == 2){
        while(1){
            scanf("%c",&letra);
            if(letra == '.'){
                break;
            }
            letra = Decodifica(letra,chave);
            printf("%c",letra);
        }
        printf(".");
    }else{
        printf("Operacao invalida.");
    }
    return 0;
}