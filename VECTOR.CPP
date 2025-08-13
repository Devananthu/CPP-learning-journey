#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    printvec(v);
    cout << v.front() << " " << v.back();
    for (auto it = v.begin(); it <= v.end(); it++)
    {
        cout << *(it);
    }
    cout << endl;
    auto it = v.begin() + 2;
    cout << *(it) << "\n";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 5, 9);
    printvec(v);
    v.erase(v.begin(), v.begin() + 5);
    printvec(v);
    vector<int> v2{6, 7, 8, 9, 10};
    v2.swap(v);
    printvec(v);
    printvec(v2);
}
