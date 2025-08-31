#include <stdio.h>

void reverse_string();

int main(void)
{
    reverse_string();
    return 0;
}

void reverse_string()
{
    char c = getchar();
    if (c=='.')
        return;
    reverse_string();
    putchar(c);
}