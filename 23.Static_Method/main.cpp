// Phuong thuc tinh chi co the truy cap toi các thành viên tĩnh

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
        static int XemGiaTri()
        {
            return count;
        }
};
// member static phải khai báo ở ngoài
int PhanSo::count;

int main()
{
    //PhanSo ps1(2, 3), ps2(3, 4);
    cout << "\n So phan so duoc tao la: " << PhanSo::XemGiaTri(); // Khong can tao doi tuong
    return 0;
}