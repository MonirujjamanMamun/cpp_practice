#include <bits/stdc++.h>

using namespace std;

class Mas
{
public:
    char country[20];
    int jersey_no;
};

int main()
{
    Mas *mas = new Mas;
    char cunt[20] = "Bangladesh";
    strcpy(mas->country, cunt);
    mas->jersey_no = 9;

    Mas *tamim = new Mas;
    strcpy(tamim->country, mas->country);
    tamim->jersey_no = mas->jersey_no;

    // tamim = mas;

    delete[] mas;

    cout << tamim->country << endl;
    cout << tamim->jersey_no << endl;

    return 0;
}