#include <iostream>
// Không thể tạo đối tượng từ lớp trừu tượng
// Lớp trừu tượng có thuộc tính và phuong thức nhu bth
// Những lớp kế thừa từ lớp trùu tượng cần định nghĩa phương thức thuần ảo nếu không nó cũng biến thành lớp trừu tượng
using namespace std;
class Base{ // Lop truu tuong roi vi co 1 phuong thuc thuan ao
// Lớp trừu tượng được dùng cho kỹ thuật upcasting
public:
// Phuong thuc thuan ao
    virtual void Show() = 0;
};
class Derived : public Base
{
public:
    void Show()
    {
        cout << "\n This is derived 2";
    }
};
int main()
{
    // kỹ thuật upcasting(trỏ từ cha sang con)
    Base *b;
    Derived d1;
    b = &d1;
    b->Show();
    return 0;
}