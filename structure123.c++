#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26] = {0};
    string s;
    cout << "Enter Your Name : ";
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        cout << ch << "--" << arr[i] << endl;
    }
}