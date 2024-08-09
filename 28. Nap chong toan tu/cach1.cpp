#include <iostream>
using namespace std;
// Cach 1 su dung member function
class PhanSo
{
    private:
        int Tu, Mau;
    public:
        PhanSo(int a, int b)
        {
            this->Tu = a;
            this->Mau = b;
        }
        void operator-();
        void Xuat()
        {
            cout << Tu << "/" << Mau << endl;
        }
};
void PhanSo::operator-()
{
    Tu = -Tu;
    Mau = Mau;
}
int main()
{
    PhanSo A(1, 2);
    -A;
    A.Xuat();
    return 0;
}
