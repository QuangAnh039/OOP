#include "NhanVien.h"

#pragma once
class NVQuanLy : public NhanVien{
private:
    float HeSo;
    float Thuong;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVQuanLy(string, string, float, float);
    ~NVQuanLy(){};
};