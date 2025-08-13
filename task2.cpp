#include <bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    int a;
    cout << "Enter a character: ";
    cin >> c;

    if (isalpha(c))
    {
        cout << c << "is an alphaber" << endl;
    }
    else
    {
        cout << c << "is not an alphaber" << endl;
    }
}