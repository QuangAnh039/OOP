#include <iostream>
using namespace std;

class Base{
public:
    // Huy bo ao 
    // virtual ~Base(){
    //     cout << "\n Base Destructor\t";
    // }
    // Huy bo thuan ao 
    virtual ~Base() = 0;
};
Base::~Base()
{
    cout << "\n Base Destructor";
}

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "\n Derived Destructor";
    }
};
int main()
{
    Base *b1 = new Derived;
    delete b1;
    return 0;
}