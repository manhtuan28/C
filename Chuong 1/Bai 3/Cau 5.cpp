#include <stdio.h>

int main()
{
    int i, j, k, product, sum;

    printf("Cac so nguyen gom 3 chu so co tich bang tong cac chu so la:\n");

    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                product = i * j * k;
                sum = i + j + k;
                if (product == sum && i != j && j != k && k != i)
                {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}