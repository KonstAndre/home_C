#include <stdio.h>

int main(void)
{
    int num, arr[5];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<5);
    for(i = 0; i<5; i++)
    {
        res+=arr[i];
    }
    printf("%.3f", (float)res/5.0);
    return 0;
}