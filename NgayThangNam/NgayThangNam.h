#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H


class NgayThangNam
{
    public:
        NgayThangNam();
        NgayThangNam(int d, int m, int y);
        void Nhap();
        void Xuat() const;
        void NgayThangNamTiepTheo();

    private:
        int iNgay;
        int iThang;
        int iNam;

        bool laNamNhuan(int n) const;
        int timSoNgayTrongThang(int m, int y) const;

};

#endif // NGAYTHANGNAM_H
