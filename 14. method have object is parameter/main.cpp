#include <iostream>
using namespace std;
// Phuong thuc co doi tuong la tham so truyen vao
// YC: tinh tong cua 2 gio (so gio, so phut)
// 2h56p + 1h4 = 4h

class ThoiGian{
    private:
        int Gio, Phut;
    public:
        void Nhap(int gio, int phut) // co tham so truyen vao 
        {
            Gio = gio;
            Phut = phut;
        }
        void Xuat()
        {
            cout << Gio << "h" << Phut << "p";
        }
        ThoiGian Tong(ThoiGian T1, ThoiGian T2) // doi tuong co the lam tham so truyen vao
        {
            Phut =  T1.Phut + T2.Phut;
            Gio = Phut / 60;
            Phut = Phut % 60;
            Gio = Gio + T1.Gio + T2.Gio;
            return *this;
        }
};
int main()
{
    ThoiGian T1, T2, T3;
    T1.Nhap(2, 56);
    T2.Nhap(1, 4);
    T3.Tong(T1, T2);
    T3.Xuat();
    return 0;
}