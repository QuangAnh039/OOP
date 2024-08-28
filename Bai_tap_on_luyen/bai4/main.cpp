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
    friend ostream& operator << (ostream&, SinhVien);
    friend istream& operator >> (istream&, SinhVien&);
};
ostream& operator << (ostream& out, SinhVien sv)
{
    out << sv.name << " " << sv.cla << " " << sv.date << " " << sv.gpa << endl;
    return out;
}
istream& operator >> (istream& in, SinhVien& sv)
{
    in >> sv.name >> sv.cla >> sv.date >> sv.gpa;
    return in;
}
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}