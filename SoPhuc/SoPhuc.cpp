#include <iostream>
#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc(): iThuc(0), iAo(0)
{
    //ctor
}

SoPhuc::SoPhuc(double th, double ao) : iThuc(th), iAo(ao)
{
    //dtor
}

void SoPhuc::Nhap(){
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat() const {
    if (iAo >= 0)
        cout << iThuc << " + " << iAo << "i";
    else
        cout << iThuc << " - " << -iAo << "i";
}

SoPhuc SoPhuc::Tong(SoPhuc sp){
    return SoPhuc(iThuc + sp.iThuc, iAo + sp.iAo);
}
SoPhuc SoPhuc::Hieu(SoPhuc sp){
    return SoPhuc(iThuc - sp.iThuc, iAo - sp.iAo);
}
SoPhuc SoPhuc::Tich(SoPhuc sp){
    return SoPhuc((iThuc * sp.iThuc) - (iAo * sp.iAo), (iThuc * sp.iAo) + (iAo * sp.iThuc));
}
SoPhuc SoPhuc::Thuong(SoPhuc sp){
    double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    if (mau == 0){
        cout << "\nLoi!!" << endl;
        return SoPhuc(0, 0);
    }
    double th = ((iThuc * sp.iThuc) + (iAo * sp.iAo)) / mau;
    double ao = ((iAo * sp.iThuc) - (iThuc * sp.iAo)) / mau;
    return SoPhuc(th, ao);
}
