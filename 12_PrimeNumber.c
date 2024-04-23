#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // If the number is divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // If the number is not divisible by any other number, it's prime
}

int main()
{
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
