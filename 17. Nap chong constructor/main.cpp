#include "hocsinh.h"
#include "thoigian.h"

int main()
{
    ThoiGian time1(3, 2, 1);
    ThoiGian time2;
    ThoiGian time3(3, 4);
    time1.HienThi();

    HocSinh hs1("Nguyen Quang Anh", 19, "Ha Noi", 10, 10, 10);
    HocSinh hs2(hs1);
    hs2.Xuat();
    hs1.Xuat();
    return 0;
}