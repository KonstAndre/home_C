#include <stdio.h>

void first_rec(int);

int main(void)
{
    int x;
    scanf("%d", &x);
    first_rec(x);
    return 0;
}

void first_rec(int x)
{   
    while(x){
        first_rec(x-1);
        printf("%d ", x);
        break;
    }
}