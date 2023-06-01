#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[20];
    int marks;
    Student(char *n, int m) // It's a constructor
    {
        strcpy(name, n);
        marks = m;
    }
};
int main()
{
    int j, n;
    cin >> n;
    int *arr = new int(n);
    for (j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    for (j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    delete[] arr;
    return 0;
}
