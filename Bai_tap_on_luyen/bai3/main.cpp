#include <iostream>
using namespace std;

class SinhVien{
private:
    string name;
    string cla;
    string date;
    float gpa;
public:
    SinhVien(){
        name = cla = date = "";
        gpa = 0;
    }
    SinhVien(string name, string cla, string date, float gpa)
    {
        this->name = name;
        this->date = date;
        this->cla = cla;
        this->gpa = gpa;
    }
    friend void Nhap(SinhVien&);
    friend void In(SinhVien);
};

void Nhap(SinhVien &sv)
{
    getline(cin, sv.name);
    cin >> sv.date >> sv.cla >> sv.gpa;
}
void In(SinhVien sv)
{
    cout << sv.cla << " " << sv.name << " " << sv.gpa << " " << sv.date << endl;
}
int main()
{
    SinhVien a;
    Nhap(a);
    In(a);
    return 0;
}