#include <stdio.h>

int area (int x1, int y1, int x2, int y2){
    int area;
    area = (x2-x1)*(y2-y1);
    return area;
}

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2){
    int areaFinal, areaContida = 0;
    if(r1_x2>r2_x1 && r1_y2>r2_y1){
        areaContida = area(r1_x2,r1_y2,r2_x1,r2_y1);
    }
    areaFinal = area(r1_x1,r1_y1,r1_x2,r1_y2) + area(r2_x1,r2_y1,r2_x2,r2_y2) - areaContida;

    return areaFinal;
}

int main(){
    int r1_x1,r1_y1,r1_x2,r1_y2;
    int r2_x1,r2_y1,r2_x2,r2_y2;
    scanf("%d %d %d %d",&r1_x1,&r1_y1,&r1_x2,&r1_y2);
    scanf("%d %d %d %d",&r2_x1,&r2_y1,&r2_x2,&r2_y2);

    int area = area_total(r1_x1,r1_y1,r1_x2,r1_y2,r2_x1,r2_y1,r2_x2,r2_y2);

    printf("RESP:%d",area);
    return 0;
}