#include <stdio.h>

int dec_to_bin(int*);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", dec_to_bin(num));
    return 0;
}

int dec_to_bin(int* num)
{
    
}

int dec_P(int N, int P)
{
    int new_dig, cel = 0, deg = 0, res=0;
    while(N)
    {
        new_dig =N%P;
        res += pow(10, deg)*new_dig;
        N/=P;
        deg+=1;
    }
    return res;
}