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
    CT.TimKiemNV("Nguyen Quang Anh");
    return 0;
}