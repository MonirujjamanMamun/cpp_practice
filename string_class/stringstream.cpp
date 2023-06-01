#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        // count += 1;
    }
    // cout << count << endl;
    return 0;
}