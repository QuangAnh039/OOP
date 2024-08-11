#include <iostream>
using namespace std;

template <typename T>
T my_max(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
int main()
{
    int a= 10; 
    int b = 4;
    string c = "qua";
    string d = "anh";
    cout << my_max(a, b) << endl;
    cout << my_max(c, d);
}