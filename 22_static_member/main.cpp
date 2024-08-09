#include <iostream>
using namespace std;

class PhanSo{
    private:
        int TuSo;
        int MauSo;
        static int count;
    public:
        PhanSo(int TuSo, int MauSo)
        {
            this->TuSo = TuSo;
            this->MauSo = MauSo;
            count++;
        }
        void XemGiaTri()
        {
            cout << count;
        }
};
// member static phải khai báo ở ngoài
int PhanSo::count;

int main()
{
    PhanSo ps1(2, 3), ps2(3, 4);
    ps1.XemGiaTri();
    return 0;
}