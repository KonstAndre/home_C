#include <stdio.h>

int main(void){
    int dig, max=-1, min=100000;
    for (int i = 0; i<5; i++){
        scanf("%d", &dig);
        max = (max>dig)?max:dig;
        min = (min<dig)?min:dig;
    }
    printf("%d", max+min);
    return 0;
}