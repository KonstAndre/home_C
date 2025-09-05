#include <stdio.h>

int main(void)
{
    int arr[12];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<12);

    for(int i = 0; i<12; ++i)
    {
        res+=arr[i];
    }
    printf("%.2f", (double)res/(double)12);
    return 0;
}