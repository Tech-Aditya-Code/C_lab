#include <stdio.h>

int main()
{
    int x;
    printf("Enter first number: %d",x);
    scanf("%d", &x);

    int y;
    printf("Enter second number: %d",y);
    scanf("%d", &y);

    int z = x + y;
    printf("The sum of given numbers is: %d",z);

    return 0;
}