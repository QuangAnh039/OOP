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
    cout << "\n He so: " << HeSo;
    cout << "\n Thuong: " << Thuong;
}