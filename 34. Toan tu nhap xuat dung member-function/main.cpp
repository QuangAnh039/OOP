#include <iostream>
using namespace std;
class PhanSo
{
    private:
        int Tu, Mau;
    public:
        void SetTu(int a)
        {
            Tu = a;
        }
        void SetMau(int b)
        {
            Mau = b;
        }
        int GetTu()
        {
            return Tu;
        }
        int GetMau()
        {
            return Mau;
        }
        PhanSo()
        {
        }
        PhanSo(int a, int b)
        {
            this->Tu = a;
            this->Mau = b;
        }
        void Xuat()
        {
            cout << Tu << "/" << Mau << endl;
        }
        // Cach su dung  member function
        
};
// non-member function input/output
istream &operator>>(istream &input, PhanSo &ps)
{
    int a, b;
    cout << "\n Nhap tu = ";
    input >> a;
    cout << "\n Nhap mau = ";
    input >> b;
    ps = PhanSo(a, b);
    return input; 
}
ostream &operator<<(ostream &out, PhanSo ps)
{
    return out << ps.GetTu() << "/" << ps.GetMau();
}

int main()
{
    PhanSo A(1, 2);
    cin >> A;
    cout << A;
    return 0;
}
