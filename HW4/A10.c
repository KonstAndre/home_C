#include <stdio.h>

int main(void){
    int dig, min=1000000;
    for (int i = 0; i<5; i++){
        scanf("%d", &dig);
        min = (min<dig)?min:dig;
    }
    printf("%d", min);
    return 0;
}