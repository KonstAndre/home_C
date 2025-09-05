#include <stdio.h>

int main(void)
{
    int min, arr[5];
    int i = 0;
    while(scanf("%d", &arr[i])==1&&++i<5);
    min = arr[0];
    for(int i = 0; i<5; i++)
    {
        min = arr[i]<min?arr[i]:min;
    }
    printf("%d", min);
    return 0;
}