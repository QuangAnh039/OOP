#include "hocsinh.h"

HocSinh::HocSinh()
{
}
HocSinh::HocSinh(string name, int age, string country, int toan, int van, int anh)
{
    this->name = name;
    this->age = age;
    this->country = country;
    this->Toan = toan;
    this->Van = van;
    this->Anh = anh;
}


void HocSinh::Xuat()
{
    cout << name << " " << age << " " << country << " " << Toan << " " << Van << " " << Anh << endl;
}