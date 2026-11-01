#include <stdio.h>

int sum(int n)
{
    if(n > 100)
        return 0;

    if(n % 13 == 0)
        return n + sum(n+1);

    return sum(n+1);
}

int main()
{
    printf("Sum = %d", sum(1));

    return 0;
}
