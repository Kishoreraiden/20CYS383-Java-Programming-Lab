/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class triangle{
    private:
    int l;
    int b;
    public:
    void read()
    {
        cin>>l;
        cin>>b;
    }
    void area(){
        cout<<(0.5)*l*b<< endl;
    }

};

int main()
{
    triangle t;
    t.read();
    t.area();
}
