#include <stdio.h>

void A_to_B(int, int);

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    if(A==B){
        printf("%d", A);
    }
    else {
        A_to_B(A, B);
    }
    return 0;
}

void A_to_B(int A, int B)
{
    if(A!=B){
        if(A<B)
        {
            printf("%d ", A);
            if(A+1==B)
                printf("%d ", A+1);
            A_to_B(A+1, B);
        } 
        if(A>B)
        {
            printf("%d ", A);
            if(A-1==B)
                printf("%d ", A-1);
            A_to_B(A-1, B);
        }
    }
    return;
}