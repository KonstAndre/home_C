#include <stdio.h>

int main(void){
    int n, even_count=0;
    while (scanf("%d", &n)==1&&n!=0)
        even_count+= (n%2==0)?1:0;
    printf("%d", even_count);
    return 0;
}