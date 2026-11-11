#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0;
    unsigned long long int prev1 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main(void)
{
    unsigned int n;
    printf("Enter n for Fibonacci: ");
    scanf_s("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));

    system("pause");
    return 0;
}