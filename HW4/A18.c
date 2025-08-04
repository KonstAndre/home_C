#include <stdio.h>
#include <string.h>

int main(void){
    const char data[3][50] = {"Above", "Less", "Equal"};
    int d1, d2;
    scanf("%d %d", &d1, &d2);
    if (d1>d2){
        printf("%s", data[0]);
    } else if (d1<d2){
         printf("%s", data[1]);
    } else{
        printf("%s", data[2]);
    }

    return 0;
}