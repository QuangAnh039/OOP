#include <iostream>
#include <string>

using namespace std;

// Nhap xuat thong tin cua 1 hoc sinh (ten, dia chi, diem toan, diem van)
class HocSinh{
    private:
        string HoTen, DiaChi;
        float DiemToan, DiemVan;
    public:
    // cach 1 khai bao va dinh nghia trong class
        void Nhap()
        {
            fflush(stdin);
            cout << "\nEnter name: ";
            getline(cin, HoTen);
            fflush(stdin);
            cout << "\nEnter address: ";
            getline(cin, DiaChi);
        }
    // cach 2 khai bao trong class va dinh nghia ben ngoai
        void Xuat();
};
// KieuTraVeCuaPhuongThuc TenClass::TenPhuongThuc(){//viet code o day}
// cach 2
void HocSinh::Xuat()
{
    cout << "\nHo Ten: " << HoTen;
    cout << "\nDia Chi: " << DiaChi;
}
int main()
{
    HocSinh HS;
    HS.Nhap();
    HS.Xuat();
    system("pause");
    return 0;
}