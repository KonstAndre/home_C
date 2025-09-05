#include <stdio.h>

int main(void)
{
    int tmp, arr[10];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);

    for(int i = 0; i<2; ++i)
    {
        tmp = arr[4-i];
        arr[4-i] = arr[i];
        arr[i]=tmp;
    }
    for(int i = 5; i<7; ++i)
    {
        tmp = arr[9-i+5];
        arr[9-i+5] = arr[i];
        arr[i]=tmp;
    }
    for(int i = 0; i<10; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}