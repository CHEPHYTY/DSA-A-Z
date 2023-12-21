#include <bits/stdc++.h>
using namespace std;

void pattern1(int a)
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern2(int a)
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern3(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern4(int a)
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern5(int a)
{

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < a - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int a)
{

    for (int i = 0; i <= a; i++)
    {
        for (int j = 1; j <= a - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int a)
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < a - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int a)
{

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
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
        int a;
        cin >> a;
        pattern8(a);
        cout << endl;
    }

    return 0;
}