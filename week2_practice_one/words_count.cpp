#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    bool inside = false;
    int count = 0;
    for (char a : s)
    {
        if (isalpha(a))
        {
            if (inside != true)
            {
                count++;
            }
            inside = true;
        }
        else
        {
            inside = false;
        }
    }
    cout << count;
    return 0;
}