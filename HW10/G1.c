#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;
    char* ptr = str;

    FILE* f;
    f = fopen("input.txt", "r");
    if(f==NULL)
        return 1;
    while((*ptr++=fgetc(f))!=EOF) length++;
    fclose(f);
    length--;
    str[length] = '\0';

    f = fopen("output.txt", "w");
    fprintf(f, "%s, %s, %s %d", str, str, str, length);
    fclose(f);
    return 0;
}