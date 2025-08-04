#include <stdio.h>

int main(void){
    int x1, y1, x2, y2;
    float k, b;
    scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
    k = (float)(y2-y1)/(float)(x2-x1);
    b = (float)((y1+y2)-k*(x1+x2))/2;
    printf("%.2f %.2f", k, b);
    return 0;
}