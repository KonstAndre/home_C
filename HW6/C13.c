#include <stdio.h>
#include <math.h>

float cosinus(float);
float factorial(float);

int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f", cosinus(x*3.141592/180));
    return 0;
}

float factorial(float x)
{
    int fact = 1, i;

    for (i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact;
}

float cosinus(float x)
{
    float res = 1-pow(x, 2)/factorial(2)+pow(x, 4)/factorial(4)-pow(x, 6)/factorial(6);
    return res;
}