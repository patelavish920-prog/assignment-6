#include <stdio.h>

void even(int n)
{
    if(n > 10)
        return;

    printf("%d\n", 2*n);
    even(n + 1);
}

int main()
{
    even(1);
    return 0;
}
