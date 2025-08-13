#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, r, c;
    for (r = 1; r <= n * 2 - 1; r++)
    {
        int rowchange = r > n ? (n * 2) - r : r;
        for (c = 1; c <= rowchange; c++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}