#include <stdio.h>

int main(void){
    int n, count=0;
    while (scanf("%d", &n)==1&&n!=0)
        count++;
    printf("%d", count);
    return 0;
}