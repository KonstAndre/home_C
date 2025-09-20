#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000];
    FILE* f;
    f = fopen("input.txt", "r");
    if(f==NULL) return 1;
    fgets(arr, sizeof(arr), f);
    fclose(f);
    // puts(arr);
    // printf("%d", strlen(arr));
    f = fopen("output.txt", "w");
    for(int i = 0; i<strlen(arr); ++i)
    {
        fputc((arr[i]=='a')?'b':(arr[i]=='b')?'a':(arr[i]=='A')?'B':(arr[i]=='B')?'A':arr[i], f);
    }
    fclose(f);
    return 0;
}