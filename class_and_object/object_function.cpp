#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(char n[100], int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};

Student rahim()
{
    char name[100] = "Mamun";
    Student mamun(name, 10, 9, 'A');
    return mamun;
};
int main()
{
    Student a = rahim();
    cout << a.name;

    return 0;
}