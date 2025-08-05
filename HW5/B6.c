#include <stdio.h>

int main(void){
    int n, prev, cur, flag1=0, flag2=0;
    scanf("%d", &n);
    while(n>=1){
        if (flag1==0){
            prev = n%10;
            n/=10;
            flag1++;
            continue;
        }
        cur = n%10;
        if (cur==prev){
            flag2=1;
            break;
        }
        prev = n%10;
        n/=10;
    }
    printf(flag2==1?"YES":"NO");
    return 0;
}