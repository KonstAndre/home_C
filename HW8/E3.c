#include <stdio.h>

int main(void)
{
    int min, idx_min, max, idx_max, arr[10];
    int i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);
    min = arr[0];
    max = arr[0];
    idx_max = 1;
    idx_min = 1;
    for(int i = 0; i<10; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            idx_min = i+1;
        }
        if(arr[i]>max)
        {
            max = arr[i];
            idx_max = i+1;
        }
    }
    printf("%d %d %d %d", idx_max, max, idx_min, min);
    return 0;
}