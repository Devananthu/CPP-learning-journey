#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, r, c, s, rowchange = 1;
    for (r = 1; r <= (n * 2) - 1; r++)
    // ROW 1 to n*2-1 =5*2-1=9  ROW range assign
    {
        rowchange = r > n ? (n * 2) - r : r;
        for (s = 1; s <= n - rowchange; s++) // space range 1 to n-r=5-1=4,5-2=3,5-3=2
        {
            cout << " ";
        }
        for (c = 1; c <= (rowchange * 2) - 1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}