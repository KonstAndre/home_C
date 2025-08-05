#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[50];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; i<50; i++){
        if (str[i]=='.'){
            str[i] = '\0';
            printf("%s", str);
            return 0;
        }
        str[i] = tolower(str[i]);
    }
    return 0;
}