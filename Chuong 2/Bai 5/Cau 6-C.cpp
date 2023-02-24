#include <stdio.h>

int to_hop(int k, int n)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else
    {
        return to_hop(k, n - 1) + to_hop(k - 1, n - 1);
    }
}

int main()
{
    int k, n;
    printf("Nhap vao k: ");
    scanf("%d", &k);
    printf("Nhap vao n: ");
    scanf("%d", &n);

    int c = to_hop(k, n);
    printf("To hop chap %d cua %d la %d", k, n, c);
    return 0;
}
