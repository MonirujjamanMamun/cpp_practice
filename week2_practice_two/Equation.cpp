#include <bits/stdc++.h>

using namespace std;

void equation(int x, int n)
{
    int s = 0;
    for (int i = 0; i < x; i += 2)
    {
        s += n * i;
    }
    cout << s << endl;
    // int i = 0;
    // while (i < x)
    // {
    //     cout << i << endl;
    //     i = i + 2;
    // }
}
int main()
{
    int x, n;
    cin >> x >> n;
    equation(x, n);
    return 0;
}