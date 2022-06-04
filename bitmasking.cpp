#include <iostream>
#include <vector>
using namespace std;
void printBinary(int num)
{
    cout << "Binary of " << num << " is :";
    for (int i = 10; i >= 0; i--)
        cout << ((num >> i) & 1);
    cout << endl;
};

int countSetBit(int n)
{
    int c = 0;
    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
};

int main()
{
    // For 2N+1
    vector<int> arr({2, 3, 4, 9, 4, 3, 7, 2, 6, 6});
    int res = 0;
    for (int x : arr)
    {
        res ^= x;
    }
    int res2 = 0;
    for (int x : arr)
    {
        if (res & x)
        {
            res2 ^= x;
        }
    }
    cout << res2 << " and "  << (res ^ res2);

    // // For 3N+1 (3 same one unique)
    // vector<int> arr({1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 100, 100, 100, 101});
    // vector<int> arr2(32, 0);
    // for (int x : arr)
    // {
    //     for (int i = 0; i < 32; i++)
    //     {
    //         arr2[i] += ((x >> i) & 1);
    //     }
    // }
    // int res = 0;
    // for (int i = 32; i >= 0; i--)
    // {
    //     arr2[i] %= 3;
    //     res += ((arr2[i]) * (1 << i));
    // }
    // cout << res;
    return 0;
}