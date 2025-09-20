#include <stdio.h>
#include <string.h>

void sort(char arr[], int size)
{
    int tmp;
    for(int i =0; i<size-1; ++i)
    {
        for(int j = i; j<size-1-i; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void sec(char buff[], const char arr[], int size)
{
    int idx = 0, cnt = 0;
    for(int i = 0; i<size; ++i)
    {
        cnt = 0;
        for(int j = 0; j<size; ++j)
        {
            cnt+=(arr[i]==arr[j])?1:0;
        }
        if(cnt==1){
            buff[idx++] = arr[i];
        }
    }
    buff[idx] = '\0';
}

int main(void)
{
    FILE* f;
    char buff1[100], arr1[100], buff2[100], arr2[100];
    char ch;
    int flag = 0, cnt1 = 0, cnt2 = 0;;
    f = fopen("input.txt", "r");
    while((ch=fgetc(f))!=EOF)
    {
        if(flag==0&&ch==' ')
        {
            flag=1;
            continue;
        }

        if(flag==0)
        {
            arr1[cnt1] = ch;
            cnt1++;
        }else 
        {
            arr2[cnt2] = ch;
            cnt2++;
        }
    }
    fclose(f);

    sec(buff1, arr1, cnt1);
    sec(buff2, arr2, cnt2);

    char arr3[100];
    int cnt, idx=0;
    for(int i = 0; i<strlen(buff1); ++i)
    {
        cnt = 0;
        for(int j = 0; j<strlen(buff2); ++j)
        {
            cnt+=(buff1[i]==buff2[j])?1:0;
        }
        if(cnt==1)
        {
            arr3[idx++] = buff1[i];
        }
    }
    arr3[idx]='\0';
    sort(arr3, idx);

    f = fopen("output.txt", "w");
    for(int i = 0; i<idx; ++i)
    {
        fprintf(f, "%c ", arr3[i]);
    }
    fclose(f);
    return 0;
}