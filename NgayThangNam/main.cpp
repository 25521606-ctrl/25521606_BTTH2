#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main(){
    NgayThangNam d;
    cout << "Nhap Ngay Thang Nam: \n";
    d.Nhap();
    cout << "Ngay thang nam vua nhap: \n";
    d.Xuat();
    cout << "Ngay thang nam tiep theo: \n";
    d.NgayThangNamTiepTheo();
    d.Xuat();
    return 0;

}
