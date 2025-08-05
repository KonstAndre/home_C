#include <stdio.h>

int main(void){
    int n, prev, cur, res;
    scanf("%d", &n);
    prev = 1;
    cur = 1;
    if (n==1){
        printf("%d", 1);
    } else if(n==2){
        printf("%d %d", 1, 1);
    } else{
        printf("%d %d ", 1, 1);
        for(int i = 1; i<(n-1); i++){
            res = prev+cur;
            printf("%d ", res);
            prev = cur;
            cur = res;
        }

    }
    return 0;
}