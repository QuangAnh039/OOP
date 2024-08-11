#include "NhanVien.h"

void NhanVien::Nhap()
{
    fflush(stdin);
    cout << "\n Nhap ho ten: ";
    cin.getline(HoTen, 40);
    fflush(stdin);
    cout << "\n Nhap vao ngay sinh: ";
    cin >> NgaySinh;
}
void NhanVien::Xuat()
{
    cout << "\n Ho Ten: " << HoTen;
    cout << "\n Ngay Sinh: " << NgaySinh;
    cout << "\n Luong co ban: " << LuongCoBan << " VND";
}
NhanVien::NhanVien()
{
    LuongCoBan = 200000;
}