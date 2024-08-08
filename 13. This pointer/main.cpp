#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// Con tro this
// con tro this tham chieu den doi tuong dang goi ham thanh phan

class PhanSo{
    private:
        int Tuso, MauSo;
    public:
        PhanSo RutGon();
        void Nhap();
        void Xuat();
};

// Cach dung thu 1 cua con tro this: tro den cac thanh phan cua class hien tai
void PhanSo::Nhap()
{
    cout << "\nNhap Tu So: ";
    cin >> this->Tuso;
    cout << "Nhap Mau So: ";
    cin >> this->MauSo;
}
void PhanSo::Xuat()
{
    cout << this->Tuso << "/" << this->MauSo << "\n";
}
// cach dung thu 2: tra ve object hien tai
PhanSo PhanSo::RutGon()
{
    int a, b;
    a = abs(this->Tuso);
    b = abs(this->MauSo);
    while (a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    this->Tuso /= a;
    this->MauSo /= a;
    // gia tri cua tuso, mauso da thay doi
    return *this;
    
}
int main()
{
    PhanSo ps;
    ps.Nhap();
    ps.Xuat();
    ps.RutGon();
    ps.Xuat();
    return 0;
}
