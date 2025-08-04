#include <stdio.h>
#include <string.h>

int main(void){
    const char months[4][50] = {"winter", "spring", "summer", "autumn"};
    int dig;
    scanf("%d", &dig);
    if ((dig>=1&&dig<=2)||dig==12){
        printf("%s", months[0]);
        return 0;
    } else if (dig>=3&&dig<=5){
        printf("%s", months[1]);
        return 0;
    } else if (dig>=6&&dig<=8){
        printf("%s", months[2]);
        return 0;
    } else {
        printf("%s", months[3]);
        return 0;
    }
    return 0;
}