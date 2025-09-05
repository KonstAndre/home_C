#include <stdio.h>

int main(void)
{
    int max1, max2, arr[10];
    int i = 0;
    while(scanf("%d", &arr[i])==1&&++i<10);
    max1 = -100;
    max2 = -100;
    for(int i = 0; i<10; ++i)
    {
        if(arr[i]>max2)
        {
            max1 = max2;
            max2=arr[i];
        } else if (arr[i]<max2&&arr[i]>max1)
        {
            max1 = arr[i];
        } else if (arr[i]==max2){
            max1 = max2;
        }
        
    }
    printf("%d", max1+max2);
    return 0;
}