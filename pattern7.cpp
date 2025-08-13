#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, c;
    cout << "Enter Your Pattern range ";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - (r - 1); c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
}