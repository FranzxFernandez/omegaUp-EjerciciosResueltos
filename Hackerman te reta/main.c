#include <stdio.h>

void solve(void)
{
    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    printf("%lld\n", (x + y + z));
}

int main()
{
    solve();
    return 0;
}
