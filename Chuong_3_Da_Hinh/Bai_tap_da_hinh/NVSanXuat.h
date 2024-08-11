#include "NhanVien.h"

#pragma once
class NVSanXuat : public NhanVien{
private:
    int SoSanPham;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVSanXuat();
    ~NVSanXuat(){};
};