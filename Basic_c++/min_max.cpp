#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    // cout<<a<<" "<<b;
    int mn= min(a, b);
    cout<<mn<<endl;
    int mx= max(a, b);
    cout<<mx<<endl;
    return 0;
}