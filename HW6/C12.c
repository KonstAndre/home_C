#include <stdio.h>
#include <math.h>

float sinus(float);
float factorial(float);

int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f", sinus(x*3.141592/180));
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

float sinus(float x)
{
    float res = x-pow(x, 3)/factorial(3)+pow(x, 5)/factorial(5)-pow(x, 7)/factorial(7);
    return res;
}