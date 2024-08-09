// muc dich cua ham pha huy duoc goi ngay trc khi doi tuong duoc giai phong

#include <iostream>
using namespace std;

class PhanSo{
    private:
        int TuSo;
        int MauSo;
    public:
        PhanSo()
        {
            
        }
        ~PhanSo()
        {
            cout << "Day la ham pha huy";
        }
};
int main()
{
    PhanSo ps;

    return 0;
}