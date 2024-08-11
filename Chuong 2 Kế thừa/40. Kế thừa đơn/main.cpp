#include <iostream>
#include <string>
using namespace std;
// Ke thua duoc phuong thuc tu lop cha và kế thừa được thuộc tính từ lớp cha nhưng không thể 
// truy xuất vào các thuộc tính private của lớp cha được
class people{
    string name;
    int date;
    public:
        people(){};
        people(string name, int date){
            this->date = date;
            this->name = name;
        }
        void eat()
        {
            cout << name << " an 2kg gao 1 ngay";
        }
        void introduce()
        {
            cout << "\n Nguoi " << "Ho ten: " << name;
        }
};

class Student : public people{
    string MSV;
    public:
        Student(){}
        Student(string name, int date, string MSV) : people(name, date)
        {
            this->MSV = MSV;
        }
        void introduce()
        {
            cout <<  "MSV: " << MSV;
        }
};
int main()
{
    Student sv("Quang Anh", 2003, "036");
    sv.eat();
    sv.introduce();
    return 0;
}