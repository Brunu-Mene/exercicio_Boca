#include <stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);

    int d1 = 10,d2 = 10,d3 = 10;
    
    if(n1 > 99){
        n1 = n1/100;
        d1 = n1%10; 
    }
    if(n2 > 99){
        n2 = n2/100;
        d2 = n2%10; 
    }
    if(n3 > 99){
        n3 = n3/100;
        d3 = n3%10; 
    }

    if((d1 <= d2 && d1 <= d3)&&(d1!=10)){
        printf("N1");
    }else if((d2 <= d1 && d2 <= d3)&&(d2!=10)){
        printf("N2");
    }else if((d3 <= d1 && d3 <= d2)&&(d3!=10)){
        printf("N3");
    }else{
        printf("Nenhum");
    }
    

    return 0;
}