#include <iostream>
using namespace std;
// Cach 2 su dung friend function or non member-function
class PhanSo
{
    private:
        int Tu, Mau;
    public:
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
        friend istream &operator>>(istream&, PhanSo&);
        friend ostream &operator<<(ostream&, PhanSo);
};

istream &operator>>(istream &input, PhanSo &ps)
{
    int a, b;
    cout << "\n Nhap tu: ";
    input >> ps.Tu;
    do{
        cout << "\n Nhap mau = ";
        input >> ps.Mau;
    } while (ps.Mau == 0);
    return input;
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
    PhanSo A(1, 2);
    cin >> A;
    cout << A;
    return 0;
}
