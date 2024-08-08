#include <iostream>
#include <string>
using namespace std;

#ifndef _STUDENT_H_
#define _STUDENT_H_

class HocSinh{
    private:
        string name;
        int age;
        string country;
        int Toan;
        int Van;
        int Anh;
    public:
        HocSinh();
        HocSinh(string name, int age, string country, int toan, int van, int anh);
        HocSinh(const HocSinh& hs) 
        {
            name = hs.name;
            age = hs.age;
            country = hs.country;
            Toan = hs.Toan;
            Van = hs.Van;
            Anh = hs.Anh;
        }
        void Xuat();
};

#endif