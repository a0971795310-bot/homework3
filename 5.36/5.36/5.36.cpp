#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char fromPeg, char toPeg, char auxPeg)
{
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", fromPeg, toPeg);
        return;
    }

    hanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from peg %c to peg %c\n", n, fromPeg, toPeg);
    hanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main(void)
{
    int numDisks;
    printf("Enter number of disks: ");
    scanf_s("%d", &numDisks);

    hanoi(numDisks, 'A', 'C', 'B');

    system("pause");
    return 0;
}