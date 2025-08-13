#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5, row, col, printvalue = 1;
    for (row = 1; row <= num; row++)
    {
        printvalue = row % 2 == 0 ? 0 : 1;
        for (col = 1; col <= row; col++)
        {
            cout << printvalue << " ";
            printvalue = not(printvalue);
        }
        cout << "\n";
    }
}
