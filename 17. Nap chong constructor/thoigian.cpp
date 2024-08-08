#include "thoigian.h"

ThoiGian::ThoiGian()
{
    this->Gio = 0;
    this->Phut = 0;
    this->Giay = 0; 
}
ThoiGian::ThoiGian(int Gio, int Phut)
{
    this->Gio = Gio;
    this->Phut = Phut;
}
ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
    this->Gio = Gio;
    this->Phut = Phut;
    this->Giay = Giay;
}
void ThoiGian::HienThi()
{
    cout << Gio << ":" << Phut << ":" << Giay;
}