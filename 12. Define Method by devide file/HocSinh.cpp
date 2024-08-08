#include "HocSinh.h"
// syntax:
// KieuTraVe TenClass::TenPhuongThuc
void HocSinh::Nhap()
{
    // xu ly o day     
    fflush(stdin);
    cout << "\nEnter name: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "\nEnter address: ";
    getline(cin, DiaChi);
        
}

void HocSinh::Xuat()
{
    cout << "\nHo Ten: " << HoTen;
    cout << "\nDia Chi: " << DiaChi;
}

HocSinh::HocSinh()
{ 
}
HocSinh::~HocSinh()
{
}