#include <stdio.h>

int main(void){
    int n, n_copy, cur, cur_copy;
    scanf("%d", &n);
    n_copy = n/10;
    while(n>=1){
        cur = n%10;
        n/=10;
        while (n_copy>=1){
            cur_copy = n_copy%10;
            if (cur==cur_copy){
                printf("YES");
                return 0;
            }
            n_copy/=10;
        }
        n_copy = n/10;
    }
    printf("NO");
    return 0;
}