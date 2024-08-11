#include "NhanVien.h"
#ifndef _NV_VP_H_
#define _NV_VP_H_
class NVVanPhong : public NhanVien
{
private:
    int SoNgayLamViec;
    float TroCap;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVVanPhong();
    ~NVVanPhong(){};
};


#endif