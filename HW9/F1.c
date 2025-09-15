#include <stdio.h>

/*Написать только одну функцию, которая сортирует массив по возрастанию. Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).
Всю программу загружать не надо, только одну эту функцию. Можно просто закомментировать текст всей программы, кроме данной функции. */

void sort_array(int size, int a[]);

int main(void)
{
    int arr[10], cnt = 0;
    int* ptr = arr;
    while(scanf("%d", ptr++)==1) cnt++;
    sort_array(cnt, arr);
    for(int i = 0; i<cnt; ++i)
        printf("%d ", arr[i]);
    return 0;
}

void sort_array(int size, int arr[])
{
    int tmp;
    for(int i = 0; i<size-1; ++i)
    {
        for(int j = 0; j<size-i-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}