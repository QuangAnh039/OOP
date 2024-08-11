#include <iostream>
#include <string>
using namespace std;

#ifndef _NHAN_VIEN_H_
#define _NHAN_VIEN_H_

class NhanVien{
protected:
    char HoTen[40];
    string NgaySinh;
    float LuongCoBan, Luong;
public:
    string GetName()
    {
        return HoTen;
    }
    // Dùng hàm ảo vì từ lớp con cos thể trỏ nguọc về lớp cha 
    // Còn dùng thuần ảo thì lớp con không trỏ ngược về lóp cha đuọc
    virtual void Nhap();
    virtual void Xuat();
    virtual float TinhLuong() = 0;
    NhanVien();
    ~NhanVien(){};
};
#endif
