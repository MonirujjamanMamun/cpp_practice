#include <bits/stdc++.h>

using namespace std;

class CoustomSort
{
public:
    char a;
    int count;
};

bool cous(CoustomSort a, CoustomSort b)
{
    return a.count > b.count ? true : false;
}

int main()
{

    int n;
    cin >> n;
    CoustomSort b[26];
    for (int i = 0; i < 26; i++)
    {
        b[i].a = (i + 'a');
        b[i].count = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        b[a - 'a'].count++;
    }
    sort(b, b + 26, cous);
    for (int i = 0; i < 26; i++)
    {
        if (b[i].count > 0)
        {
            for (int j = 0; j < b[i].count; j++)
            {
                cout << b[i].a;
            }
        }
    }
    return 0;
}