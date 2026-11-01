#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", add(a, b));
    printf("Subtraction = %.2f\n", sub(a, b));
    printf("Multiplication = %.2f\n", mul(a, b));

    if(b != 0)
        printf("Division = %.2f", div(a, b));
    else
        printf("Division not possible");

    return 0;
}
