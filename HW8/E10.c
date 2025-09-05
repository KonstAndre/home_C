#include <stdio.h>

int main(void)
{
    int tmp, arr[12];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<12);
    
    for(int j = 0; j<4;++j){
        tmp = arr[11];
        for(int i = 11; i>0; --i)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = tmp;
    }
    for(int i = 0; i<12; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}