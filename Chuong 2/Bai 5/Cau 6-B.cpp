#include <stdio.h>

int toHopChapK(int k, int n)
{
    if (k == 0)
    {
        return 1;
    }
    else if (k > n)
    {
        return 0;
    }
    else
    {
        return (n - k + 1) / k * toHopChapK(k - 1, n);
    }
}

int main()
{
    int k, n;
    printf("Nhap vao k: ");
    scanf("%d", &k);
    printf("Nhap vao n: ");
    scanf("%d", &n);

    int c = toHopChapK(k, n);
    printf("To hop chap %d cua %d la %d", k, n, c);

    return 0;
}
