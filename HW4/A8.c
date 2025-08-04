#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res = (a>b&&a>c)?a:(b>a&&b>c?b:c);
    printf("%d", res);
    return 0;
}