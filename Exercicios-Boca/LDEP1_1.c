#include <stdio.h>

int main(){
     int a = 0, b, c, d;

	scanf("%d",&d);
    while(a < d){
        scanf("%d %d",&b,&c);
        printf("%d\n", b + c);
        a++;
    }

    return 0;
}