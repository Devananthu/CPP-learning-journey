#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, a;
    cout << "Enter the Number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "EVEN NUMBER" << "\n";
        n = n / 2;
        cout << n;
        x = n ^ 2;
        a = ((n * (n + 1)) / 2) - x ^ 2;
        cout << "\n"
             << a;
    }
    else
    {
        cout << "ODD NUmber" << "\n";
        n = (n / 2) + 1;
        x = n ^ 2;
        cout << x;
    }
}