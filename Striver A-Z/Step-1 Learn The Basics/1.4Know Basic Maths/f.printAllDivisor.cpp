
#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n)
{
    // Write your code here.

    int count = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                    count = count + j;
                else
                    count += j + i / j;
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--)
    {
    }

    return 0;
}
