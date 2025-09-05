#include <stdio.h>

int main(void)
{
    int arr[10];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);

    for(int i = 0; i<10; ++i)
    {
        res+=(arr[i]>=0)?arr[i]:0;
    }
    printf("%d", res);
    return 0;
}