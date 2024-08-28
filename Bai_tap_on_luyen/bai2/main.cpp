#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
class PhanSo
{
private:
    int tu, mau;
public:
    PhanSo(){}
    PhanSo(int, int);
    friend PhanSo operator + (PhanSo, PhanSo);
    friend ostream& operator << (ostream&, PhanSo);
    friend istream& operator >> (istream&, PhanSo&);
};

PhanSo::PhanSo(int TuSo, int MauSo){
    this->tu = tu;
    this->mau = mau;
}

ostream& operator << (ostream& out, PhanSo a)
{
    out << a.tu << "/" << a.mau;
    return out;
}

istream& operator >> (istream& in, PhanSo& a)
{
    in >> a.tu >> a.mau;
    return in;
}

PhanSo operator + (PhanSo a, PhanSo b)
{
    PhanSo tong;
    int mc = lcm(a.mau, b.mau);
    tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    tong.mau = mc;
    int g = gcd(tong.tu, tong.mau);
    tong.tu /= g;
    tong.mau /= g;
    return tong;
}

int main()
{
    PhanSo p(1, 1);
    PhanSo q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}