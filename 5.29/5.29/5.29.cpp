#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b)
{
    int m = a, n = b;
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return (a * b) / m;
}

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf_s("%d %d", &num1, &num2);

    printf("The least common multiple (LCM) is: %d\n", lcm(num1, num2));

    system("pause");
    return 0;
}