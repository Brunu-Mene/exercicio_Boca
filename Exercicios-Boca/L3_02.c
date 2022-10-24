#include <stdio.h>
float Soma(float num1, float num2){
    return num1+num2;
}
float Subtracao(float num1, float num2){
    return num1-num2;
}
float Divisao(float num1, float num2){
    return num1/num2;
}
float Multiplicacao(float num1, float num2){
    return num1*num2;
}

int main(){
    float num,resultado;
    scanf("%f",&resultado);

    char op;
    while (scanf("%f %c",&num,&op) == 2){
        if(op == '+')
            resultado = Soma(resultado,num);
        else if(op == '*')
            resultado = Multiplicacao(resultado,num);
        else if(op == '-')
            resultado = Subtracao(resultado,num);
        else if(op == '/')
            resultado = Divisao(resultado,num);
    }
    printf("%.2f",resultado);
    return 0;
}