#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int bangla;
    int english;
    int math;
    Student(string name, int bangla, int english, int math)
    {
        this->name = name;
        this->bangla = bangla;
        this->english = english;
        this->math = math;
    }
    int sum()
    {
        return bangla + english + math;
    }
    void printString(string a)
    {
        cout << a << endl;
    }
    void print(int a)
    {
        cout << a << endl;
    }
};

int main()
{

    Student mamun("Mamun", 80, 85, 90);
    // mamun.printString(mamun.bangla);
    mamun.print(mamun.bangla);
    mamun.print(mamun.sum());
    return 0;
}