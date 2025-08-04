#include <stdio.h>

int main(void){
    int a, b;
    int res1, res2;
    scanf("%d %d", &a, &b);
    res1 = a>b?a:b;
    res2 = a>b?b:a;
    printf("%d %d", res2, res1);
    return 0;
}