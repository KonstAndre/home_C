#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d", &n);
    while(n>=1){
        count++;
        n/=10;
    }
    printf(count==3?"YES":"NO");
    return 0;
}