#include <stdio.h>

int main(void){
    int dig, max=-1;
    for (int i = 0; i<5; i++){
        scanf("%d", &dig);
        max = (max>dig)?max:dig;
    }
    printf("%d", max);
    return 0;
}