/*Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])*/

#include <stdio.h>

void sort_even_odd(int n, int a[]);

int main(void)
{
    int arr[100], cnt = 0;
    int* ptr = arr;
    while(scanf("%d", ptr++)==1) cnt++;
    sort_even_odd(cnt, arr);
    for(int i = 0; i<cnt; ++i)
        printf("%d ", arr[i]);
    return 0;
}

void sort_even_odd(int n, int a[])
{
    int tmp, i, j;
    for(i = 0; i<n-1; ++i)
    {
        for(j = 0; j<n-i-1; ++j)
        {
            if((a[j]%2>=0?a[j]%2:-a[j]%2)>(a[j+1]%2>=0?a[j+1]%2:-a[j+1]%2))
            {
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
    }
}