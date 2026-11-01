#include <stdio.h>

void even(int i, int n)
{
    if(i > n)
        return;

    printf("%d\n", 2*i);
    even(i + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    even(1, n);

    return 0;
}
