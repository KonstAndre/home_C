#include <stdio.h>

int main(void){
    int a, b, c, count;
    float res;
    count = scanf("%d %d %d", &a, &b, &c);
    res = ((float)a+(float)b+(float)c)/(float)count;
    printf("%.2f", res);
    return 0;
}