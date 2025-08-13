#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, r, c, p = 1;
    for (r = 1; r <= n; r++)
    {
        p = r % 2 == 0 ? 0 : 1;
        for (c = 1; c <= n - (r - 1); c++)
        {
            cout << p << " ";
            p = not(p);
        }
        cout << "\n";
    }
}