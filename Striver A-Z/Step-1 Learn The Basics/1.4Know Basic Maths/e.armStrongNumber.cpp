
#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    // Write your code here
    int ptoCount = n, qtoSolve = n;
    int count = 0;
    int
        armstrong = 0;

    while (ptoCount > 0)
    {
        count++;
        ptoCount = ptoCount / 10;
    }

    while (qtoSolve > 0)
    {
        int temp = qtoSolve % 10;
        armstrong = armstrong + pow(temp, count);
        qtoSolve = qtoSolve / 10;
    }

    if (armstrong == n)
        return true;

    return false;
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
    // codenot completed

    return 0;
}
