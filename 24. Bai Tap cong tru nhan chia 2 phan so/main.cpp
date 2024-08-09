#include "PhanSo.h"
// Cong

int main()
{
    PhanSo ps1, ps2, psKQ;
    ps1.Nhap();
    ps2.Nhap();
    psKQ = ps1.Chia(ps2);
    psKQ.Xuat();
    return 0;
}