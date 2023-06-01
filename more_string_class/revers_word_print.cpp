#include <bits/stdc++.h>

using namespace std;

void revers(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        revers(ss);
        cout << word << endl;
    }
}

int main()
{

    string a;
    getline(cin, a);
    stringstream ss(a);
    revers(ss);
    return 0;
}