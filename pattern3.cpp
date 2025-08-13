#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5, row, coloum;        // range of the Number size and assign the value
    for (row = 1; row <= num; row++) // range for a row in 1 t0 5 and 1+1 2+1 3+1 4+1
    {
        for (coloum = 1; coloum <= num; coloum++) // range for a coloum range in n same for row
        {
            cout << row << " "; // print for a given value
        }
        cout << "\n"; // every row space for rows
    }
}