#include <stdio.h>

int main(void){
    int dig, count=0, max=-1;
    while(scanf("%d", &dig)==1&&count<3){
        if (max>=dig){
            printf("NO");
            return 0;
        }
        max = dig;
        count++;
    }
    printf("YES");
    return 0;
}