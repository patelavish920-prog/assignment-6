#include <stdio.h>

void odd(int i, int n)
{
    if(i > n)
        return;

    printf("%d\n", 2*i-1);
    odd(i + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    odd(1, n);

    return 0;
}
