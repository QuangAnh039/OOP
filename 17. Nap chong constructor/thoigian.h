#include <iostream>
#include <string>
using namespace std;
#ifndef _TIME_H_
#define _TIME_H_

class ThoiGian{
    private:
        int Gio;
        int Phut;
        int Giay;
    public:
        ThoiGian();
        ThoiGian(int Gio, int Phut);
        ThoiGian(int Gio, int Phut, int Giay);
        void HienThi();
};

#endif