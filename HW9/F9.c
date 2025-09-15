/*Составить только функцию которая в массиве находит максимальный из отрицательных элементов и 
меняет его местами с последним элементом массива. Гарантируется, что в массиве только один такой элемент
 или же такой элемент отсутствует. Если отрицательных элементов нет - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])*/

#include <stdio.h>

void swap_negmax_last(int size, int a[]);

int main(void)
{
    int a[100], cnt=0;
    int* ptr = a;
    while(scanf("%d", ptr++)==1) cnt++;
    swap_negmax_last(cnt, a);
    for(int i=0; i<cnt; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void swap_negmax_last(int size, int a[])
{
    int idx, tmp, max_neg=-10000;
    for(int i = 0; i<size; ++i)
    {
        if(max_neg<a[i]&&a[i]<0)
        {
            max_neg = a[i];
            idx = i;
        }
    }
    if(max_neg!=-10000){
        tmp = a[size-1];
        a[size-1] = max_neg;
        a[idx] = tmp;
    }
}