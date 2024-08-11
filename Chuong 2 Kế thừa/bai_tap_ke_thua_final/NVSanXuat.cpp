#include "NVSanXuat.h"

void NVSanXuat::Nhap()
{
    NhanVien::Nhap();
    cout << "\n So san pham: ";
    cin >> SoSanPham;
}
void NVSanXuat::Xuat()
{
    NhanVien::Xuat();
    cout << "\n So san pham: " << SoSanPham << endl;
}
NVSanXuat::NVSanXuat()
{
}

float NVSanXuat::TinhLuong()
{
    Luong = SoSanPham * 2000  + LuongCoBan;
    return Luong;
}