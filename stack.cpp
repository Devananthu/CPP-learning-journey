#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s; // Not store in this type s{1,2,3,4,5}
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    int check = s.empty();
    cout << s.top() << "\n"; // Last in first out the last value is refere in TOP
    s.pop();
    cout << s.top();
}