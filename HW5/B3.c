#include <stdio.h>

int main(void){
    int a, b, res=0;
    scanf("%d %d", &a, &b);
    for(int i = a; i<=b; i++){
        res+=i*i;
    }
    printf("%d", res);
    return 0;
}