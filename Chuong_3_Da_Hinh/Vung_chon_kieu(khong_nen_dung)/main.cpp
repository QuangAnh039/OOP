#include "NhanVien.h"
#include "NVQuanLy.h"
#include <vector>

int main()
{
    vector<NhanVien *> nv;
    NhanVien *temp;
    temp = new NVQuanLy("Nguyen Quang Anh", "3/9/2003", 2, 2);
    nv.push_back(temp);
    nv[0]->Xuat();
    return 0;
}