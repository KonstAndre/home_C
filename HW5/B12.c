#include <stdio.h>

int main(void){
    int n, min=9, max=0;
    scanf("%d", &n);
    while(n>=1){
        min = n%10<min?n%10:min;
        max = n%10>max?n%10:max;
        n/=10;
    }
    printf("%d %d", min, max);
    return 0;
}