#include <stdio.h>

int main(void)
{
    int digit, cnt_pos, cnt_neg, arr_pos[10], arr_neg[10];
    cnt_pos = 0, cnt_neg = 0;
    for(int i = 0; i<10; ++i)
    {
        scanf("%d ", &digit);
        if(digit>0)
        {
            arr_pos[cnt_pos] = digit;
            cnt_pos++;
        } else if(digit<0)
        {
            arr_neg[cnt_neg] = digit;
            cnt_neg++;
        }
    }
    for(int i = 0; i<cnt_pos; i++)
    {
        printf("%d ", arr_pos[i]);
    }
    for(int i = 0; i<cnt_neg; i++)
    {
        printf("%d ", arr_neg[i]);
    }
    return 0;
}