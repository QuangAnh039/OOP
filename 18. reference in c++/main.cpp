#include <iostream>
using namespace std;

// tham chieu khac con tro o cho nao ?
// + tham chiếu phải khởi tạo gián trị khi khai baso nó
// + Tham chiếu không NULL được 

// Tham tri va tham chieu
// Tham tri pass by value
void ThamTri(int x)
{
    cout << x << endl;
}
void ThamChieu(int &x)
{
    cout << &x << endl;
}
int main()
{
    int b = 12;
    ThamChieu(b);
    cout << &b << endl;
    return 0;
}