#include <stdio.h>

void find(int a[], int n, int *max, int *min)
{
    int i;

    *max = a[0];
    *min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > *max)
            *max = a[i];

        if(a[i] < *min)
            *min = a[i];
    }
}

int main()
{
    int a[5], i, max, min;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    find(a, 5, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
