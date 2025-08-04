#include <stdio.h>

int main(void){
    int digit, max=-1, res=1;
    scanf("%d", &digit);
    for (int i = 0; i<3;i++){
        max = (max>digit%10)?max:digit%10;
        digit/=10;
    }
    printf("%d", max);
    return 0; 
}