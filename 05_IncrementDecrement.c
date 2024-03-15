
#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int a = num++;
    int b = ++num;
    int c = num--;
    int d = --num;

    printf("\n");
    printf("Post Increment: %d\n", a);
    printf("Pre Increment: %d\n", b);
    printf("Post Decrement: %d\n", c);
    printf("Pre Decrement: %d\n", d);

    printf("\n");

    int size = sizeof(num);
    printf("Size of num: %d", size);

    return 0;
}
