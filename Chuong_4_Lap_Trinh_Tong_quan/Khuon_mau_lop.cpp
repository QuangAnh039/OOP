#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <typename T>
class MyStack{
private:
    T data[100];
    int top;
public:
    MyStack()
    {
        top = -1;
    }
    void MyPush(T number)
    {
        ++top;
        data[top] = number;
    }
    T MyPop()
    {
        T val = data[top];
        --top;
        return val;
    }
    T peek()
    {
        return data[top];
    }
};

int main()
{
    MyStack<int> s;
    s.MyPush(1);
    s.MyPush(2);
    s.MyPush(3);
    MyStack<string> s1;
    s1.MyPush("nguyyeb");
    s1.MyPush("Quang");
    s1.MyPush("Anh");
    return 0;
}