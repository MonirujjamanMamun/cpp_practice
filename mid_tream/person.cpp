#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    };
};

int main()
{
    char na[100] = "Mamun Rahman";
    Person *mamun = new Person(na, 5.9, 28);
    char nam[20] = "Rahman";
    Person *rahman = new Person(nam, 5.7, 26);

    if (mamun->age > rahman->age)
    {
        cout << mamun->name << endl;
    }
    else
    {
        cout << rahman->name << endl;
    }

    return 0;
}