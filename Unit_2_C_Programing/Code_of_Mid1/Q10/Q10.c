#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &n);
    int count = 0, Flag = 0, max = 0, zeroCount = 0;
    int temp;
    for ( temp = n; temp > 0; temp >>= 1)
    {
        if ((temp % 2) == 0)
        {
            zeroCount++;

            if (Flag && count > max)
                max = count;

            count = 0;
            Flag = 1;
        }
        else if (Flag)
        {
            count++;
        }
    }

    if (zeroCount == 1)
        max = count;

    printf("Max. number of ones between two zeros is %d\n", max);
    return 0;
}
