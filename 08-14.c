#include <stdio.h>

float sum(int n)
{
    float x;

    if(n == 0)
        return 0;

    printf("Enter value: ");
    scanf("%f", &x);

    return x + sum(n-1);
}

int main()
{
    float total, mean;

    total = sum(10);
    mean = total / 10;

    printf("Sum = %.2f\n", total);
    printf("Mean = %.2f", mean);

    return 0;
}
