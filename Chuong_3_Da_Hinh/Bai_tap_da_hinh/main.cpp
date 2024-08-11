#include "NhanVien.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
#include "NVQuanLy.h"
#include "CongTy.h"
int main()
{
    CongTy CT;
    CT.Nhap();
    CT.Xuat();
    cout << "\n Tong luong la: " << (size_t)CT.TinhTongLuong();
    CT.TimKiemNV("Ngguyyen Quang Anh");
    return 0;
}