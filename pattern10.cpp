#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, r, c, s;
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= n - r; s++)
        {
            cout << "_";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
