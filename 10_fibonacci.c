#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int first = 0;
    int second = 1;

    int sum = 0;

    printf("%d ", first);
    printf("%d ", second);

    for (int i = 2; i < n; i++)
    {
        sum = first + second;
        printf("%d ", sum);
        first = second;
        second = sum;
    }

    return 0;
}
