#include <stdio.h>

int main()
{
    int n, r = 0;
    scanf("%d", &n);

    int temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        r = r * 10 + digit;
        temp = temp / 10;
    }

    if (n == r)
        printf("Yup\n");
    else
        printf("Nope\n");

    return 0;
}