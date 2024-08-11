#include "CongTy.h"

void CongTy::Nhap()
{
    int LuaChon;
    do
    {
        cout << "\n-------Menu----------";
        cout << "\n 1. Nhap nhan vien van phong!";
        cout << "\n 2. Nhap nhan vien san xuat!";
        cout << "\n 3. Nhap nhan vien quan ly!";
        cout << "\n 4. Thoat";
        do
        {
            cout << "\n Nhap lua chon cua ban: ";
            cin >> LuaChon;
            if(LuaChon < 1 || LuaChon > 4)
                cout << "\n Ban da nhap sai lua chon";
        } while (LuaChon < 1 || LuaChon > 4);
        if(LuaChon == 1)
        {
            NhanVien *tmp = new NVVanPhong;
            tmp->Nhap();
            DSNhanVien.push_back(tmp);
            
        }
        else if(LuaChon == 2)
        {
            NhanVien *tmp = new NVSanXuat;
            tmp->Nhap();
            DSNhanVien.push_back(tmp);
        }
        else if(LuaChon == 3)
        {
            NhanVien *tmp = new NVQuanLy;
            tmp->Nhap();
            DSNhanVien.push_back(tmp);
        }
    } while (LuaChon != 4);
}

void CongTy::Xuat()
{
    for(int i = 0; i < DSNhanVien.size(); i++)
    {
        DSNhanVien[i]->Xuat();
    }
}

float CongTy::TinhTongLuong()
{
    float Tong = 0;
    for(int i = 0; i < DSNhanVien.size(); i++)
    {
        Tong = Tong + DSNhanVien[i]->TinhLuong();
    }
    return Tong;
}

void CongTy::TimKiemNV(string name)
{
    int check = 0;
    for(int i = 0; i < DSNhanVien.size(); i++)
    {
        if(DSNhanVien[i]->GetName() == name)
        {
            DSNhanVien[i]->Xuat();
            check = 1;
            cout << "\n";
        }
    }
    if(check == 0)
    {
        cout << "Khong tim thay!\n";
    }
}