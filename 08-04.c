#include <stdio.h>

void natural(int i, int n)
{
    if(i > n)
        return;

    printf("%d\n", i);
    natural(i + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    natural(1, n);

    return 0;
}
