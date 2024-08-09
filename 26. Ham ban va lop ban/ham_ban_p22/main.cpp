#include <iostream>
using namespace std;

// forwarding declare: khai báo trước sử dụng sau.
class ConHeo;
class ConGa{
    int KhoiLuong;
    friend void LamThit(ConGa, ConHeo);
public:
    ConGa(int a)
    {
        KhoiLuong = a;
    }
    ~ConGa()
    {
    }
};

class ConHeo{
    int KhoiLuong;
    friend void LamThit(ConGa, ConHeo);
public:
    ConHeo(int a)
    {
        KhoiLuong = a;
    }
    ~ConHeo()
    {
    }
};
void LamThit(ConGa ga, ConHeo heo)
{
    if(ga.KhoiLuong >= heo.KhoiLuong)
    {
        cout << "\n lam thit con ga" << endl;
    }
    else
    {
        cout << "lam thit con heo" << endl;
    }
}
int main()
{
    ConGa ga(3);
    ConHeo heo(10);
    LamThit(ga, heo);
    return 0;
}