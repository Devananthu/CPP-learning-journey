#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, c, r;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - (r - 1); c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}