#include <iostream>
using namespace std;

class HinhChuNhat
{
    private:
        float a, b;
        // Hàm bạn không thuộc về class của mình. VD DienTich không thuộc HinhChuNhat => Không thể gọi DienTich từ HCN được
        // Thông thường, hàm bạn có tham số truyền vào là 1 object => không biết bạn mình là ai
        // Hàm bạn được khai báo trong public hay private đều được
        friend float DienTich(HinhChuNhat H);
    public:
        HinhChuNhat();
        HinhChuNhat(float a, float b)
        {
            this->a = a;
            this->b = b;
        }
};
float DienTich(HinhChuNhat H)
{
    return H.a * H.b;
}
int main()
{
    HinhChuNhat H(2, 3);
    cout << "\n Hinh Chu Nhat: " << DienTich(H);
    return 0;
}
