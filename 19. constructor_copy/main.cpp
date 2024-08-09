#include <iostream>
using namespace std;

class SinhVien{
    private:
        string name;
        int age;
    public:
        SinhVien(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        SinhVien(const SinhVien &sv)
        {
            name = sv.name;
        }
};
int main()
{
    SinhVien sv1("Quang Anh", 19);
    SinhVien sv2(sv1);
    return 0;
}