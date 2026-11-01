#include <stdio.h>

void natural(int n)
{
    if(n > 10)
        return;

    printf("%d\n", n);
    natural(n + 1);
}

int main()
{
    natural(1);
    return 0;
}
