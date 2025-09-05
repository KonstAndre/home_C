#include <stdio.h>

void sorting(int* ptr[5], int);

int main(void)
{
    int arr[10];
    int res = 0, i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);

    int baff1[5], baff2[5];
    int k, j;

    for(k = 0; k<5-1; ++k)
    {
        for(j = 0; j<5-k-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(k = 0; k<5-1; ++k)
        {
            for(j = 5; j<10-k-1; ++j)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    
    for(int i = 0; i<10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
