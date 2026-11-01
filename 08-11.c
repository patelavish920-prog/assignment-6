#include <stdio.h>

void name(int n)
{
    if(n == 0)
        return;

    printf("Your Name\n");
    name(n-1);
}

int main()
{
    name(5);
    return 0;
}
