#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
}

int main()
{
    solve();
    return 0;
}
