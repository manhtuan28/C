#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit, sum;

    for (num = 100; num <= 999; num++)
    {
        sum = 0;
        int temp = num;
        while (temp > 0)
        {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }
        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}