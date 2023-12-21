#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    // Write your code here
    int revNum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    if (dup == revNum)
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
    int input;
    cin >> input;
    bool a = palindrome(input);
    cout << a << endl;

    return 0;
}