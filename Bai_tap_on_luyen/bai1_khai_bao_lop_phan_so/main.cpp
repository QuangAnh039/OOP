/*Viết chương trình xây dựng class Phân Số
Sau đó thực hiện nhập vào một phân số và in ra phân só đó ở dạng tối giản
Input: có 2 số nguyên dương lần lượt là tử số và mẫu số. Các giá trị không quá 18 chữ số
Output: Ghi ra phân số tối giản như trong vd*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
class PhanSo{
private:
    int TuSo;
    int MauSo;
public:
    PhanSo(int,int);
    friend ostream& operator << (ostream&, PhanSo);
    friend istream& operator >> (istream&, PhanSo&);
    void rutgon();
};
PhanSo::PhanSo(int TuSo, int MauSo){
    this->TuSo = TuSo;
    this->MauSo = MauSo;
}
void PhanSo::rutgon()
{
    int g = gcd(TuSo, MauSo);
    TuSo /= g;
    MauSo /= g;
}
ostream& operator << (ostream& out, PhanSo a)
{
    out << a.TuSo << "/" << a.MauSo;
    return out;
}
istream& operator >> (istream& in, PhanSo& a)
{
    in >> a.TuSo >> a.MauSo;
    return in;
}
int main()
{
    PhanSo p1(1, 1);
    cin >> p1;
    p1.rutgon();
    cout << p1;
    return 0;
}