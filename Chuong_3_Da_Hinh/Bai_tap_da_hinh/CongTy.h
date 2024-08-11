#include "NVQuanLy.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include "NhanVien.h"
#include <vector>
#pragma once
class CongTy
{
    private:
        vector<NhanVien *> DSNhanVien;
    public:
        void Nhap();
        void Xuat();
        float TinhTongLuong();
        void TimKiemNV(string);
};