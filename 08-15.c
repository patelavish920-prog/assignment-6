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
    int n;
    float total, mean;

    printf("Enter number of values: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number");
        return 0;
    }

    total = sum(n);
    mean = total / n;

    printf("Sum = %.2f\n", total);
    printf("Mean = %.2f", mean);

    return 0;
}
