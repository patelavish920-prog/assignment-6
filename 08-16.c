#include <stdio.h>

void find(int n, int *max, int *min)
{
    int x;

    if(n == 0)
        return;

    printf("Enter number: ");
    scanf("%d", &x);

    if(x > *max)
        *max = x;

    if(x < *min)
        *min = x;

    find(n-1, max, min);
}

int main()
{
    int x, max, min;

    printf("Enter number 1: ");
    scanf("%d", &x);

    max = min = x;

    find(99, &max, &min);

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);

    return 0;
}
