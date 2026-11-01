#include <stdio.h>

void printname(char name[], int n)
{
    if(n == 0)
        return;

    printf("%s\n", name);
    printname(name, n-1);
}

int main()
{
    char name[50];
    int n;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter n: ");
    scanf("%d", &n);

    printname(name, n);

    return 0;
}
