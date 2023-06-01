#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello_world";
    // string ::iterator it;
    // cout << *s.begin();
    // cout << endl;
    // cout << *(s.end() - 1);
    // for (it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}