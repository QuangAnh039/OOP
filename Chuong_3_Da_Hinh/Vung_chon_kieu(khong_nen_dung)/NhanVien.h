#include <iostream>
#include <string>
using namespace std;

#ifndef _NHAN_VIEN_H_
#define _NHAN_VIEN_H_

class NhanVien{
protected:
    string HoTen;
    string NgaySinh;
    float LuongCoBan, Luong;
public:
    string GetName()
    {
        return HoTen;
    }
    void Nhap();
    void Xuat();
    NhanVien(string, string);
    ~NhanVien(){};
};
#endif
