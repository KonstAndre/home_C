/*Дана строка состоящая из маленьких латинских букв 'a'..'z'. 
В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений> */

#include <stdio.h>

int new_arr(char a[], char b[], int size);

int main(void)
{
    int cnt = 0;
    char a[1000], b[1000];
    while((a[cnt]=getchar())!='.') cnt++;
    int c = new_arr(a, b, cnt);
    for(int i =0; i<c; ++i)
    {
        if(i%2==0)
        {
            printf("%c", b[i]);
        } else
        {
            printf("%d", b[i]);
        }
    }
    return 0;
}

int new_arr(char a[], char b[], int size)
{
    int tmp, idx_b=0;
    for(int i = 0; i<size; ++i)
    {
        int count = 1;
        while(a[i]==a[i+1])
        {
            count++;
            i++;
        }
        b[idx_b] = a[i];
        b[idx_b+1] = count;
        idx_b+=2;
    }
    return idx_b;
}