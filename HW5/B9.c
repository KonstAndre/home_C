#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d", &n);
    while(n>=1){
        if ((n%10)%2!=0){
            printf("NO");
            return 0;
        }
        n/=10;
    }
    printf("YES");
    return 0;
}