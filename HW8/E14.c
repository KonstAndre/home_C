#include <stdio.h>

int dell_elem(int*, int, int);

int main(void)
{
    int tmp, arr[11], arr_copy[11], cnt = 0;
    while(scanf("%d", &arr[cnt])==1&&++cnt<10);
    int arr_len = cnt;
    cnt = 0;
    for(int i = 0; i< arr_len; ++i)
    {
        tmp = arr[i];
        int cnt_w = 1;
        arr_len = dell_elem(arr, i, arr_len);
        i--;
        for(int j = i; j<arr_len; ++j)
        {
            if(arr[j]==tmp)
            {
                cnt_w++;
                arr_len = dell_elem(arr, j, arr_len);
                j--;
            }
        }
        if(cnt_w>1)
        {
            arr_copy[cnt] = tmp;
            cnt++;
        }
    }
    for(int i = 0; i<cnt; ++i)
    {
        printf("%d ", arr_copy[i]);
    }
    return 0;
}

int dell_elem(int* arr, int dell_idx,  int len_arr)
{

    for(int i = dell_idx; i<len_arr; ++i)
    {
         arr[i] = arr[i+1];
    }
    return len_arr-1;
}