#include <bits/stdc++.h>

using namespace std;

void counts(int n, char m)
{
    for (int i = 0; i < n; i++)
    {
        cout << m << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        char c;
        cin >> c;
        counts(m, c);
    }
    return 0;
}