#include <bits/stdc++.h>
using namespace std;

class NHANVIEN
{
private:
    char maNV[20];
    char hoTenNV[20];
    char ca[10];
public:
    void nhap();
    void xuat();
};
void NHANVIEN::nhap()
{
    cout << "\nNhap ma nhan vien: ";
    fflush(stdin);
    gets(maNV);
    cout << "Nhap ho ten nhan vien: ";
    fflush(stdin);
    gets(hoTenNV);
    cout << "Nhap ca lam viec: ";
    fflush(stdin);
    gets(ca);
}
void NHANVIEN::xuat()
{
    cout << setw(15) << "Ma nhan vien : " << maNV;
    cout << ". Ho va ten: " << hoTenNV;
    cout << ". Ca lam viec : " << ca<<endl;
}
class BENHNHAN
{
private:
    char maBN[20];
    char hoTenBN[20];
    char diaChi[10];
public:
    void nhap();
    void xuat();
};
void BENHNHAN::nhap()
{
    cout << "\nNhap ma benh nhan: ";
    fflush(stdin);
    gets(maBN);
    cout << "Nhap ho ten benh nhan: ";
    fflush(stdin);
    gets(hoTenBN);
    cout << "Nhap dia chi benh nhan: ";
    fflush(stdin);
    gets(diaChi);

}
void BENHNHAN::xuat()
{
    cout << setw(15) << "Ma benh nhan : " << maBN;
    cout << ". Ho va ten: " << hoTenBN;
    cout << ". Dia chi: " << diaChi<<endl;

}

class TRIEUCHUNG
{
private:
    char maTT[10];
    char tenTC[20];
    float ngay;
    char mucDo[20];
    char ghiChu[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void TRIEUCHUNG::nhap()
{
    cout << "\nNhap ma thu tu: ";
    fflush(stdin);
    gets(maTT);
    cout << "Nhap ten trieu chung: ";
    fflush(stdin);
    gets(tenTC);
    cout << "Nhap so ngay: ";
    cin >>ngay;
    cout << "Nhap muc do: ";
    fflush(stdin);
    gets(mucDo);
    cout << "Ghi chu: ";
    fflush(stdin);
    gets(ghiChu);

}
void TRIEUCHUNG::xuat()
{
    cout << maTT<< setw(15) << tenTC<< setw(15) << ngay << setw(15) << mucDo << setw(15) << ghiChu << endl;
}
class PHIEU
{
private:
    char maP[20];
    char ngayLap[12];
    int n;
    NHANVIEN X;
    BENHNHAN Y;
    TRIEUCHUNG *Z;
public:
    void nhap();
    void xuat();
    void sua();
};
void PHIEU::nhap()
{
    cout << "\nNhap ma phieu: ";
    fflush(stdin);
    gets(maP);
    cout << "Nhap ngay lap: ";
    fflush(stdin);
    gets(ngayLap);
    X.nhap();
    Y.nhap();
    cout<<"\nNhap so trieu chung: ";
    cin>>n;
    Z = new TRIEUCHUNG[n];
    for (int i = 0; i < n; i++)
    {
        Z[i].nhap();
    }
}
void PHIEU::xuat()
{
    cout << setw(40) << "=============PHIEU KHAM===========" << endl;
    cout << "Ma phieu: " << setw(15) << maP;
    cout << setw(15) << "Ngay lap: " << setw(3) << ngayLap<<endl;
    cout << setw(40) << "________Thong tin nhan vien_____" << endl;
    X.xuat();
    cout << setw(40) << "________Thong tin benh nhan_____" << endl;
    Y.xuat();
    cout <<"Ma TT" << setw(15) <<"Ten trieu chung"<< setw(15) << "So ngay" << setw(15) << "Muc do" << setw(15) << "Ghi chu" << endl;
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        Z[i].xuat();
    }

    float sum=0;

    for (int i = 0; i < n; i++)
    {
        sum += Z[i].ngay;
    }
    cout << "----------------------------------------------------------\n";
    cout<<"\nSo ngay mac trung binh: " << setprecision(1) << fixed << sum/3 <<endl;
    cout<<"Chi dinh: Phan luong kham"<<endl;
}
PHIEU::sua(string diaChiReplace){
    strcpy(Y.diaChi, diaChiReplace)
}
int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();


    return 0;
}
