#include <iostream>
using namespace std;
class Base {
public:
    int a;
};

class Derived : public Base {
public:
    int b;
};
 
int main()
{

    Derived sample;
    cin>>sample.b;
    cin>>sample.a;
    cout << "Value from derived class: "
         << sample.b << endl;
    cout << "Value from base class: "
         << sample.a << endl;
    return 0;
}