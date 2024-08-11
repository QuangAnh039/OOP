#include "NhanVien.h"

void NhanVien::Nhap()
{
    fflush(stdin);
    cout << "\n Nhap ho ten: ";
    cin >> HoTen;
    fflush(stdin);
    cout << "\n Nhap vao ngay sinh: ";
    cin >> NgaySinh;
}
void NhanVien::Xuat()
{
    cout << "\n Day la class NhanVien";
    cout << "\n Ho Ten: " << HoTen;
    cout << "\n Ngay Sinh: " << NgaySinh;
    cout << "\n Luong co ban: " << LuongCoBan << " VND";
}
NhanVien::NhanVien(string HoTen, string NgaySinh)
{
    this->HoTen = HoTen;
    this->NgaySinh = NgaySinh;
    LuongCoBan = 200000;
}