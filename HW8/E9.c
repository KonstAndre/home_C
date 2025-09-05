#include <stdio.h>

int main(void)
{
    int tmp, arr[10];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);
    tmp = arr[9];
    for(int i = 9; i>0; --i)
    {

        arr[i] = arr[i-1];
    }
    arr[0] = tmp;
    for(int i = 0; i<10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}