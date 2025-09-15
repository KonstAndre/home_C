/*Написать только одну функцию, которая находит максимальный элемент в массиве. Всю программу загружать не надо.
Прототип функции: int find_max_array(int size, int a[])*/

#include <stdio.h>

int find_max_array(int size, int a[]);

int main(void)
{
    int arr[100], cnt = 0;
    int* ptr = arr;
    while(scanf("%d", ptr++)==1) cnt++;
    int max_elem = find_max_array(cnt, arr);
    printf("%d", max_elem);
    return 0;
}

int find_max_array(int size, int a[])
{
    int max = a[0];
    for(int i = 1; i<size; i++)
    {
        max = a[i]>max?a[i]:max;
    }
    return max;
}