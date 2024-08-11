#include <iostream>
#include <stdexcept>
using namespace std;

class LessThanZero : public runtime_error
{
public:
    LessThanZero() : runtime_error("\n So duoc nhap be hon 0"){}
};

class MoreThanTen : public runtime_error
{
public:
    MoreThanTen() : runtime_error("\n So duoc nhap lon hon 10"){}
};
int main()
{
    int x, y;
    cout << "\n Nhap vao 1 so lon hon 0: ";
    cin >> x;
    try {
        if(x < 0)
        {
            throw LessThanZero();
        }
        if(x > 10)
        {
            throw MoreThanTen();
        }
        cout << "\n Gia tri cua x " << x; 
    }
    catch (LessThanZero &exception)
    {
        cout << exception.what();
    }
    catch (MoreThanTen &exception)
    {
        cout << exception.what();
    }
    return 0;
}