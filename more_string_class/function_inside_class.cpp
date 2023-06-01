#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    string color;
    int bangla;
    int english;
    Person(string nm, int ag, string clr, int bng, int eng)
    {
        name = nm;
        age = ag;
        color = clr;
        bangla = bng;
        english = eng;
    }
    int total_marks()
    {
        return bangla + english;
    }
};

int main()
{

    Person mamun("Mamun", 24, "white-black", 80, 85);
    cout << mamun.name << " " << mamun.age << " " << mamun.color << " " << mamun.total_marks() << endl;
    return 0;
}