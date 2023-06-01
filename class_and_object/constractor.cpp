#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(char n[], int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};

int main()
{
    Student mamun("Mamun", 10, 9, 'A');

    cout << mamun.name << endl;
    cout << mamun.cls << endl;
    cout << mamun.section << endl;
    cout << mamun.roll << endl;

    return 0;
}