#include <stdio.h>

int main(void){
    int a, b, c;
    int res1, res2;
    scanf("%d %d %d", &a, &b, &c);
    res1=a+b+c;
    res2=a*b*c;
    printf("%d+%d+%d=%d\n", a,b,c,res1);
    printf("%d*%d*%d=%d", a,b,c,res2);
}