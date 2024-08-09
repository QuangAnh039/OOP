#include <iostream>
#include <string>
using namespace std;

#ifndef _PHAN_SO_H_
#define _PHAN_SO_H_

class PhanSo
{
    private:
        int TuSo, MauSo;
    public:
        PhanSo Cong(PhanSo);
        PhanSo Tru(PhanSo);
        PhanSo Nhan(PhanSo);
        PhanSo Chia(PhanSo);
        void Nhap();
        void Xuat();
        PhanSo(void)
        {
        }
        ~PhanSo(void)
        {
        }
};

#endif