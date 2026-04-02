#include "ThoiGian.h"
#include <iostream>
#include <iomanip>
using namespace std;

ThoiGian::ThoiGian(): iGio(0), iPhut(0), iGiay(0){}

ThoiGian::ThoiGian(int h, int m, int s): iGio(h), iPhut(m), iGiay(s){}


void ThoiGian::Nhap(){
    do {
        cout << "Nhap gio (0-23): "; cin >> iGio;
        cout << "\nNhap phut (0-59): "; cin >> iPhut;
        cout << "\nNhap giay (0-59): "; cin >> iGiay;
        if (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59){
            cout << "\nDu lieu khong hop le! Vui long nhap lai!\n";
        }
    } while (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59);
}
void ThoiGian::Xuat() const {
    cout << setfill('0') << setw(2) << iGio << ":"
         << setfill('0') << setw(2) << iPhut << ":"
         << setfill('0') << setw(2) << iGiay << endl;
}
void ThoiGian::TinhCongThemMotGiay(){
    iGiay++;
    if (iGiay >= 60){
        iPhut++;
        iGiay = 0;
        if (iPhut >= 60){
            iGio++;
            iPhut = 0;
            if (iGio >= 24){
                iGio = 0;
            }
        }
    }
}
