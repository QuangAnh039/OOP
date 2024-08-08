#include <iostream>
#include <string>
using namespace std;
#pragma once

class HocSinh
{
    private:
        string HoTen, DiaChi;
        float DiemToan, DiemVan;
    public:
        // Khai bao phuong thuc .h va cai dat o .cpp
        void Xuat();
        void Nhap();
        HocSinh();//Phuong thuc khoi tao mac dinh
        ~HocSinh(); //Phuong thuc pha huy
};
