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
        // Cach su dung member function
        friend ostream &operator<<(ostream&, PhanSo);
        PhanSo operator+(PhanSo );
        PhanSo operator+(int); // A + int
};
PhanSo PhanSo::operator+(int a)
{
    PhanSo temp;
    temp.Tu = a * Mau + Tu;
    temp.Mau = Mau; 
    return temp;
}
PhanSo PhanSo::operator+(PhanSo ps)
{
    PhanSo temp;
    temp.Tu = Tu * ps.Mau + ps.Tu*Mau;
    temp.Mau = Mau * ps.Mau;
    return temp;
}
ostream &operator<<(ostream &out, PhanSo ps)
{
    return out << ps.Tu << "/" << ps.Mau;
}
// cach dung ham non-member function
PhanSo operator+(int a, PhanSo ps)
{
    PhanSo temp;
    temp.SetTu(a * ps.GetMau() + ps.GetTu());
    temp.SetMau(ps.GetMau());
    return temp;
}
int main()
{
    PhanSo A(1, 2), B(1, 2), C, D;
    C = A + 2; // only A + 2 cannot 2 + A if want like this so you must use non-member function
    D = 2 + A;
    cout << C << "\n";
    cout << D;
    return 0;
}
