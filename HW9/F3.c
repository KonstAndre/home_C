/*Написать функцию и программу демонстрирующую работу данной функции. Вывести в порядке возрастания цифры, 
входящие в десятичную запись натурального числа N,не более 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе. */

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

void func(int size, int arr[]);

void int_to_arr(int, unsigned long long int, int arr[]);

int size_num(unsigned long long int);

int del_elem_from_arr(int, int, int arr[]);

void arr_sort(int, int arr[]);

int main(void)
{
    int size, arr[100];
    unsigned long long int n;
    scanf("%llu", &n);
    printf("%llu\n", n);
    if(n==0)
    {
        printf("%d %d", 0, 1);
        return 0;
    }
    size = size_num(n);
    int_to_arr(size, n, arr);
    arr_sort(size, arr);
    func(size, arr);
    return 0;
}

int size_num(unsigned long long int num)
{
    int cnt = 0;
    while(num)
    {
        cnt++;
        num/=10;
    }
    return cnt;
}

void int_to_arr(int size, unsigned long long int num, int arr[])
{
    int i, cnt = 1;
    unsigned long long int dig;
    for(i = 0; i<size;i++)
    {
        dig = num/(unsigned long long int)pow(10, size-cnt)%10;
        arr[i] = dig;
        cnt++;
    }
}

int del_elem_from_arr(int size, int idx, int arr[])
{
    int i;
    for(i=idx; i<size; ++i)
    {
        arr[i] = arr[i+1];
    }
    return size-1;
}

void arr_sort(int size, int arr[])
{
    int i, j, tmp;
    for(i = 0; i<size-1; ++i)
    {
        for(j=0; j<size-i-1; ++j)
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

void func(int size, int arr[])
{
    int i, j, cnt;
    for(i=0; i<size; ++i)
    {   
        cnt = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                size = del_elem_from_arr(size, j, arr);
                cnt++; 
                j--;
            }
        }
        printf("%d %d\n", arr[i], cnt);
    }
}