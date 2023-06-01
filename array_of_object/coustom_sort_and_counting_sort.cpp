#include <bits/stdc++.h>

using namespace std;

class CoustiomSort
{
public:
    char a;
    int count;
};
bool Coustom(CoustiomSort a, CoustiomSort b)
{
    return a.count > b.count ? true : false;
}

int main()
{

    int n;
    cin >> n;
    CoustiomSort frequency[26];
    for (int i = 0; i < 26; i++)
    {
        frequency[i].a = (i + 'a');
        frequency[i].count = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char b;
        cin >> b;
        frequency[b - 'a'].count++;
    }
    sort(frequency, frequency + 26, Coustom);
    for (int i = 0; i < 26; i++)
    {
        // cout << frequency[i].a << " " << frequency[i].count << endl;
        if (frequency[i].count > 0)
        {
            for (int j = 0; j < frequency[i].count; j++)
            {
                cout << frequency[i].a;
            }
        }
    }
    return 0;
}