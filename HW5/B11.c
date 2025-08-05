#include <stdio.h>

int main(void){
    int n, new_n=0, degree=1;
    scanf("%d", &n);
    while(n>=1){
        new_n*=degree;
        new_n += n%10;
        degree=10;
        n/=10;
    }
    printf("%d", new_n);
    return 0;
}