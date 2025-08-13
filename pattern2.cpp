#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5, row, col;
    cout << "\n The second pattern is \n ";
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << " \n ";
    }
}