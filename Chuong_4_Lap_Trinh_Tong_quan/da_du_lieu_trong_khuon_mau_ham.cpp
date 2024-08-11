#include <iostream>
using namespace std;

template<typename T, typename U> 

T mymax(T a, U b)
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
    int a = 10;
    float b = 20.4;
    cout << mymax(a, b);
    return 0;
}