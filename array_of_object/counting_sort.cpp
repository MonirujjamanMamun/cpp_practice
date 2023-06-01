#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int frequency[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        frequency[a - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (frequency[i - 'a'] > 0)
        {
            for (int j = 0; j < frequency[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }
    return 0;
}