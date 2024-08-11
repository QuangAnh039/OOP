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
        // Cach su dung friend function
        friend ostream &operator<<(ostream&, PhanSo);
        friend PhanSo operator+(PhanSo, int);
};

// friend function
PhanSo operator+(PhanSo ps, int a)
{
    PhanSo tmp;
    tmp.Tu = a* ps.Mau + ps.Tu;
    tmp.Mau = ps.Mau;
    return tmp;
}

ostream &operator<<(ostream &out, PhanSo ps)
{
    return out << ps.Tu << "/" << ps.Mau;
}

int main()
{
    PhanSo A(1, 2), B(1, 2), D;
    D = A + 2;
    cout << D;
    return 0;
}
