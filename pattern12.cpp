#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, c, r, s, a;
    for (r = n; r >= 1; r--)
    {
        for (s = 1; s <= n - r; s++)
        {
            cout << " ";
        }
        for (c = 1; c <= (r * 2) - 1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}