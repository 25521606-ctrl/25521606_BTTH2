#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
    public:
        SoPhuc();
        SoPhuc(double th,double ao);
        void Nhap();
        void Xuat() const;
        SoPhuc Tong(SoPhuc sp);
        SoPhuc Hieu(SoPhuc sp);
        SoPhuc Tich(SoPhuc sp);
        SoPhuc Thuong(SoPhuc sp);

    private:
        double iThuc;
        double iAo;
};

#endif // SOPHUC_H
