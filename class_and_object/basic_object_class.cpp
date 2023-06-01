#include <bits/stdc++.h>

using namespace std;
class Student{
    public :
        char name[100];
        int roll;
        int cls;
        char section;
};

int main(){

    Student mamun;
    mamun.roll=01;
    mamun.cls= 9;
    mamun.section='A';
    char nm[10]="Mamun";
    strcpy(mamun.name, nm);

    Student baser;
    char nm2[10]= "Baser";
    strcpy(baser.name, nm2);
    baser.roll=02;
    baser.cls=9;
    baser.section= 'A';

    cout<<mamun.name<<endl;
    cout<<baser.name<<endl;

    return 0;
}