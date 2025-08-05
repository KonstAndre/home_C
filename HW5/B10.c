#include <stdio.h>

int main(void){
    int n, max;
    scanf("%d", &n);
    max = n%10;
    n/=10;
    while(n>=1){
        if (n%10>max||n%10==max){
            printf("NO");
            return 0;
        }
        max=n%10;
        n/=10;
    }
    printf("YES");
    return 0;
}