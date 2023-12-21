#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(long number)
{

    bitset<32> binary(number);
    return binary.to_string();
}

long binary32BitToDecimal(const string &binaryString)
{
    bitset<32> binary(binaryString);
    return static_cast<long>(binary.to_ulong());
}

string stringReverse(string str)
{
    char ch;
    int lenth = str.length();
    for (int index = 0; index < lenth / 2; index++)
    {
        ch = str[index];
        str[index] = str[lenth - 1 - index];
        str[lenth - 1 - index] = ch;
    }
    return str;
}

long reverseBits(long n)
{
    // Write your code here.

    string binaryRepresentation = decimalToBinary(n);

    string reverse = stringReverse(binaryRepresentation);

    long answer = binary32BitToDecimal(reverse);

    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long a;
    cin >> a;
    string binaryRepresentation = decimalToBinary(a);

    cout << binaryRepresentation << endl;
    string reverse = stringReverse(binaryRepresentation);
    cout << reverse << endl;

    long s = binary32BitToDecimal(reverse);
    cout << s << endl;
    s = binary32BitToDecimal(binaryRepresentation);
    cout << s << endl;

    return 0;
}