#include <bits/stdc++.h>
using namespace std;

/*
TEST CASE
5
564645
6546545
54232174
5564644444
2222222222

solution:
2
3
3
1
1

*/

int countDigits(int n)
{
    // Write your code here.

    int c = 0;
    int p = n;
    while (n)
    {
        int temp = n % 10;
        if (temp != 0 && p % temp == 0)
            c++;
        n = n / 10;
    }

    return c;
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

        int input, output;
        cin >> input;
        output = countDigits(input);
        cout << output << endl;
    }

    return 0;
}