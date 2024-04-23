#include <stdio.h>

int main()
{
    printf("Enter a number: \n");

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
        printf("Yes, %d is a Palindrome number\n", n);
    else
        printf("No, %d is not a Palindrome number\n", n);

    return 0;
}