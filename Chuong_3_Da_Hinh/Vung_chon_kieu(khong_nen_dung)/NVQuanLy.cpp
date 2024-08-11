#include "NVQuanLy.h"

void NVQuanLy::Nhap()
{
    NhanVien::Nhap();
    cout << "\n Nhap he so: ";
    cin >> HeSo;
    cout << "\n Nhap Thuong: ";
    cin >> Thuong;
}
float NVQuanLy::TinhLuong()
{
    Luong = LuongCoBan*HeSo + Thuong;
    return Luong;
}
void NVQuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "\n Day la class NVQuanLy";
    cout << "\n He so: " << HeSo;
    cout << "\n Thuong: " << Thuong;
}

NVQuanLy::NVQuanLy(string ten, string ngaysinh, float heso, float thuong) : NhanVien(ten,  ngaysinh)
{
    this->HeSo = heso;
    this->Thuong = thuong;
}