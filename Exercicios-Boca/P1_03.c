#include <stdio.h>
#include <ctype.h>

int main(){
    char c1,c2,c3,c4;
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    c3 = toupper(c3);

    int aux=0;
    if(c1 < 'A' || c1 > 'Z'){
        aux++;
    }
    if(c2 < '0' || c2 > '9'){
        aux++;
    }
    if((c3 != 'A') && (c3 != 'E') && (c3 != 'I') && (c3 != 'O') && (c3 != 'U')){
        aux++;
    }
    if(c4 < 'a' || c4 > 'z'){
        aux++;
    }

    if(aux != 0){
        printf("Invalido");
    }else{
        c4 = toupper(c4);
        printf("%c%c%c%c",c1,c2,c3,c4);
    }

    return 0;
}