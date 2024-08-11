#include "NVVanPhong.h"
void NVVanPhong::Nhap()
{
    NhanVien::Nhap();
    cout << "\n So ngay lam viec: ";
    cin >> SoNgayLamViec;
    cout << "\n Tro Cap: ";
    cin >> TroCap;
}
float NVVanPhong::TinhLuong()
{
    Luong = LuongCoBan + TroCap + (SoNgayLamViec*100000);
    return Luong;
}

void NVVanPhong::Xuat()
{
    NhanVien::Xuat();
    cout << "\n So ngay lm viec: " <<  SoNgayLamViec;
    cout << "\n Tro Cap: " << TroCap << " VND";
}
NVVanPhong::NVVanPhong()
{
}