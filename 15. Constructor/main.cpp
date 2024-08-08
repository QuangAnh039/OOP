#include <iostream>
using namespace std;

class PhanSo{
    private:
        int TuSo, MauSo;
    public:
    // Ham khoi tao khong co tham so truyen vao
        PhanSo()
        {
            TuSo = 0;
            MauSo = 1;
        }
    // Ham khoi tao co tham so truyen vao
        Phanso(int tu, int mau)
        {
            TuSo = tu;
            MauSo = mau;
        }
};
int main()
{
    // cach 1 truc tiep
    PhanSo ps(1, 4);
    // cach 2 gian tiep
    PhanSo ps2 = PhanSo(2, 5);
    return 0;
}