#include <stdio.h>

int main(void){
    int digit, res=1;
    scanf("%d", &digit);
    for (int i = 0; i<3;i++){
        res*=digit%10;
        digit/=10;
    }
    printf("%d", res);
    return 0; 
}