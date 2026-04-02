#include "NgayThangNam.h"
#include <iostream>
#include <iomanip>
using namespace std;

NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(2026) {}

NgayThangNam::NgayThangNam(int d, int m, int y) : iNgay(d), iThang(m), iNam(y){}

bool NgayThangNam::laNamNhuan(int n) const {
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}

int NgayThangNam::timSoNgayTrongThang(int m, int y) const {
    switch(m){
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(y) ? 29 : 28;
        default:
            return 31;
    }
}
void NgayThangNam::Nhap(){
    do{
        cout << "Nhap ngay: "; cin >> iNgay;
        cout << "\nNhap thang: "; cin >> iThang;
        cout << "\nNhap nam: "; cin >> iNam;
        if (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > timSoNgayTrongThang(iThang, iNam)){
            cout << "\nDu lieu khong hop le!! Nhap lai pls!!\n";
        }
    } while (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > timSoNgayTrongThang(iThang, iNam));
}
void NgayThangNam::Xuat() const {
    cout << setfill('0') << setw(2) << iNgay << "/" << setfill('0') << setw(2) << iThang << "/" << iNam << endl;
}
void NgayThangNam::NgayThangNamTiepTheo(){
    int ngaytieptheo = timSoNgayTrongThang(iThang, iNam);
    iNgay++;
    if (iNgay > ngaytieptheo){
        iNgay = 1;
        iThang++;
        if(iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}
