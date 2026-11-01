#include <stdio.h>

void odd(int n)
{
    if(n > 10)
        return;

    printf("%d\n", 2*n-1);
    odd(n + 1);
}

int main()
{
    odd(1);
    return 0;
}
