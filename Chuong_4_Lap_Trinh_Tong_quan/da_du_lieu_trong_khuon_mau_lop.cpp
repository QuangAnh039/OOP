#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <class T, class U>
class MyMap{
private:
    vector<T> Keys;
    vector<U> Values;
public:
    void insert(T key, U value)
    {
        Keys.push_back(key);
        Values.push_back(value);
    }
    void Show(int n)
    {
        cout << Keys[n] << " : " << Values[n] << endl;
    }
};

int main()
{
    MyMap<string, float> Grades;
    Grades.insert("Khoa", 10);
    Grades.insert("Khoa", 11);
    Grades.insert("Khoa", 12);
    for(int i = 0; i < 3; i++)
    {
        Grades.Show(i);
    }
    return 0;
}