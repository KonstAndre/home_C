#include <stdio.h>

int main(void){
    int n, sum=0;
    scanf("%d", &n);
    while(n>=1){
        sum+=n%10;
        n/=10;
    }
    printf(sum==10?"YES":"NO");
    return 0;
}