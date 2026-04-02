#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main(){
    SoPhuc s1, s2;
    cout << "Nhap so phuc 1: \n";
    s1.Nhap();
    cout << "\nNhap so phuc 2: \n";
    s2.Nhap();
    cout << "\nSo phuc 1: ";
    s1.Xuat();
    cout << "\nSo phuc 2: ";
    s2.Xuat();
    SoPhuc ketqua;
    ketqua = s1.Tong(s2);
    cout << "\nTong: "; ketqua.Xuat();
    ketqua = s1.Hieu(s2);
    cout << "\nHieu: "; ketqua.Xuat();
    ketqua = s1.Tich(s2);
    cout << "\nTich: "; ketqua.Xuat();
    ketqua = s1.Thuong(s2);
    cout << "\nThuong: "; ketqua.Xuat();
    cout << endl;
    return 0;

}
