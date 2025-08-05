#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d", &n);
    while(n>=1){
        count+=(n%10==9?1:0);
        if (count>1){
            printf("NO");
            return 0;
        }
        n/=10;
    }
    printf(count==1?"YES":"NO");
    return 0;
}