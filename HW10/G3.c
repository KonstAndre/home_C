#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000];
    int idx_match[1000];
    int count_match=0;

    FILE* f;
    f = fopen("input.txt", "r");
    fgets(arr, sizeof(arr), f);
    fclose(f);

    int strln = strlen(arr)-1;
    char last_value = arr[strln-1];
    for(int i = 0; i<strln; ++i)
    {
        if(arr[i]==last_value)
        {
            idx_match[count_match] = i;
            count_match++;
        }
    }

    f = fopen("output.txt", "w");
    for(int i = 0; i<count_match-1; ++i)
    {
        fprintf(f, "%d ", idx_match[i]);
    }
    fclose(f);
    return 0;
}