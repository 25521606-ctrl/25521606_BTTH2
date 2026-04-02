#ifndef THOIGIAN_H
#define THOIGIAN_H


class ThoiGian
{
    public:
        ThoiGian();
        ThoiGian(int h, int m, int s);
        void Nhap();
        void Xuat() const;
        void TinhCongThemMotGiay();

    private:
        int iGio;
        int iPhut;
        int iGiay;
};

#endif // THOIGIAN_H
