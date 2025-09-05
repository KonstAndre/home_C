#include <stdio.h>

int main(void)
{
    int arr[10], arr_copy[10], cnt = 0;
    while(scanf("%d", &arr[cnt])==1&&++cnt<10);
    cnt = 0;
    for(int i = 0;i<10; ++i)
    {
        if(arr[i]/10%10==0)
        {
            arr_copy[cnt] = arr[i];
            cnt++;
        }
    }
    for(int i = 0; i<cnt; ++i)
    {
        printf("%d ", arr_copy[i]);
    }
    return 0;
}