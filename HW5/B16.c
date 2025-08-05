#include <stdio.h>

int main(void){
    int a, b, r=1;
    scanf("%d %d", &a, &b);
    while(r!=0){

        if (a==b){
            printf("%d", a);
            return 0;
        } else if (a>b){
            a%=b;
            if (a==0)
                break;
            r=a;
        } else {
            b%=a;
            if (b==0)
                break;
            r=b;
        }
    }
    printf("%d", r);
    return 0;
}