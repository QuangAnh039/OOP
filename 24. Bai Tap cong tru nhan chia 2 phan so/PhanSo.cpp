#include "PhanSo.h"

void PhanSo::Nhap()
{
    cout << "\n Nhap tu so: ";
    cin >> TuSo;
    cout << "\n Nhap mau so: ";
    cin >> MauSo;
}
void PhanSo::Xuat()
{
    cout << TuSo << "/" << MauSo << "\n";
}
PhanSo PhanSo::Cong(PhanSo ps)
{
    PhanSo KQ;
    KQ.TuSo = this->TuSo * ps.MauSo + ps.TuSo * this->MauSo;
    KQ.MauSo = this->MauSo * ps.MauSo;

    return KQ;
}
PhanSo PhanSo::Tru(PhanSo ps)
{
    PhanSo KQ;
    KQ.TuSo = this->TuSo * ps.MauSo - ps.TuSo * this->MauSo;
    KQ.MauSo = this->MauSo * ps.MauSo;
    return KQ;
}

PhanSo PhanSo::Nhan(PhanSo ps)
{
    PhanSo KQ;
    KQ.TuSo = TuSo * ps.TuSo;
    KQ.MauSo = MauSo * ps.MauSo;
    return KQ;
}

PhanSo PhanSo::Chia(PhanSo ps)
{
    PhanSo KQ;
    KQ.TuSo = TuSo * ps.MauSo;
    KQ.MauSo = MauSo * ps.TuSo;
    return KQ;
}