#include <stdio.h>

void count(int n, int *p, int *neg, int *z)
{
    int x;

    if(n == 0)
        return;

    printf("Enter number: ");
    scanf("%d", &x);

    if(x > 0)
        (*p)++;
    else if(x < 0)
        (*neg)++;
    else
        (*z)++;

    count(n-1, p, neg, z);
}

int main()
{
    int p = 0, neg = 0, z = 0;

    count(200, &p, &neg, &z);

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", z);

    return 0;
}
