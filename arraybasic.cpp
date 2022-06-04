#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long myAtoi(string s)
{
    long long res = 0, sign = 1;
    for (char c : s)
    {
        if (isalpha(c) || c == '.')
            break;
        if (c == '-')
            sign = -1;
        else if (c != ' ')
            res = res * 10 + (c - '0');
        else if (c == ' ' && res != 0)
            break;
    }

    if (res >= (INT_MAX / 10))
        return sign == 1 ? INT_MAX : INT_MIN;
    if (sign == -1)
        res = -res;
    return res;
}

int main()
{
    int atr[] = {3, 4, 5, 6, 7, 8};
    int n = 2, d = 6;
    for (int i = 0; i < n; i++)
    {
        int prev = atr[0];
        for (int x = 0; x < d - 1; x++)
        {
            atr[x] = atr[x + 1];
        }
        atr[d-1] = prev;
    }

    for (int x = 0; x < 6; x++)
    {
        cout << atr[x];
    }

    return 0;
}