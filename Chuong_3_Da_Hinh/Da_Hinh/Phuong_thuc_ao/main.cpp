#include <iostream>
using namespace std;

class Base{
    public:
    // virtual method:
        // Chỉ hoạt động qua con trỏ
        // Chỉ cần thêm từ khóa virtual trước khai báo, không cần trước định nghĩa ở lớp cơ sở
        // Nếu 1 hàm được khai báo là ảo ở lớp cơ sở thì nó sẽ ảo ở mọi lớp con
        // Tên phương thức ở lóp cỏw sỏw và lóp dẫn xuất phải trùng nhau
        virtual void Show()
        {
            cout << "\n This is base class";
        }
};

class Derived : public Base
{
    void Show()
    {
        cout << "\n This is derive";
        
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->Show();
}