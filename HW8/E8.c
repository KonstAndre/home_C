#include <stdio.h>

int main(void)
{
    int tmp, tmp2, arr[12];
    int i = 0;
    while(scanf("%d", &arr[i])==1&&++i<12);

    for(int i = 0; i<12;)
    {
        tmp = arr[i];
        arr[i] = arr[i+3];
        tmp2 = arr[i+1];
        arr[i+1] = arr[i+2];
        arr[i+2] = tmp2;
        arr[i+3] = tmp;
        i+=4;
    }
    for(int i = 0; i<12; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}