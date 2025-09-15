/*Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых. Если ответ «да», функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);*/

#include <stdio.h>

int is_two_same(int size, int a[]);

int main(void)
{
    int arr[100], cnt=0;
    int* ptr = arr;
    while(scanf("%d", ptr++)==1) cnt++;
    printf("%d", is_two_same(cnt, arr));
    return 0;
}

int is_two_same(int size, int a[])
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(a[i]==a[j])
                return 1;
        }
    }
    return 0;
}