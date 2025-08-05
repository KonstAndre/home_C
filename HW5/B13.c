#include <stdio.h>

int main(void){
    int n, even_c=0, odd_c=0;
    scanf("%d", &n);
    while(n>=1){
        even_c += (n%10%2==0)?1:0;
        odd_c += (n%10%2!=0)?1:0;
        n/=10;
    }
    printf("%d %d", even_c, odd_c);
    return 0;
}