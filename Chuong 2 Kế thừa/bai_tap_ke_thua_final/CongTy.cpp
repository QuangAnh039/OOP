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
            NVVanPhong VP;
            VP.Nhap();
            NhanVienVanPhong.push_back(VP);
        }
        else if(LuaChon == 2)
        {
            NVSanXuat SX;
            SX.Nhap();
            NhanVienSanXuat.push_back(SX);
        }
        else if(LuaChon == 3)
        {
            NVQuanLy QL;
            QL.Nhap();
            NhanVienQuanLy.push_back(QL);
        }
    } while (LuaChon != 4);
}

void CongTy::Xuat()
{
    cout << "\n------------Danh sach nhan vien quan ly: " << endl;
    for(int i = 0; i < NhanVienQuanLy.size(); i++)
    {
        NhanVienQuanLy[i].Xuat();
    }
    cout << "\n------------Danh sach nhan vien san xuat: " << endl;
    for(int i = 0; i < NhanVienSanXuat.size(); i++)
    {
        NhanVienSanXuat[i].Xuat();
    }
    cout << "\n------------Danh sach nhan vien van phong: " << endl;
    for(int i = 0; i < NhanVienVanPhong.size(); i++)
    {
        NhanVienVanPhong[i].Xuat();
    }
}

float CongTy::TinhTongLuong()
{
    float Tong = 0;
    for(int i = 0; i < NhanVienQuanLy.size(); i++)
    {
        Tong = Tong + NhanVienQuanLy[i].TinhLuong();
    }
    for(int i = 0; i < NhanVienSanXuat.size(); i++)
    {
        Tong = Tong + NhanVienSanXuat[i].TinhLuong();
    }
    for(int i = 0; i < NhanVienVanPhong.size(); i++)
    {
        Tong = Tong + NhanVienVanPhong[i].TinhLuong();
    }
    return Tong;
}

void CongTy::TimKiemNV(string name)
{
    int check = 0;
    for(int i = 0; i < NhanVienQuanLy.size(); i++)
    {
        if(NhanVienQuanLy[i].GetName() == name)
        {
            NhanVienQuanLy[i].Xuat();
            check = 1;
            cout << "\n";
        }
    }
    for(int i = 0; i < NhanVienSanXuat.size(); i++)
    {
        if(NhanVienSanXuat[i].GetName() == name)
        {
            NhanVienSanXuat[i].Xuat();
            cout << "\n";
            check = 1;
        }
    }
    for(int i = 0; i < NhanVienVanPhong.size(); i++)
    {
        if(NhanVienVanPhong[i].GetName() == name)
        {
            NhanVienVanPhong[i].Xuat();
            cout << "\n";
            check = 1;
        }
    }
    if(check == 0)
    {
        cout << "Khong tim thay!\n";
    }
}