#include <stdio.h>

void count(int n, int *boys, int *girls)
{
    char sex;

    if(n == 0)
        return;

    printf("Enter sex code (M/F): ");
    scanf(" %c", &sex);

    if(sex == 'M' || sex == 'm')
        (*boys)++;
    else if(sex == 'F' || sex == 'f')
        (*girls)++;

    count(n-1, boys, girls);
}

int main()
{
    int boys = 0, girls = 0;

    count(50, &boys, &girls);

    printf("Boys = %d\n", boys);
    printf("Girls = %d", girls);

    return 0;
}
