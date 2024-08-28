#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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
    friend bool cmp(SinhVien, SinhVien);
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

bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}
int main()
{
    int num;
    cin >> num;
    SinhVien a[num];
    for(int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    sort(a, a + num, cmp);
    for(int i = 0; i < num; i++)
    {
        cout << a[i];
    }
    return 0;
}