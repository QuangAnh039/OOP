#include "NVQuanLy.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include "NhanVien.h"
#include <vector>
#pragma once
class CongTy
{
    private:
        vector<NVQuanLy> NhanVienQuanLy;
        vector<NVSanXuat> NhanVienSanXuat;
        vector<NVVanPhong> NhanVienVanPhong;
    public:
        void Nhap();
        void Xuat();
        float TinhTongLuong();
        void TimKiemNV(string);
};