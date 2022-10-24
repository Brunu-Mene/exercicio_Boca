#include <stdio.h>

float FazOperacao(float num1, float num2, char op){
    if(op == '+') return num1+num2;
    else if(op == '/') return num1/num2;
    else if(op == '*') return num1*num2;
    else if(op == '-') return num1-num2;
}

float ResolveExpressao(){
    float num1,num2,result;
    char op;
    scanf("%f %f %c",&num1,&num2,&op);
    result = FazOperacao(num1,num2,op);

    char final;
    while(1){
        scanf("%c",&final);
        if(final == ')') break;

        float num3;
        scanf("%f %c",&num3,&op);
        result = FazOperacao(result,num3,op);
    }
    return result;
}

int main(){
    char texto;
    float num, maior;
    int id = 1;
    while(1){
        scanf("%c",&texto);
        if(texto == '.'){
            printf(".");
            break;
        }
        else if(texto == '('){
            num = ResolveExpressao();
            if(id == 1){
                id = 0;
                maior = num;
            }else if(num > maior){
                maior = num;
            }
            printf("%.2f",num);
        }
        else printf("%c",texto);
    }
    printf(" MAIOR:%.2f",maior);

    return 0;
}