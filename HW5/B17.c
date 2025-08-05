#include <stdio.h>

int main(void){
    int n, n_copy, sum=0, mul=1;
    scanf("%d", &n);

    for (int i = 10; i<=n; i++){
        n_copy = i;
        while(n_copy>=1){
            sum+=n_copy%10;
            mul*=n_copy%10;
            n_copy/=10;
        }
        if (sum==mul)
            printf("%d ", i);
    }
    return 0;
}