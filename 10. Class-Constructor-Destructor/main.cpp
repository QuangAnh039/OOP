#include <iostream>
#include <string>
using namespace std;

class HocSinh{
    // Khai bao thuoc tinh
    // Khai bao phuong thuc
    // private, protected, public
    // private chi su dung trong class do thoi
    // public co the truy cap duoc tu the gioi ben ngoai
    // Neu khong co khai bao private hay public thi compiler tu hieu la private
private:
    string Hoten;
public:
    string DiaChia;
    void Nhap;
};


int main()
{
    HocSinh HS; // khoi tao 1 doi tuong tu class
    HS.DiaChia = "Ha Dong, Ha Noi";

}