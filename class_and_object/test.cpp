#include <bits/stdc++.h>

using namespace std;

class MyClass
{
public:
    int data;

    MyClass(int v) : data(v) {}

    void printData() const
    {
        cout << "Data: " << data << endl;
    }
};

MyClass getStaticObject()
{
    static MyClass staticObj(42); // Static object with an initial value of 42
    return staticObj;
}

int main()
{
    MyClass obj = getStaticObject();
    obj.printData(); // Output: Data: 42

    return 0;
}
