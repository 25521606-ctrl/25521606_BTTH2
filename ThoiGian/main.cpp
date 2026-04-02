#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main(){
    ThoiGian tg;
    cout << "Nhap thoi gian ban dau: \n";
    tg.Nhap();
    cout << "\nThoi gian vua nhap: ";
    tg.Xuat();
    tg.TinhCongThemMotGiay();
    cout << "\nThoi gian sau khi cong mot giay: ";
    tg.Xuat();
    cout << endl;
    return 0;
}

