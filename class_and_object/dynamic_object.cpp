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

int main()
{
    char na[100] = "Mamun Rahman";
    Student *mamun = new Student(na, 10, 9, 'a');

    cout << mamun->name << endl;
    cout << mamun->cls;

    return 0;
}