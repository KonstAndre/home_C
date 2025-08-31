#include <stdio.h>

char reg_changer(char);

int main(void)
{
    char c;
    while((c=getchar())!='.')
        printf("%c", (reg_changer(c)));
    return 0;
}

char reg_changer(char c)
{
    return ((c>='a'&&c<='z')?'A'+(c-'a'):c);
}
