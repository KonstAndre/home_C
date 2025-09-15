/*Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
Прототип функции void change_max_min(int size, int a[])*/

#include <stdio.h>

void change_max_min(int size, int a[]);

int main(void)
{
    int a[1000], cnt = 0;
    int* ptr = a;
    while(scanf("%d", ptr++)==1) cnt++;
    change_max_min(cnt, a);
    for(int i =0; i<cnt; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void change_max_min(int size, int a[])
{
    int min, idx_min, max, idx_max, tmp;
    min = a[0];
    max = a[0];
    idx_max = 0;
    idx_min = 0;
    for(int i = 1; i<size; ++i)
    {

        if(min>a[i])
        {

            min = a[i];
            idx_min = i;
        }
        if(max<a[i])
        {
            max = a[i];
            idx_max = i;
        }
    }

    tmp = a[idx_min];
    a[idx_min] = a[idx_max];
    a[idx_max] = tmp;
}