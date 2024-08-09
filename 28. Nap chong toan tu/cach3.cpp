#include <iostream>
using namespace std;
// Cach 2 su dung friend function
class PhanSo
{
    private:
        int Tu, Mau;
    public:
        PhanSo()
        {
        }
        PhanSo(int a, int b)
        {
            this->Tu = a;
            this->Mau = b;
        }
        void operator-();
        void Xuat()
        {
            cout << Tu << "/" << Mau << endl;
        }
        friend ostream &operator<<(ostream&, PhanSo);
        PhanSo operator+(PhanSo );
};
PhanSo PhanSo::operator+(PhanSo ps)
{
    PhanSo temp;
    temp.Tu = Tu * ps.Mau + ps.Tu*Mau;
    temp.Mau = Mau * ps.Mau;
    return temp;
}
ostream &operator<<(ostream &out, PhanSo ps)
{
    return out << ps.Tu << "/" << ps.Mau;
}
void PhanSo::operator-()
{
    Tu = -Tu;
    Mau = Mau;
}
int main()
{
    PhanSo A(1, 2), B(1, 2), C;
    C = A + B;
    cout << C;
    return 0;
}
